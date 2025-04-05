import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy
from std_msgs.msg import Float32
from visualization_msgs.msg import Marker
from std_msgs.msg import ColorRGBA
from geometry_msgs.msg import Vector3
from px4_msgs.msg import VehicleLocalPosition

class FloatTransmitter(Node):

    def __init__(self):
        super().__init__('gs_transmiter')
        qos_profile = QoSProfile(depth=10)
        qos_profile.reliability = ReliabilityPolicy.BEST_EFFORT
        self.sub = self.create_subscription(VehicleLocalPosition, '/fmu/out/vehicle_local_position', self.listener_callback, qos_profile)

        self.nort_pub = self.create_publisher(Marker, 'compas_data', 10)
        self.north_timer = self.create_timer(0.1, self.north_pub_callback)

        self.curr_pub = self.create_publisher(Marker, 'current_data', 10)
        self.curr_timer = self.create_timer(0.1, self.curr_pub_callback)

        self.current_euler_rad = 0

    def listener_callback(self, msg):
        self.current_euler = msg.heading

    def quaternion_from_euler(self, roll, pitch, yaw):
        """
        Convert Euler angles to quaternion.
        """
        cy = np.cos(yaw * 0.5)
        sy = np.sin(yaw * 0.5)
        cp = np.cos(pitch * 0.5)
        sp = np.sin(pitch * 0.5)
        cr = np.cos(roll * 0.5)
        sr = np.sin(roll * 0.5)

        q = np.zeros(4)
        q[0] = cr * cp * cy + sr * sp * sy
        q[1] = sr * cp * cy - cr * sp * sy
        q[2] = cr * sp * cy + sr * cp * sy
        q[3] = cr * cp * sy - sr * sp * cy

        return q

    def count_current(self, rads):
        q_90_z = self.quaternion_from_euler(rads, 0, 0)
       #q_90_z  self.quternion_rom_eule(np.deg2ad(90),0 0)
        return q_90_z
    
    def create_marker(self, name, q_final, scale, color):
        marker = Marker()
        marker.header.frame_id = 'base_link'
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = name
        marker.id = 0
        marker.type = Marker.ARROW
        marker.action = Marker.ADD
        marker.pose.position.x = 0.0
        marker.pose.position.y = 0.0
        marker.pose.position.z = 0.5  # Elevate slightly above the ground
        marker.pose.orientation.x = q_final[0]
        marker.pose.orientation.y = q_final[1]
        marker.pose.orientation.z = q_final[2]
        marker.pose.orientation.w = q_final[3]
        marker.scale = scale  # Flat square with 10cm height
        marker.color = color  # Blue color with full opacity
        marker.lifetime.sec = 0  # 0 means the marker stays forever
        return marker
    
    def create_scale(self, x, y, z):
        scale = Vector3()
        scale.x = x
        scale.y = y 
        scale.z = z
        return scale
    
    def create_color(self, r, g, b, a):
        color = ColorRGBA()
        color.r = r
        color.g = g
        color.b = b 
        color.a = a
        return color

    def north_pub_callback(self):

        q_0 = self.quaternion_from_euler(0, 0, 0)
        north_scale = self.create_scale(3.0, 0.2, 0.01)
        north_color = self.create_color(0.0, 1.0, 0.0, 1.0)
        
        north = self.create_marker('north', q_0, north_scale, north_color)
     
        self.nort_pub.publish(north)

    def curr_pub_callback(self):

        q_current = self.count_current(self.current_euler)
        #self.current_euler_rad += 0.1
        current_scale = self.create_scale(2.0, 0.1, 0.01)
        current_color = self.create_color(1.0, 0.0, 0.0, 1.0)

        actual = self.create_marker('actual', q_current, current_scale, current_color)
        
        self.curr_pub.publish(actual)

def main(args=None):
    rclpy.init(args=args)
    float_transmitter = FloatTransmitter()
    rclpy.spin(float_transmitter)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

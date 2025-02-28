#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from visualization_msgs.msg import Marker, MarkerArray
from geometry_msgs.msg import Quaternion
import math
from px4_msgs.msg import ActuatorMotors, ManualControlSetpoint
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy


class Arrows(Node):

    def __init__(self):
        super().__init__('markers')

        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )

        self.publisher_ = self.create_publisher(MarkerArray, 'thrusters_arrows', 10)
        self.timer_ = self.create_timer(0.05, self.publish_marker)
        self.subscriber_actuator_motors_ = self.create_subscription(ActuatorMotors, 
                                                                    "/fmu/out/actuator_motors", 
                                                                    self.callback_robot, 
                                                                    qos_profile)
        self.subscriber_manual_control_setpoint_ = self.create_subscription(ManualControlSetpoint, 
                                                                            "/fmu/out/manual_control_setpoint", 
                                                                            self.callback_manual_setpoint, 
                                                                            qos_profile)

        self.marker_array = MarkerArray()
        self.id = 1

        self.marker1 = Marker()
        self.marker2 = Marker()
        self.marker3 = Marker()
        self.marker4 = Marker()
        self.marker_net_force = Marker()
        self.marker_manual_setpoint = Marker()
        self.stiff_marker = Marker()
        

        self.THRUSTERS_Z_POSITION = 0.0
        self.ARROW_Y_SCALE = 0.1
        self.ARROW_Z_SCALE = 0.1

        # Thruster 1 = -0.225 0.4 -0.19 0 0 -0.785
        # Thruster 2 = 0.225 0.4 -0.19 0 0 0.785
        # Thruster 3 = -0.225 -0.4 -0.19 0 0 0.785
        # Thruster 4 = 0.225 -0.4 -0.19 0 0 -0.785
        self.initialize_marker(self.marker1, 0.01, self.ARROW_Y_SCALE, self.ARROW_Z_SCALE, -2.0, 2.0, self.THRUSTERS_Z_POSITION, 0, 0, 45)
        self.initialize_marker(self.marker2, 0.01, self.ARROW_Y_SCALE, self.ARROW_Z_SCALE, 2.0, 2.0, self.THRUSTERS_Z_POSITION, 0, 0, 135)
        self.initialize_marker(self.marker3, 0.01, self.ARROW_Y_SCALE, self.ARROW_Z_SCALE, -2.0, -2.0, self.THRUSTERS_Z_POSITION, 0, 0, 225)
        self.initialize_marker(self.marker4, 0.01, self.ARROW_Y_SCALE, self.ARROW_Z_SCALE, 2.0, -2.0, self.THRUSTERS_Z_POSITION, 0, 0, 315)
        self.initialize_marker(self.stiff_marker, 0.01, self.ARROW_Y_SCALE, self.ARROW_Z_SCALE, 0.0, 0.0, self.THRUSTERS_Z_POSITION, 0, 0, 0)

        self.marker_array.markers.append(self.marker1)
        self.marker_array.markers.append(self.marker2)
        self.marker_array.markers.append(self.marker3)
        self.marker_array.markers.append(self.marker4)
        self.marker_array.markers.append(self.stiff_marker)

        # Net force
        self.initialize_net_force_marker(self.marker_net_force)
        self.marker_array.markers.append(self.marker_net_force)

        # Manual setpoint vector
        #self.initialize_marker(self.marker_manual_setpoint, 1.0, self.ARROW_Y_SCALE, self.ARROW_Z_SCALE, 0.,0.,0.,0.,0.,0.)
        #self.marker_array.markers.append(self.marker_manual_setpoint)


        self.get_logger().info("Publishing the marker_arrows topic. Use RVIZ2 to visualize thrusters.")
        
    def quaternion_from_euler(self, roll, pitch, yaw):
        """
        Takes x,y,z rotations and returns quaternion calculated from it.
        """
        cy = math.cos(yaw * 0.5)
        sy = math.sin(yaw * 0.5)
        cp = math.cos(pitch * 0.5)
        sp = math.sin(pitch * 0.5)
        cr = math.cos(roll * 0.5)
        sr = math.sin(roll * 0.5)

        q = Quaternion()
        q.w = cy * cp * cr + sy * sp * sr
        q.x = cy * cp * sr - sy * sp * cr
        q.y = sy * cp * sr + cy * sp * cr
        q.z = sy * cp * cr - cy * sp * sr

        return q
    
    def initialize_marker(self, marker, scale_x, scale_y, scale_z, position_x, position_y, position_z, roll_deg, pitch_deg, yaw_deg):
        """
        Default initialization for thruster marker.
        """
       
        marker.header.frame_id = 'map'
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.type = marker.ARROW
        marker.id = self.id
        self.id += 1

        marker.scale.x = 0.01 
        marker.scale.y = 0.01 
        marker.scale.z = 0.01

        marker.action = marker.ADD
        marker.pose.position.x = position_x
        marker.pose.position.y = position_y
        marker.pose.position.z = position_z

        # Convert degrees to radians
        roll = math.radians(roll_deg)
        pitch = math.radians(pitch_deg)
        yaw = math.radians(yaw_deg)

        # Convert Euler angles to quaternion
        marker.pose.orientation = self.quaternion_from_euler(roll, pitch, yaw)

        # Fixed red color
        self.set_color(marker, 1.0, 0.0, 0.0)

    def initialize_net_force_marker(self, marker):
        """
        Initialize components of net-force vector
        """
        
        marker.header.frame_id = 'map'
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.type = marker.ARROW
        marker.id = self.id
        self.id += 1

        marker.pose.position.x = 0.0
        marker.pose.position.y = 0.0
        marker.pose.position.z = self.THRUSTERS_Z_POSITION

        self.calculate_net_force_scale_x()

        marker.scale.y = self.ARROW_Y_SCALE
        marker.scale.z = self.ARROW_Z_SCALE
        
        # Fixed green color
        self.set_color(marker, 0.0, 1.0, 0.0)

    def calculate_net_force_scale_x(self):
        """
        This function calculates angle and magnitude of the net force vector (green).
        """
        magnitudes = [marker.scale.x for marker in self.marker_array.markers[:4]]  # Magnitudes
        angles = [45, 135, 315, 225]   # Angles in degrees

        # Convert angles to radians
        angles = [math.radians(angle) for angle in angles]

        # Calculate the horizontal and vertical components of each vector
        horizontal_components = [magnitude * math.cos(angle) for magnitude, angle in zip(magnitudes, angles)]
        vertical_components = [magnitude * math.sin(angle) for magnitude, angle in zip(magnitudes, angles)]
        net_horizontal = sum(horizontal_components)
        net_vertical = sum(vertical_components)
        net_magnitude = math.sqrt(net_horizontal ** 2 + net_vertical ** 2) / 10
        net_angle = math.atan2(net_vertical, net_horizontal)
        net_angle_deg = math.degrees(net_angle)
        net_angle_deg = (net_angle_deg + 360) % 360
        self.marker_net_force.pose.orientation = self.quaternion_from_euler(0, 0, net_angle)
        self.marker_net_force.scale.x = net_magnitude


    def publish_marker(self):
        """
        Publish all of the markers to rviz.
        """
        self.publisher_.publish(self.marker_array)

    def callback_robot(self, msg):
        relevant_data = msg.control[:4]
        for index, marker in enumerate(self.marker_array.markers[:4]):
            assert(0 <= index < 4)
            marker.scale.x = float(relevant_data[index]) * 20# Change magnitude to make change visible
        self.calculate_net_force_scale_x()

    def callback_manual_setpoint(self, msg):
        """
        Takes rotaions from manual_control_setpoing topic and properly calculate our vector angle.
        """
        roll, pitch, yaw = msg.roll, msg.pitch, msg.yaw
        self.get_logger().info(f"Manual Setpoint: roll = {roll}\npitch = {pitch}\nyaw = {yaw}")
        self.set_color(self.marker_manual_setpoint, 255.0, 255.0, 71.0)
        self.marker_manual_setpoint.pose.orientation = self.quaternion_from_euler(roll, pitch, yaw)

    def set_color(self, marker, red, green, blue):
        """
        Initialize marker with given color values
        """
        marker.color.r = red
        marker.color.g = green
        marker.color.b = blue
        marker.color.a = 1.0


def main(args=None):
    rclpy.init(args=args)
    node = Arrows()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

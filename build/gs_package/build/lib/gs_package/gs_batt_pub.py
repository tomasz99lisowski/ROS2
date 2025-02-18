import rclpy
from rclpy.node import Node
from visualization_msgs.msg import Marker
from std_msgs.msg import ColorRGBA
from geometry_msgs.msg import Vector3



class MinimalPublisher(Node):
    
    def __init__(self):
        super().__init__('gs_publisher')
        self.publisher_ = self.create_publisher(Marker, 'voltage', 10)
        self.timer = self.create_timer(0.10, self.publish_marker)  # Publish every second
        self.curr_voltage = 12.0
        self.curr_amperage = 1.0
        self.marker_count = 0

    def publish_marker(self):
        marker = Marker()
        marker.header.frame_id = 'base_link'
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = 'text_marker'
        marker.id = 0
        marker.type = Marker.TEXT_VIEW_FACING
        marker.action = Marker.ADD
        marker.pose.position.x = 1.0
        marker.pose.position.y = 1.0
        marker.pose.position.z = 0.5  # Elevate slightly above the ground
        marker.scale = Vector3(x=2.0, y=2.0, z=0.2)  # Flat square with 10cm height
        marker.color = ColorRGBA(r=0.0, g=1.0, b=0.0, a=1.0)  # Blue color with full opacity
        marker.lifetime.sec = 0  # 0 means the marker stays forever
        marker.text = f'Voltage: {self.curr_voltage:.2f} V\nAmperage: {self.curr_amperage:.2f} A\nCount: {self.marker_count}'
        self.curr_voltage += 0.1
        self.curr_amperage += 0.05
        self.publisher_.publish(marker)


def main(args=None):
    rclpy.init(args=args)
    node = MinimalPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32, Float32MultiArray
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy


class TrialNorthPublisher(Node):
    def __init__(self):
        super().__init__('trial_publisher')
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )
        

        self.north_pub = self.create_publisher(Float32, 'north_data', qos_profile)
            
        self.timer = self.create_timer(1.0, self.publish)
        self.current_heading = 0.0

    def publish(self):
        heading_msg = Float32()
        heading_msg.data = self.current_heading
        self.current_heading = 1.0
        self.north_pub.publish(heading_msg)
        self.get_logger().info(f'Published: {heading_msg.data}')


def main(args=None):
    rclpy.init(args=args)
    trial_publisher = TrialNorthPublisher()
    rclpy.spin(trial_publisher)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
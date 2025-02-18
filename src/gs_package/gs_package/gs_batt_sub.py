import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from cv_bridge import CvBridge
import cv2

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('gs_subscriber')
        self.subscription = self.create_subscription(
            Float32,
            'voltage',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info('Receiving: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('gs_subscriber')
        self.subscription = self.create_subscription(
            Image,
            'video_frames',
            self.listener_callback,
            10)
        self.subscription          # prevent unused variable warning
        self.br = CvBridge()

    def listener_callback(self, data):
        self.get_logger().info('Receving video frame')
        currnet_frame = self.br.imgmsg_to_cv2(data)
        cv2.imshow("camera", currnet_frame)
        cv2.waitKey(1)


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
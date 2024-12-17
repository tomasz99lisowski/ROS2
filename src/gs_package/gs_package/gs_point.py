import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PointStamped
from builtin_interfaces.msg import Time


class MinimalPointPublisher(Node):

    def __init__(self):
        super().__init__('gs_point')
        self.publisher_ = self.create_publisher(PointStamped, 'point_coords', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        #self.get_camera_image()
        
    # def get_camera_image(self):
    #     stream = cv2.VideoCapture(0)
    #     if not stream.isOpened():
    #         print("Unable to open camera")
    #         return
    #     while True:
    #         ret, frame = stream.read()
    #         if not ret:
    #             break
    #         cv2.imshow("GS Camera Stream", frame)
    #         if cv2.waitKey(1) == ord("q"):
    #             break
    #     stream.release()
    #     cv2.destroyAllWindows()

    def timer_callback(self):
        msg = PointStamped()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = "map"
        msg.point.x = 1.0
        msg.point.y = 2.0
        msg.point.z = 3.0
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing point location: "%s"' % msg.point)

def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPointPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
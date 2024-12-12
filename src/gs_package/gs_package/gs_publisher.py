import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('gs_publisher')
        self.publisher_ = self.create_publisher(Image, 'video_frames', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.cap = cv2.VideoCapture(0)
        self.br = CvBridge()
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
        ret, frame = self.cap.read()
        if ret == True:
            self.publisher_.publish(self.br.cv2_to_imgmsg(frame))
        self.get_logger().info('Publishing video frame')

def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
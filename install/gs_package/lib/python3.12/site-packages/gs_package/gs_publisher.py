import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import cv2

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('gs_publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.get_camera_image)
        self.i = 0
    #self.get_camera_image()
        
    def get_camera_image(self):
        stream = cv2.VideoCapture(0)
        if not stream.isOpened():
            print("Unable to open camera")
            return
        while True:
            ret, frame = stream.read()
            if not ret:
                break
            cv2.imshow("GS Camera Stream", frame)
            if cv2.waitKey(1) == ord("q"):
                break
        stream.release()
        cv2.destroyAllWindows()

    def timer_callback(self):
        # msg = String()
        # msg.data = 'Hello World: %d' % self.i
        # self.publisher_.publish(msg)
        # self.get_logger().info('Publishing: "%s"' % msg.data)
        # self.i += 1
        
        msg = String()
        msg.data = ''
        self.publisher_.publish(msg)
        self.get_logger().info('')
        self.i = 0





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
import rclpy
from rclpy.node import Node
from px4_msgs.msg.versioned import VehicleGlobalPosition


class North(Node):
    def __init__(self):
        super.__init__('gs_north')
        self.publisher = self.create_publisher(VehicleGlobalPosition, 'north', 10)
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):

        self.publisher.publish()
        self.get_logger().info('Publishing north')
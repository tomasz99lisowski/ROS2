import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
import math
import os
from urdf_parser_py.urdf import URDF

class RobotStatePublisher(Node):

    def __init__(self):
        super().__init__('robot_state_publisher')
        self.publisher_ = self.create_publisher(JointState, 'joint_states', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.joint_state = JointState()

        # Load URDF file
        urdf_file = os.path.join(
            os.path.dirname(__file__), '..', 'sim', 'gs_omni.urdf')
        self.robot = URDF.from_xml_file(urdf_file)

        # Extract joint names
        self.joint_names = [joint.name for joint in self.robot.joints]

    def timer_callback(self):
        now = self.get_clock().now()
        self.joint_state.header = Header()
        self.joint_state.header.stamp = now.to_msg()

        # Update joint states
        self.joint_state.name = self.joint_names
        self.joint_state.position = [math.sin(now.seconds_nanoseconds()[0]) for _ in self.joint_names]
        self.joint_state.velocity = []
        self.joint_state.effort = []

        self.publisher_.publish(self.joint_state)

def main(args=None):
    rclpy.init(args=args)
    robot_state_publisher = RobotStatePublisher()
    rclpy.spin(robot_state_publisher)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
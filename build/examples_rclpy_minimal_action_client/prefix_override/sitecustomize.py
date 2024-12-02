import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/tomasz/Desktop/sese_ws/install/examples_rclpy_minimal_action_client'

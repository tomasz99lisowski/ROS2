import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32, Float32MultiArray
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy

class TrialBatteryPublisher(Node):
    def __init__(self):
        super().__init__('trial_publisher')
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )
        self.battery_voltage = 12.5  # Example initial value
        self.battery_current = 1.2   # Example initial value

        self.battery_voltage_pub = self.create_publisher(Float32, 'battery_voltage', qos_profile)
        self.battery_current_pub = self.create_publisher(Float32, 'battery_current', qos_profile)
        self.temp_publisher = self.create_publisher(Float32MultiArray, 'battery_temp', qos_profile)
        self.yellow_publisher = self.create_publisher(Float32, 'buoy_topic1', qos_profile)
        self.black_publisher = self.create_publisher(Float32, 'buoy_topic2', qos_profile)
        self.timer = self.create_timer(1.0, self.publish)

    def publish(self):
        # Publish battery voltage
        voltage_msg = Float32()
        voltage_msg.data = self.battery_voltage
        self.battery_voltage += 0.1
        self.battery_voltage_pub.publish(voltage_msg)

        # Publish battery current
        current_msg = Float32()
        current_msg.data = 2.0
        self.battery_current_pub.publish(current_msg)

        # Publish battery status
        status_msg = Float32MultiArray()
        status_msg.data = [
            1.0, #Main box temperature
            2.0, #Battery box temperature 1
            3.0  #Battery box temperature 2
        ]
        self.temp_publisher.publish(status_msg)

        # Publish trial data
        
        yellow_msg = Float32()
        yellow_msg.data = 1.0
        self.yellow_publisher.publish(yellow_msg)

        black_msg = Float32()
        black_msg.data = 2.0
        self.black_publisher.publish(black_msg)

        self.get_logger().info(f'Published trial data: {voltage_msg.data}, {current_msg.data}, {status_msg.data}, {yellow_msg.data}, {black_msg.data}')     

def main(args=None):
    rclpy.init(args=args)
    trial_publisher = TrialBatteryPublisher()
    rclpy.spin(trial_publisher)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
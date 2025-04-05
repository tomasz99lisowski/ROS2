import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32, Float32MultiArray
from visualization_msgs.msg import Marker, MarkerArray
from std_msgs.msg import ColorRGBA
from geometry_msgs.msg import Vector3
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy

class FloatTransmitter(Node):

    def __init__(self):
        super().__init__('gs_transmiter')

        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )

        self.pub = self.create_publisher(MarkerArray, 'battery_data', 10)
        self.timer = self.create_timer(1.0, self.pub_callback)

        self.create_subscription(Float32, 'battery_voltage', self.voltage_listener_callback, qos_profile)
        self.create_subscription(Float32, 'battery_current', self.current_listener_callback, qos_profile)
        self.create_subscription(Float32MultiArray, 'battery_temp', self.temperature_listener_callback, qos_profile)
        self.create_subscription(Float32, 'buoy_topic1', self.yellow_buoy_listener_callback, qos_profile)
        self.create_subscription(Float32, 'buoy_topic2', self.black_buoy_listener_callback, qos_profile)

        self.marker_array = MarkerArray()
        self.id = 1

        # Initialize class variables
        self.actual_voltage = 0.0
        self.actual_current = 0.0
        self.main_box_temperature = 0.0
        self.battery_box_temperature1 = 0.0
        self.battery_box_temperature2 = 0.0
        self.yellow_buoy_count = 0.0
        self.black_buoy_count = 0.0

        self.voltage_marker = Marker()
        self.current_marker = Marker()
        self.temperature_main_box_marker = Marker()
        self.temperature_battery_box1_marker = Marker()
        self.temperature_battery_box2_marker = Marker()
        self.yellow_buoy_marker = Marker()
        self.black_buoy_marker = Marker()

        self.initialize_marker(self.voltage_marker, 'Voltage', self.actual_voltage, 0.0, 0.0)
        self.initialize_marker(self.current_marker, 'Current', self.actual_current, 0.0, 1.0)
        self.initialize_marker(self.temperature_main_box_marker, 'Temperature', self.main_box_temperature, 0.0, 2.0)
        self.initialize_marker(self.temperature_battery_box1_marker, 'Temperature1', self.battery_box_temperature1, 0.0, 3.0)
        self.initialize_marker(self.temperature_battery_box2_marker, 'Temperature2', self.battery_box_temperature2, 0.0, 4.0)
        self.initialize_marker(self.yellow_buoy_marker, 'Yellow', self.yellow_buoy_count, 0.0, 5.0)
        self.initialize_marker(self.black_buoy_marker, 'Black', self.black_buoy_count, 0.0, 6.0)
        
        self.marker_array.markers.append(self.voltage_marker)
        self.marker_array.markers.append(self.current_marker)
        self.marker_array.markers.append(self.temperature_main_box_marker)
        self.marker_array.markers.append(self.temperature_battery_box1_marker)
        self.marker_array.markers.append(self.temperature_battery_box2_marker)
        self.marker_array.markers.append(self.yellow_buoy_marker)
        self.marker_array.markers.append(self.black_buoy_marker)

        

    def voltage_listener_callback(self, msg):
        self.actual_voltage = msg.data

    def current_listener_callback(self, msg):
        self.actual_current = msg.data

    def temperature_listener_callback(self, msg):
        self.main_box_temperature = msg.data[0]
        self.battery_box_temperature1 = msg.data[1]
        self.battery_box_temperature2 = msg.data[2]

    def yellow_buoy_listener_callback(self, msg):
        self.yellow_buoy_count = msg.data

    def black_buoy_listener_callback(self, msg):
        self.black_buoy_count = msg.data

    def initialize_marker(self, marker, text, data, position_x, position_y):
        marker.header.frame_id = 'base_link'
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = 'text_marker'
        marker.id = self.id
        marker.type = Marker.TEXT_VIEW_FACING
        marker.action = Marker.ADD
        marker.pose.position.x = position_x
        marker.pose.position.y = position_y
        marker.pose.position.z = 0.5
        marker.scale = Vector3(x=2.0, y=2.0, z=0.2)
        marker.color = ColorRGBA(r=0.0, g=1.0, b=0.0, a=1.0) 
        marker.text = f'{text}: %.2f' % data
        self.id += 1

    def update_marker(self):
        self.voltage_marker.text = f'Voltage: %.2f' % self.actual_voltage
        self.current_marker.text = f'Current: %.2f' % self.actual_current
        self.temperature_main_box_marker.text = f'Main box temperature: %.2f' % self.main_box_temperature
        self.temperature_battery_box1_marker.text = f'Battery box temperature 1: %.2f' % self.battery_box_temperature1
        self.temperature_battery_box2_marker.text = f'Battery box temperature 2: %.2f' % self.battery_box_temperature2
        self.yellow_buoy_marker.text = f'Yellow buoy count: %.2f' % self.yellow_buoy_count
        self.black_buoy_marker.text = f'Black buoy count: %.2f' % self.black_buoy_count

    def pub_callback(self):    
        
        self.update_marker()
        self.pub.publish(self.marker_array)

        self.get_logger().info(f'Received data: {self.actual_voltage}, {self.actual_current}, {self.main_box_temperature}, {self.battery_box_temperature1}, {self.battery_box_temperature2}, {self.yellow_buoy_count}, {self.black_buoy_count}')

def main(args=None):
    rclpy.init(args=args)
    float_transmitter = FloatTransmitter()
    rclpy.spin(float_transmitter)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
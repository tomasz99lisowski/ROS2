#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "std_msgs/msg/float32.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses a fancy C++11 lambda
* function to shorten the callback syntax, at the expense of making the
* code somewhat more difficult to understand at first glance. */



class FloatTransmitter : public rclcpp::Node
{
public:
    float curr_voltage = 0.0;
  FloatTransmitter()
  : Node("float_transmitter")
  {
    subscription_ = this->create_subscription<std_msgs::msg::Float32>(
        "topic", 10, [this](std_msgs::msg::Float32::UniquePtr msg) {
          curr_voltage = msg->data;
          RCLCPP_INFO(this->get_logger(), "I heard: '%f'", curr_voltage);
        });
    publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("topic", 10);
    
    timer_ = this->create_wall_timer(500ms, [this]() -> void {
        auto marker = visualization_msgs::msg::Marker();
    
        marker.header.frame_id = "/base_link";
        marker.header.stamp = rclcpp::Clock().now();
        
        marker.ns = "basic_shapes";
        marker.id = 0;
        
        marker.type = visualization_msgs::msg::Marker::TEXT_VIEW_FACING;
        
        marker.action = visualization_msgs::msg::Marker::ADD;
        
        marker.pose.position.x = 0;
        marker.pose.position.y = 0;
        marker.pose.position.z = 0;
        marker.pose.orientation.x = 0.0;
        marker.pose.orientation.y = 0.0;
        marker.pose.orientation.z = 0.0;
        marker.pose.orientation.w = 1.0;
        
        marker.scale.x = 1.0;
        marker.scale.y = 1.0;
        marker.scale.z = 1.0;
        
        marker.color.r = 0.0f;
        marker.color.g = 1.0f;
        marker.color.b = 0.0f;
        marker.color.a = 1.0;   // Don't forget to set the alpha!
        
        marker.lifetime.sec = 0;
        marker.text = "Voltage: " + std::to_string(curr_voltage);
        curr_voltage += 0.1;
        publisher_->publish(marker);
    });
  }

private:
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr subscription_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    size_t count_;
};

// class MinimalTransmitter : public rclcpp::Node
// {
// public:
//   MinimalTransmitter()
//   : Node("minimal_publisher"), count_(0)
//   {
//     publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("topic", 10);
//     auto timer_callback =
//       [this]() -> void {
//         auto marker = visualization_msgs::msg::Marker();
      
//         marker.header.frame_id = "/base_link";
//         marker.header.stamp = rclcpp::Clock().now();
        
//         marker.ns = "basic_shapes";
//         marker.id = 0;
        
//         marker.type = visualization_msgs::msg::Marker::TEXT_VIEW_FACING;
        
//         marker.action = visualization_msgs::msg::Marker::ADD;
        
//         marker.pose.position.x = 0;
//         marker.pose.position.y = 0;
//         marker.pose.position.z = 0;
//         marker.pose.orientation.x = 0.0;
//         marker.pose.orientation.y = 0.0;
//         marker.pose.orientation.z = 0.0;
//         marker.pose.orientation.w = 1.0;
        
//         marker.scale.x = 1.0;
//         marker.scale.y = 1.0;
//         marker.scale.z = 1.0;
        
//         marker.color.r = 0.0f;
//         marker.color.g = 1.0f;
//         marker.color.b = 0.0f;
//         marker.color.a = 1.0;   // Don't forget to set the alpha!
        
//         marker.lifetime.sec = 0;
//         marker.text = "Voltage: " + std::to_string(curr_voltage);
//         curr_voltage += 0.1;
//         publisher_->publish(marker);
//       };
//     timer_ = this->create_wall_timer(500ms, timer_callback);
//   }

// private:
//   rclcpp::TimerBase::SharedPtr timer_;
//   rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr publisher_;
//   size_t count_;
// };

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<FloatTransmitter>());
  rclcpp::shutdown();
  return 0;
}
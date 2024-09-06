#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <linux/unistd.h>

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::Node test_node("test_node");
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_test = test_node.create_publisher<std_msgs::msg::String>("pub_test", 10);

    std_msgs::msg::String pub_msg{};
    int count{};

    while (rclcpp::ok())
    {
        pub_msg.data = "hello word " + std::to_string(count++);
        pub_test->publish(pub_msg);
        sleep(2);
    }

    rclcpp::shutdown();
    return 0;
}
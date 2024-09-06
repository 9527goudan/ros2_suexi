#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include "my_msgs/msg/test.hpp"

void sub_callbark(const std_msgs::msg::String &msg_str)
{
    my_msgs::msg::Test myMsg{};
    myMsg.log = msg_str.data;
    myMsg.pose = 11311;

    std::cout << msg_str.data.c_str() << std::endl << "myMsg.log:" << myMsg.log.c_str() << "\nmyMsg.pose: " << myMsg.pose << std::endl;
}


int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::Node sub_node("sub_test");
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_test = sub_node.create_subscription<std_msgs::msg::String>("pub_test", 10, &sub_callbark);
    auto pub_test1 = sub_node.create_publisher<std_msgs::msg::String>("pub_test2", 10);

    //  rclcpp::spin(sub_node.get_node_base_interface());
    std_msgs::msg::String pubMsg{};

    rclcpp::Rate myRate(20);
    while (rclcpp::ok())
    {
        pubMsg.data = "111111111";
        std::cout << pubMsg.data.c_str() << std::endl;
        pub_test1->publish(pubMsg);
        myRate.sleep();
        rclcpp::spin_some(sub_node.get_node_base_interface());
    }

    rclcpp::shutdown();
    return 0;
}
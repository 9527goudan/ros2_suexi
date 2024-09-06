#include <rclcpp/rclcpp.hpp>
#include "my_msgs/srv/test.hpp"


void add(my_msgs::srv::Test::Request::ConstSharedPtr reques, my_msgs::srv::Test::Response::SharedPtr response)
{
    response->sum = reques->a + reques->b;
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %ld" " b: %ld",
                reques->a, reques->b);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", response->sum);
}

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::Node server_Node("server_node");
    auto server = server_Node.create_service<my_msgs::srv::Test>("add_two_ints" , &add);
    rclcpp::spin(server_Node.get_node_base_interface());
    rclcpp::shutdown();
    return 0;
}
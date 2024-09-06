#include <rclcpp/rclcpp.hpp>
#include "my_msgs/srv/test.hpp"

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::Node server_client_Node("server_client_node");
    auto server_client = server_client_Node.create_client<my_msgs::srv::Test>("add_two_ints");
    

    //waite server
    while (!server_client->wait_for_service())
    {
        if(!rclcpp::ok())
        {
            RCLCPP_ERROR(rclcpp::get_logger("server_client_node"), "rclcpp::ok() exit...");
            return 1;
        }
        RCLCPP_INFO(rclcpp::get_logger("server_client_node"), "server not available, waiting again...");
        usleep(800 * 1000); //waite 800 ms
    }
    RCLCPP_INFO(rclcpp::get_logger("server_client_node"), "11111111");
    
    auto req_ = std::make_shared<my_msgs::srv::Test::Request>();

    while (rclcpp::ok())
    {
        std::cout << "输入 a:";
        std::cin >> req_->a;
        std::cout << "输入 b:";
        std::cin >> req_->b; 

        auto res_ = server_client->async_send_request(req_);

        if(rclcpp::spin_until_future_complete(server_client_Node.get_node_base_interface(), res_) == rclcpp::FutureReturnCode::SUCCESS)
            RCLCPP_INFO(rclcpp::get_logger("sum server client"),  "sum : %ld", res_.get()->sum);
        else
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");

        usleep(800 * 1000);
    }
    
    rclcpp::shutdown();
    return 0;
}
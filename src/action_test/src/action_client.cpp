#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include "my_msgs/action/test.hpp"

using testClient = my_msgs::action::Test;
using goalHandleTestClient = rclcpp_action::ClientGoalHandle<testClient>;

//server接受或拒绝goal时调用
void goal_response_callback(const goalHandleTestClient::SharedPtr &goal_handle)
{
    std::cout << "goal_status: " << goal_handle->get_status() << std::endl;
}


//接受server 执行goal的反馈时调用
void feedback_callback(goalHandleTestClient::SharedPtr, testClient::Feedback::ConstSharedPtr feedback)
{
    std::cout << "feedback: " << feedback->feedback << std::endl;
}

//收到goal执行结果时调用
void reslut_callback(const goalHandleTestClient::WrappedResult &reslut)
{
    switch (reslut.code) 
    {
      case rclcpp_action::ResultCode::SUCCEEDED:
        break;
      case rclcpp_action::ResultCode::ABORTED:
        std::cout << "Goal was aborted" << std::endl;
        return;
      case rclcpp_action::ResultCode::CANCELED:
        std::cout << "Goal was canceled" << std::endl;
        return;
      default:
        std::cout << "Unknown result code" << std::endl;
        return;
    }
    std::cout << "result.get()" << reslut.result->result << std::endl;

}


int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::Node actionClient_node("action_client");


    auto client = rclcpp_action::create_client<testClient>(&actionClient_node, "test_action_server");
    auto send_goal_options = rclcpp_action::Client<testClient>::SendGoalOptions();
    send_goal_options.goal_response_callback = &goal_response_callback;
    send_goal_options.feedback_callback = &feedback_callback;
    send_goal_options.result_callback = &reslut_callback;


    //等待action——server上线
    while (!client->wait_for_action_server())
    {
        if (!rclcpp::ok())
        {
            std::cout << "退出 ";
            rclcpp::shutdown();
            return -1;
        }
        else
        {
            std::cout << "waite for action server [ test_action_server ]" << std::endl;
            usleep(800 * 1000);
        }
    }

    testClient::Goal goalMsg;
    goalMsg.goal = 55.66;

    client->async_send_goal(goalMsg, send_goal_options);
    rclcpp::spin(actionClient_node.get_node_base_interface());
    rclcpp::shutdown();
    return 0;
}
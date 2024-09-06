#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include "my_msgs/action/test.hpp"

using testAction = my_msgs::action::Test;
using goalHandleTestAction = rclcpp_action::ServerGoalHandle<testAction>;


//接受目标时调用
rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uuid, testAction::Goal::ConstSharedPtr goal)
{
    std::cout << "uuid" << uuid.data() << "\ngoal:" << goal->goal << std::endl;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

//取消goal时操作
rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<goalHandleTestAction> goal_handle)
{
    std::cout << "333333" << std::endl;
    (void)goal_handle;
    std::cout << "444444" << std::endl;
    return rclcpp_action::CancelResponse::ACCEPT;

}


//接受目标执行目标操作
void handle_accepted(const std::shared_ptr<goalHandleTestAction> goal_handle)
{
    //反馈目标执行信息
    auto feedback = std::make_shared<testAction::Feedback>();
    auto &sequence = feedback->feedback;
    sequence = 7.0;
    goal_handle->publish_feedback(feedback);
    
    //计算结果并将结果状态pub到client
    auto resultMsg = std::make_shared<testAction::Result>();
    auto &result_msg = resultMsg->result;
    result_msg = goal_handle->get_goal()->goal * 10;
    goal_handle->succeed(resultMsg);
    std::cout << "result:" << resultMsg.get()->result << std::endl;
}


int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::Node actionServer_node("action_server");

    auto server = rclcpp_action::create_server<my_msgs::action::Test>(&actionServer_node, "test_action_server", &handle_goal, &handle_cancel, &handle_accepted);
    rclcpp::spin(actionServer_node.get_node_base_interface());
    rclcpp::shutdown();
    return 0;
}
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <jsoncpp/json/json.h>

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::Node paramNode("param_node");
    std::string param_1{};
    Json::Value paramName{};
    while (rclcpp::ok())
    {
        std::string param_old{}, param_name{};
        param_old = param_1;
        std::cout << "设置参数名称：";
        std::cin >> param_name;
        paramNode.declare_parameter(param_name, "world");//对未声明参数进行声明
        paramName.append(param_name);
        std::cout << "声明参数并默认初始值【world】 paramName: " << param_name.c_str() << "paramVale:" << paramNode.get_parameter(param_name).as_string() << std::endl;
        std::cout << "设置参数值：";
        std::cin >> param_1;

        auto myParam = rclcpp::Parameter(param_name, param_1);
        paramNode.set_parameter(myParam);
        std::cout << "paramName: " << param_name.c_str() << "paramVale:" << paramNode.get_parameter(param_name).as_string() << std::endl;
        std::cout << "paaramName_Value:" << paramName << std::endl;
    }
    rclcpp::shutdown();
    return 0;
} 
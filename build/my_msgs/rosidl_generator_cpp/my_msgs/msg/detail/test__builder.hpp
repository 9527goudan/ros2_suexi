// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msgs:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__TEST__BUILDER_HPP_
#define MY_MSGS__MSG__DETAIL__TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_msgs/msg/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_msgs
{

namespace msg
{

namespace builder
{

class Init_Test_pose
{
public:
  explicit Init_Test_pose(::my_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  ::my_msgs::msg::Test pose(::my_msgs::msg::Test::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::msg::Test msg_;
};

class Init_Test_log
{
public:
  Init_Test_log()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_pose log(::my_msgs::msg::Test::_log_type arg)
  {
    msg_.log = std::move(arg);
    return Init_Test_pose(msg_);
  }

private:
  ::my_msgs::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::msg::Test>()
{
  return my_msgs::msg::builder::Init_Test_log();
}

}  // namespace my_msgs

#endif  // MY_MSGS__MSG__DETAIL__TEST__BUILDER_HPP_

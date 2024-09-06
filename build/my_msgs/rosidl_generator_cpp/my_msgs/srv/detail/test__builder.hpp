// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msgs:srv/Test.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__SRV__DETAIL__TEST__BUILDER_HPP_
#define MY_MSGS__SRV__DETAIL__TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_msgs/srv/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_msgs
{

namespace srv
{

namespace builder
{

class Init_Test_Request_b
{
public:
  explicit Init_Test_Request_b(::my_msgs::srv::Test_Request & msg)
  : msg_(msg)
  {}
  ::my_msgs::srv::Test_Request b(::my_msgs::srv::Test_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::srv::Test_Request msg_;
};

class Init_Test_Request_a
{
public:
  Init_Test_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_Request_b a(::my_msgs::srv::Test_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Test_Request_b(msg_);
  }

private:
  ::my_msgs::srv::Test_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::srv::Test_Request>()
{
  return my_msgs::srv::builder::Init_Test_Request_a();
}

}  // namespace my_msgs


namespace my_msgs
{

namespace srv
{

namespace builder
{

class Init_Test_Response_sum
{
public:
  Init_Test_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_msgs::srv::Test_Response sum(::my_msgs::srv::Test_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::srv::Test_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::srv::Test_Response>()
{
  return my_msgs::srv::builder::Init_Test_Response_sum();
}

}  // namespace my_msgs

#endif  // MY_MSGS__SRV__DETAIL__TEST__BUILDER_HPP_

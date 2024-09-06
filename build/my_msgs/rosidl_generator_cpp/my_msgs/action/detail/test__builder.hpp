// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msgs:action/Test.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__ACTION__DETAIL__TEST__BUILDER_HPP_
#define MY_MSGS__ACTION__DETAIL__TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_msgs/action/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_msgs
{

namespace action
{

namespace builder
{

class Init_Test_Goal_goal
{
public:
  Init_Test_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_msgs::action::Test_Goal goal(::my_msgs::action::Test_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::action::Test_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::action::Test_Goal>()
{
  return my_msgs::action::builder::Init_Test_Goal_goal();
}

}  // namespace my_msgs


namespace my_msgs
{

namespace action
{

namespace builder
{

class Init_Test_Result_result
{
public:
  Init_Test_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_msgs::action::Test_Result result(::my_msgs::action::Test_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::action::Test_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::action::Test_Result>()
{
  return my_msgs::action::builder::Init_Test_Result_result();
}

}  // namespace my_msgs


namespace my_msgs
{

namespace action
{

namespace builder
{

class Init_Test_Feedback_feedback
{
public:
  Init_Test_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_msgs::action::Test_Feedback feedback(::my_msgs::action::Test_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::action::Test_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::action::Test_Feedback>()
{
  return my_msgs::action::builder::Init_Test_Feedback_feedback();
}

}  // namespace my_msgs


namespace my_msgs
{

namespace action
{

namespace builder
{

class Init_Test_SendGoal_Request_goal
{
public:
  explicit Init_Test_SendGoal_Request_goal(::my_msgs::action::Test_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_msgs::action::Test_SendGoal_Request goal(::my_msgs::action::Test_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::action::Test_SendGoal_Request msg_;
};

class Init_Test_SendGoal_Request_goal_id
{
public:
  Init_Test_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_SendGoal_Request_goal goal_id(::my_msgs::action::Test_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Test_SendGoal_Request_goal(msg_);
  }

private:
  ::my_msgs::action::Test_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::action::Test_SendGoal_Request>()
{
  return my_msgs::action::builder::Init_Test_SendGoal_Request_goal_id();
}

}  // namespace my_msgs


namespace my_msgs
{

namespace action
{

namespace builder
{

class Init_Test_SendGoal_Response_stamp
{
public:
  explicit Init_Test_SendGoal_Response_stamp(::my_msgs::action::Test_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_msgs::action::Test_SendGoal_Response stamp(::my_msgs::action::Test_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::action::Test_SendGoal_Response msg_;
};

class Init_Test_SendGoal_Response_accepted
{
public:
  Init_Test_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_SendGoal_Response_stamp accepted(::my_msgs::action::Test_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Test_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_msgs::action::Test_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::action::Test_SendGoal_Response>()
{
  return my_msgs::action::builder::Init_Test_SendGoal_Response_accepted();
}

}  // namespace my_msgs


namespace my_msgs
{

namespace action
{

namespace builder
{

class Init_Test_GetResult_Request_goal_id
{
public:
  Init_Test_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_msgs::action::Test_GetResult_Request goal_id(::my_msgs::action::Test_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::action::Test_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::action::Test_GetResult_Request>()
{
  return my_msgs::action::builder::Init_Test_GetResult_Request_goal_id();
}

}  // namespace my_msgs


namespace my_msgs
{

namespace action
{

namespace builder
{

class Init_Test_GetResult_Response_result
{
public:
  explicit Init_Test_GetResult_Response_result(::my_msgs::action::Test_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_msgs::action::Test_GetResult_Response result(::my_msgs::action::Test_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::action::Test_GetResult_Response msg_;
};

class Init_Test_GetResult_Response_status
{
public:
  Init_Test_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_GetResult_Response_result status(::my_msgs::action::Test_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Test_GetResult_Response_result(msg_);
  }

private:
  ::my_msgs::action::Test_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::action::Test_GetResult_Response>()
{
  return my_msgs::action::builder::Init_Test_GetResult_Response_status();
}

}  // namespace my_msgs


namespace my_msgs
{

namespace action
{

namespace builder
{

class Init_Test_FeedbackMessage_feedback
{
public:
  explicit Init_Test_FeedbackMessage_feedback(::my_msgs::action::Test_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_msgs::action::Test_FeedbackMessage feedback(::my_msgs::action::Test_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::action::Test_FeedbackMessage msg_;
};

class Init_Test_FeedbackMessage_goal_id
{
public:
  Init_Test_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_FeedbackMessage_feedback goal_id(::my_msgs::action::Test_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Test_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_msgs::action::Test_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::action::Test_FeedbackMessage>()
{
  return my_msgs::action::builder::Init_Test_FeedbackMessage_goal_id();
}

}  // namespace my_msgs

#endif  // MY_MSGS__ACTION__DETAIL__TEST__BUILDER_HPP_

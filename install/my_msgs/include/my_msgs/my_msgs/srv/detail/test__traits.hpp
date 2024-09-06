// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_msgs:srv/Test.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__SRV__DETAIL__TEST__TRAITS_HPP_
#define MY_MSGS__SRV__DETAIL__TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_msgs/srv/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Test_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Test_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Test_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_msgs::srv::Test_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_msgs::srv::Test_Request & msg)
{
  return my_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_msgs::srv::Test_Request>()
{
  return "my_msgs::srv::Test_Request";
}

template<>
inline const char * name<my_msgs::srv::Test_Request>()
{
  return "my_msgs/srv/Test_Request";
}

template<>
struct has_fixed_size<my_msgs::srv::Test_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_msgs::srv::Test_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_msgs::srv::Test_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Test_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Test_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Test_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_msgs::srv::Test_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_msgs::srv::Test_Response & msg)
{
  return my_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_msgs::srv::Test_Response>()
{
  return "my_msgs::srv::Test_Response";
}

template<>
inline const char * name<my_msgs::srv::Test_Response>()
{
  return "my_msgs/srv/Test_Response";
}

template<>
struct has_fixed_size<my_msgs::srv::Test_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_msgs::srv::Test_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_msgs::srv::Test_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_msgs::srv::Test>()
{
  return "my_msgs::srv::Test";
}

template<>
inline const char * name<my_msgs::srv::Test>()
{
  return "my_msgs/srv/Test";
}

template<>
struct has_fixed_size<my_msgs::srv::Test>
  : std::integral_constant<
    bool,
    has_fixed_size<my_msgs::srv::Test_Request>::value &&
    has_fixed_size<my_msgs::srv::Test_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_msgs::srv::Test>
  : std::integral_constant<
    bool,
    has_bounded_size<my_msgs::srv::Test_Request>::value &&
    has_bounded_size<my_msgs::srv::Test_Response>::value
  >
{
};

template<>
struct is_service<my_msgs::srv::Test>
  : std::true_type
{
};

template<>
struct is_service_request<my_msgs::srv::Test_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_msgs::srv::Test_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_MSGS__SRV__DETAIL__TEST__TRAITS_HPP_

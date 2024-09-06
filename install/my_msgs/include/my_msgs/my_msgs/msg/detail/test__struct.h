// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_msgs:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__TEST__STRUCT_H_
#define MY_MSGS__MSG__DETAIL__TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'log'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Test in the package my_msgs.
typedef struct my_msgs__msg__Test
{
  rosidl_runtime_c__String log;
  int64_t pose;
} my_msgs__msg__Test;

// Struct for a sequence of my_msgs__msg__Test.
typedef struct my_msgs__msg__Test__Sequence
{
  my_msgs__msg__Test * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_msgs__msg__Test__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_MSGS__MSG__DETAIL__TEST__STRUCT_H_

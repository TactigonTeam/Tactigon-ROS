// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tactigon_msgs:msg/Gesture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/gesture.h"


#ifndef TACTIGON_MSGS__MSG__DETAIL__GESTURE__STRUCT_H_
#define TACTIGON_MSGS__MSG__DETAIL__GESTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'gesture'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Gesture in the package tactigon_msgs.
typedef struct tactigon_msgs__msg__Gesture
{
  rosidl_runtime_c__String gesture;
  float probability;
  float confidence;
  float displacement;
} tactigon_msgs__msg__Gesture;

// Struct for a sequence of tactigon_msgs__msg__Gesture.
typedef struct tactigon_msgs__msg__Gesture__Sequence
{
  tactigon_msgs__msg__Gesture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tactigon_msgs__msg__Gesture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TACTIGON_MSGS__MSG__DETAIL__GESTURE__STRUCT_H_

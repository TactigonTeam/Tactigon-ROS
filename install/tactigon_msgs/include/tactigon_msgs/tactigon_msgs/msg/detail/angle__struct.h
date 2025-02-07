// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tactigon_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/angle.h"


#ifndef TACTIGON_MSGS__MSG__DETAIL__ANGLE__STRUCT_H_
#define TACTIGON_MSGS__MSG__DETAIL__ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Angle in the package tactigon_msgs.
typedef struct tactigon_msgs__msg__Angle
{
  float roll;
  float pitch;
  float yaw;
} tactigon_msgs__msg__Angle;

// Struct for a sequence of tactigon_msgs__msg__Angle.
typedef struct tactigon_msgs__msg__Angle__Sequence
{
  tactigon_msgs__msg__Angle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tactigon_msgs__msg__Angle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TACTIGON_MSGS__MSG__DETAIL__ANGLE__STRUCT_H_

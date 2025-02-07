// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tactigon_msgs:msg/Touch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/touch.h"


#ifndef TACTIGON_MSGS__MSG__DETAIL__TOUCH__STRUCT_H_
#define TACTIGON_MSGS__MSG__DETAIL__TOUCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ONE_FINGER_NONE'.
enum
{
  tactigon_msgs__msg__Touch__ONE_FINGER_NONE = 0
};

/// Constant 'ONE_FINGER_SINGLE_TAP'.
enum
{
  tactigon_msgs__msg__Touch__ONE_FINGER_SINGLE_TAP = 1
};

/// Constant 'ONE_FINGER_TAP_AND_HOLD'.
enum
{
  tactigon_msgs__msg__Touch__ONE_FINGER_TAP_AND_HOLD = 2
};

/// Constant 'ONE_FINGER_SWIPE_X_NEG'.
enum
{
  tactigon_msgs__msg__Touch__ONE_FINGER_SWIPE_X_NEG = 4
};

/// Constant 'ONE_FINGER_SWIPE_X_POS'.
enum
{
  tactigon_msgs__msg__Touch__ONE_FINGER_SWIPE_X_POS = 8
};

/// Constant 'ONE_FINGER_SWIPE_Y_POS'.
enum
{
  tactigon_msgs__msg__Touch__ONE_FINGER_SWIPE_Y_POS = 16
};

/// Constant 'ONE_FINGER_SWIPE_Y_NEG'.
enum
{
  tactigon_msgs__msg__Touch__ONE_FINGER_SWIPE_Y_NEG = 32
};

/// Constant 'TWO_FINGER_NONE'.
enum
{
  tactigon_msgs__msg__Touch__TWO_FINGER_NONE = 0
};

/// Constant 'TWO_FINGER_TAP'.
enum
{
  tactigon_msgs__msg__Touch__TWO_FINGER_TAP = 1
};

/// Constant 'TWO_FINGER_SCROLL'.
enum
{
  tactigon_msgs__msg__Touch__TWO_FINGER_SCROLL = 2
};

/// Constant 'TWO_FINGER_ZOOM'.
enum
{
  tactigon_msgs__msg__Touch__TWO_FINGER_ZOOM = 4
};

/// Struct defined in msg/Touch in the package tactigon_msgs.
typedef struct tactigon_msgs__msg__Touch
{
  uint8_t one_finger;
  uint8_t two_finger;
  float x_pos;
  float y_pos;
} tactigon_msgs__msg__Touch;

// Struct for a sequence of tactigon_msgs__msg__Touch.
typedef struct tactigon_msgs__msg__Touch__Sequence
{
  tactigon_msgs__msg__Touch * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tactigon_msgs__msg__Touch__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TACTIGON_MSGS__MSG__DETAIL__TOUCH__STRUCT_H_

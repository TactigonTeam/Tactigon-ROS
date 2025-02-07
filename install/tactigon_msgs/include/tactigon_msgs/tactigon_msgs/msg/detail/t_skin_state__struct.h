// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tactigon_msgs:msg/TSkinState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/t_skin_state.h"


#ifndef TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__STRUCT_H_
#define TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'BLE_SELECTOR_NONE'.
enum
{
  tactigon_msgs__msg__TSkinState__BLE_SELECTOR_NONE = 0
};

/// Constant 'BLE_SELECTOR_SENSORS'.
enum
{
  tactigon_msgs__msg__TSkinState__BLE_SELECTOR_SENSORS = 1
};

/// Constant 'BLE_SELECTOR_AUDIO'.
enum
{
  tactigon_msgs__msg__TSkinState__BLE_SELECTOR_AUDIO = 2
};

// Include directives for member types
// Member 'touchpad'
#include "tactigon_msgs/msg/detail/touch__struct.h"
// Member 'angle'
#include "tactigon_msgs/msg/detail/angle__struct.h"
// Member 'gesture'
#include "tactigon_msgs/msg/detail/gesture__struct.h"

/// Struct defined in msg/TSkinState in the package tactigon_msgs.
typedef struct tactigon_msgs__msg__TSkinState
{
  bool connected;
  float battery;
  uint8_t selector;
  bool selector_valid;
  tactigon_msgs__msg__Touch touchpad;
  bool touchpad_valid;
  tactigon_msgs__msg__Angle angle;
  bool angle_valid;
  tactigon_msgs__msg__Gesture gesture;
  bool gesture_valid;
} tactigon_msgs__msg__TSkinState;

// Struct for a sequence of tactigon_msgs__msg__TSkinState.
typedef struct tactigon_msgs__msg__TSkinState__Sequence
{
  tactigon_msgs__msg__TSkinState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tactigon_msgs__msg__TSkinState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__STRUCT_H_

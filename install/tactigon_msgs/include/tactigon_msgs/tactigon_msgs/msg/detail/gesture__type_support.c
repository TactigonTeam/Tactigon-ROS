// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tactigon_msgs:msg/Gesture.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tactigon_msgs/msg/detail/gesture__rosidl_typesupport_introspection_c.h"
#include "tactigon_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tactigon_msgs/msg/detail/gesture__functions.h"
#include "tactigon_msgs/msg/detail/gesture__struct.h"


// Include directives for member types
// Member `gesture`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tactigon_msgs__msg__Gesture__init(message_memory);
}

void tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_fini_function(void * message_memory)
{
  tactigon_msgs__msg__Gesture__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_message_member_array[4] = {
  {
    "gesture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tactigon_msgs__msg__Gesture, gesture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "probability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tactigon_msgs__msg__Gesture, probability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tactigon_msgs__msg__Gesture, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "displacement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tactigon_msgs__msg__Gesture, displacement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_message_members = {
  "tactigon_msgs__msg",  // message namespace
  "Gesture",  // message name
  4,  // number of fields
  sizeof(tactigon_msgs__msg__Gesture),
  false,  // has_any_key_member_
  tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_message_member_array,  // message members
  tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_init_function,  // function to initialize message memory (memory has to be allocated)
  tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_message_type_support_handle = {
  0,
  &tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_message_members,
  get_message_typesupport_handle_function,
  &tactigon_msgs__msg__Gesture__get_type_hash,
  &tactigon_msgs__msg__Gesture__get_type_description,
  &tactigon_msgs__msg__Gesture__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tactigon_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tactigon_msgs, msg, Gesture)() {
  if (!tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_message_type_support_handle.typesupport_identifier) {
    tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tactigon_msgs__msg__Gesture__rosidl_typesupport_introspection_c__Gesture_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

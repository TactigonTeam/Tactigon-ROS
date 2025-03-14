// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tactigon_msgs:msg/Touch.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tactigon_msgs/msg/detail/touch__functions.h"
#include "tactigon_msgs/msg/detail/touch__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tactigon_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Touch_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tactigon_msgs::msg::Touch(_init);
}

void Touch_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tactigon_msgs::msg::Touch *>(message_memory);
  typed_message->~Touch();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Touch_message_member_array[4] = {
  {
    "one_finger",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tactigon_msgs::msg::Touch, one_finger),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "two_finger",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tactigon_msgs::msg::Touch, two_finger),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tactigon_msgs::msg::Touch, x_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tactigon_msgs::msg::Touch, y_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Touch_message_members = {
  "tactigon_msgs::msg",  // message namespace
  "Touch",  // message name
  4,  // number of fields
  sizeof(tactigon_msgs::msg::Touch),
  false,  // has_any_key_member_
  Touch_message_member_array,  // message members
  Touch_init_function,  // function to initialize message memory (memory has to be allocated)
  Touch_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Touch_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Touch_message_members,
  get_message_typesupport_handle_function,
  &tactigon_msgs__msg__Touch__get_type_hash,
  &tactigon_msgs__msg__Touch__get_type_description,
  &tactigon_msgs__msg__Touch__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tactigon_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tactigon_msgs::msg::Touch>()
{
  return &::tactigon_msgs::msg::rosidl_typesupport_introspection_cpp::Touch_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tactigon_msgs, msg, Touch)() {
  return &::tactigon_msgs::msg::rosidl_typesupport_introspection_cpp::Touch_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

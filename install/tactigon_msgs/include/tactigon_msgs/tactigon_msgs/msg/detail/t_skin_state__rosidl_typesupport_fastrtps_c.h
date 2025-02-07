// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from tactigon_msgs:msg/TSkinState.idl
// generated code does not contain a copyright notice
#ifndef TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tactigon_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tactigon_msgs/msg/detail/t_skin_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
bool cdr_serialize_tactigon_msgs__msg__TSkinState(
  const tactigon_msgs__msg__TSkinState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
bool cdr_deserialize_tactigon_msgs__msg__TSkinState(
  eprosima::fastcdr::Cdr &,
  tactigon_msgs__msg__TSkinState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t get_serialized_size_tactigon_msgs__msg__TSkinState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t max_serialized_size_tactigon_msgs__msg__TSkinState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
bool cdr_serialize_key_tactigon_msgs__msg__TSkinState(
  const tactigon_msgs__msg__TSkinState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t get_serialized_size_key_tactigon_msgs__msg__TSkinState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t max_serialized_size_key_tactigon_msgs__msg__TSkinState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tactigon_msgs, msg, TSkinState)();

#ifdef __cplusplus
}
#endif

#endif  // TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

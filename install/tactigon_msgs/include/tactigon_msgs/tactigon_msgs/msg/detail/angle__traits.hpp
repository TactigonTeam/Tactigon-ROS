// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tactigon_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/angle.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__ANGLE__TRAITS_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tactigon_msgs/msg/detail/angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tactigon_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Angle & msg,
  std::ostream & out)
{
  out << "{";
  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tactigon_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tactigon_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tactigon_msgs::msg::Angle & msg,
  std::ostream & out, size_t indentation = 0)
{
  tactigon_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tactigon_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tactigon_msgs::msg::Angle & msg)
{
  return tactigon_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tactigon_msgs::msg::Angle>()
{
  return "tactigon_msgs::msg::Angle";
}

template<>
inline const char * name<tactigon_msgs::msg::Angle>()
{
  return "tactigon_msgs/msg/Angle";
}

template<>
struct has_fixed_size<tactigon_msgs::msg::Angle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tactigon_msgs::msg::Angle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tactigon_msgs::msg::Angle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TACTIGON_MSGS__MSG__DETAIL__ANGLE__TRAITS_HPP_

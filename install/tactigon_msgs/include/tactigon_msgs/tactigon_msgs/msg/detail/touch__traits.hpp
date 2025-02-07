// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tactigon_msgs:msg/Touch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/touch.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__TOUCH__TRAITS_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__TOUCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tactigon_msgs/msg/detail/touch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tactigon_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Touch & msg,
  std::ostream & out)
{
  out << "{";
  // member: one_finger
  {
    out << "one_finger: ";
    rosidl_generator_traits::value_to_yaml(msg.one_finger, out);
    out << ", ";
  }

  // member: two_finger
  {
    out << "two_finger: ";
    rosidl_generator_traits::value_to_yaml(msg.two_finger, out);
    out << ", ";
  }

  // member: x_pos
  {
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << ", ";
  }

  // member: y_pos
  {
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Touch & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: one_finger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "one_finger: ";
    rosidl_generator_traits::value_to_yaml(msg.one_finger, out);
    out << "\n";
  }

  // member: two_finger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "two_finger: ";
    rosidl_generator_traits::value_to_yaml(msg.two_finger, out);
    out << "\n";
  }

  // member: x_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << "\n";
  }

  // member: y_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Touch & msg, bool use_flow_style = false)
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
  const tactigon_msgs::msg::Touch & msg,
  std::ostream & out, size_t indentation = 0)
{
  tactigon_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tactigon_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tactigon_msgs::msg::Touch & msg)
{
  return tactigon_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tactigon_msgs::msg::Touch>()
{
  return "tactigon_msgs::msg::Touch";
}

template<>
inline const char * name<tactigon_msgs::msg::Touch>()
{
  return "tactigon_msgs/msg/Touch";
}

template<>
struct has_fixed_size<tactigon_msgs::msg::Touch>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tactigon_msgs::msg::Touch>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tactigon_msgs::msg::Touch>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TACTIGON_MSGS__MSG__DETAIL__TOUCH__TRAITS_HPP_

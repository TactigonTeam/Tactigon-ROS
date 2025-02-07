// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tactigon_msgs:msg/Gesture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/gesture.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__GESTURE__TRAITS_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__GESTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tactigon_msgs/msg/detail/gesture__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tactigon_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gesture & msg,
  std::ostream & out)
{
  out << "{";
  // member: gesture
  {
    out << "gesture: ";
    rosidl_generator_traits::value_to_yaml(msg.gesture, out);
    out << ", ";
  }

  // member: probability
  {
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: displacement
  {
    out << "displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.displacement, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gesture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gesture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gesture: ";
    rosidl_generator_traits::value_to_yaml(msg.gesture, out);
    out << "\n";
  }

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: displacement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.displacement, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gesture & msg, bool use_flow_style = false)
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
  const tactigon_msgs::msg::Gesture & msg,
  std::ostream & out, size_t indentation = 0)
{
  tactigon_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tactigon_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tactigon_msgs::msg::Gesture & msg)
{
  return tactigon_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tactigon_msgs::msg::Gesture>()
{
  return "tactigon_msgs::msg::Gesture";
}

template<>
inline const char * name<tactigon_msgs::msg::Gesture>()
{
  return "tactigon_msgs/msg/Gesture";
}

template<>
struct has_fixed_size<tactigon_msgs::msg::Gesture>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tactigon_msgs::msg::Gesture>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tactigon_msgs::msg::Gesture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TACTIGON_MSGS__MSG__DETAIL__GESTURE__TRAITS_HPP_

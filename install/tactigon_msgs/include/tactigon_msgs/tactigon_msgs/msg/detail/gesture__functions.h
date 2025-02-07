// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tactigon_msgs:msg/Gesture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/gesture.h"


#ifndef TACTIGON_MSGS__MSG__DETAIL__GESTURE__FUNCTIONS_H_
#define TACTIGON_MSGS__MSG__DETAIL__GESTURE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "tactigon_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tactigon_msgs/msg/detail/gesture__struct.h"

/// Initialize msg/Gesture message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tactigon_msgs__msg__Gesture
 * )) before or use
 * tactigon_msgs__msg__Gesture__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
bool
tactigon_msgs__msg__Gesture__init(tactigon_msgs__msg__Gesture * msg);

/// Finalize msg/Gesture message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
void
tactigon_msgs__msg__Gesture__fini(tactigon_msgs__msg__Gesture * msg);

/// Create msg/Gesture message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tactigon_msgs__msg__Gesture__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
tactigon_msgs__msg__Gesture *
tactigon_msgs__msg__Gesture__create(void);

/// Destroy msg/Gesture message.
/**
 * It calls
 * tactigon_msgs__msg__Gesture__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
void
tactigon_msgs__msg__Gesture__destroy(tactigon_msgs__msg__Gesture * msg);

/// Check for msg/Gesture message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
bool
tactigon_msgs__msg__Gesture__are_equal(const tactigon_msgs__msg__Gesture * lhs, const tactigon_msgs__msg__Gesture * rhs);

/// Copy a msg/Gesture message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
bool
tactigon_msgs__msg__Gesture__copy(
  const tactigon_msgs__msg__Gesture * input,
  tactigon_msgs__msg__Gesture * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
const rosidl_type_hash_t *
tactigon_msgs__msg__Gesture__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
const rosidl_runtime_c__type_description__TypeDescription *
tactigon_msgs__msg__Gesture__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
const rosidl_runtime_c__type_description__TypeSource *
tactigon_msgs__msg__Gesture__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
tactigon_msgs__msg__Gesture__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Gesture messages.
/**
 * It allocates the memory for the number of elements and calls
 * tactigon_msgs__msg__Gesture__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
bool
tactigon_msgs__msg__Gesture__Sequence__init(tactigon_msgs__msg__Gesture__Sequence * array, size_t size);

/// Finalize array of msg/Gesture messages.
/**
 * It calls
 * tactigon_msgs__msg__Gesture__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
void
tactigon_msgs__msg__Gesture__Sequence__fini(tactigon_msgs__msg__Gesture__Sequence * array);

/// Create array of msg/Gesture messages.
/**
 * It allocates the memory for the array and calls
 * tactigon_msgs__msg__Gesture__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
tactigon_msgs__msg__Gesture__Sequence *
tactigon_msgs__msg__Gesture__Sequence__create(size_t size);

/// Destroy array of msg/Gesture messages.
/**
 * It calls
 * tactigon_msgs__msg__Gesture__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
void
tactigon_msgs__msg__Gesture__Sequence__destroy(tactigon_msgs__msg__Gesture__Sequence * array);

/// Check for msg/Gesture message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
bool
tactigon_msgs__msg__Gesture__Sequence__are_equal(const tactigon_msgs__msg__Gesture__Sequence * lhs, const tactigon_msgs__msg__Gesture__Sequence * rhs);

/// Copy an array of msg/Gesture messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
bool
tactigon_msgs__msg__Gesture__Sequence__copy(
  const tactigon_msgs__msg__Gesture__Sequence * input,
  tactigon_msgs__msg__Gesture__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TACTIGON_MSGS__MSG__DETAIL__GESTURE__FUNCTIONS_H_

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tactigon_msgs:msg/TSkinState.idl
// generated code does not contain a copyright notice
#include "tactigon_msgs/msg/detail/t_skin_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `touchpad`
#include "tactigon_msgs/msg/detail/touch__functions.h"
// Member `angle`
#include "tactigon_msgs/msg/detail/angle__functions.h"
// Member `gesture`
#include "tactigon_msgs/msg/detail/gesture__functions.h"

bool
tactigon_msgs__msg__TSkinState__init(tactigon_msgs__msg__TSkinState * msg)
{
  if (!msg) {
    return false;
  }
  // connected
  // battery
  // selector
  // selector_valid
  // touchpad
  if (!tactigon_msgs__msg__Touch__init(&msg->touchpad)) {
    tactigon_msgs__msg__TSkinState__fini(msg);
    return false;
  }
  // touchpad_valid
  // angle
  if (!tactigon_msgs__msg__Angle__init(&msg->angle)) {
    tactigon_msgs__msg__TSkinState__fini(msg);
    return false;
  }
  // angle_valid
  // gesture
  if (!tactigon_msgs__msg__Gesture__init(&msg->gesture)) {
    tactigon_msgs__msg__TSkinState__fini(msg);
    return false;
  }
  // gesture_valid
  return true;
}

void
tactigon_msgs__msg__TSkinState__fini(tactigon_msgs__msg__TSkinState * msg)
{
  if (!msg) {
    return;
  }
  // connected
  // battery
  // selector
  // selector_valid
  // touchpad
  tactigon_msgs__msg__Touch__fini(&msg->touchpad);
  // touchpad_valid
  // angle
  tactigon_msgs__msg__Angle__fini(&msg->angle);
  // angle_valid
  // gesture
  tactigon_msgs__msg__Gesture__fini(&msg->gesture);
  // gesture_valid
}

bool
tactigon_msgs__msg__TSkinState__are_equal(const tactigon_msgs__msg__TSkinState * lhs, const tactigon_msgs__msg__TSkinState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connected
  if (lhs->connected != rhs->connected) {
    return false;
  }
  // battery
  if (lhs->battery != rhs->battery) {
    return false;
  }
  // selector
  if (lhs->selector != rhs->selector) {
    return false;
  }
  // selector_valid
  if (lhs->selector_valid != rhs->selector_valid) {
    return false;
  }
  // touchpad
  if (!tactigon_msgs__msg__Touch__are_equal(
      &(lhs->touchpad), &(rhs->touchpad)))
  {
    return false;
  }
  // touchpad_valid
  if (lhs->touchpad_valid != rhs->touchpad_valid) {
    return false;
  }
  // angle
  if (!tactigon_msgs__msg__Angle__are_equal(
      &(lhs->angle), &(rhs->angle)))
  {
    return false;
  }
  // angle_valid
  if (lhs->angle_valid != rhs->angle_valid) {
    return false;
  }
  // gesture
  if (!tactigon_msgs__msg__Gesture__are_equal(
      &(lhs->gesture), &(rhs->gesture)))
  {
    return false;
  }
  // gesture_valid
  if (lhs->gesture_valid != rhs->gesture_valid) {
    return false;
  }
  return true;
}

bool
tactigon_msgs__msg__TSkinState__copy(
  const tactigon_msgs__msg__TSkinState * input,
  tactigon_msgs__msg__TSkinState * output)
{
  if (!input || !output) {
    return false;
  }
  // connected
  output->connected = input->connected;
  // battery
  output->battery = input->battery;
  // selector
  output->selector = input->selector;
  // selector_valid
  output->selector_valid = input->selector_valid;
  // touchpad
  if (!tactigon_msgs__msg__Touch__copy(
      &(input->touchpad), &(output->touchpad)))
  {
    return false;
  }
  // touchpad_valid
  output->touchpad_valid = input->touchpad_valid;
  // angle
  if (!tactigon_msgs__msg__Angle__copy(
      &(input->angle), &(output->angle)))
  {
    return false;
  }
  // angle_valid
  output->angle_valid = input->angle_valid;
  // gesture
  if (!tactigon_msgs__msg__Gesture__copy(
      &(input->gesture), &(output->gesture)))
  {
    return false;
  }
  // gesture_valid
  output->gesture_valid = input->gesture_valid;
  return true;
}

tactigon_msgs__msg__TSkinState *
tactigon_msgs__msg__TSkinState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tactigon_msgs__msg__TSkinState * msg = (tactigon_msgs__msg__TSkinState *)allocator.allocate(sizeof(tactigon_msgs__msg__TSkinState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tactigon_msgs__msg__TSkinState));
  bool success = tactigon_msgs__msg__TSkinState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tactigon_msgs__msg__TSkinState__destroy(tactigon_msgs__msg__TSkinState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tactigon_msgs__msg__TSkinState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tactigon_msgs__msg__TSkinState__Sequence__init(tactigon_msgs__msg__TSkinState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tactigon_msgs__msg__TSkinState * data = NULL;

  if (size) {
    data = (tactigon_msgs__msg__TSkinState *)allocator.zero_allocate(size, sizeof(tactigon_msgs__msg__TSkinState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tactigon_msgs__msg__TSkinState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tactigon_msgs__msg__TSkinState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tactigon_msgs__msg__TSkinState__Sequence__fini(tactigon_msgs__msg__TSkinState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tactigon_msgs__msg__TSkinState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tactigon_msgs__msg__TSkinState__Sequence *
tactigon_msgs__msg__TSkinState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tactigon_msgs__msg__TSkinState__Sequence * array = (tactigon_msgs__msg__TSkinState__Sequence *)allocator.allocate(sizeof(tactigon_msgs__msg__TSkinState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tactigon_msgs__msg__TSkinState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tactigon_msgs__msg__TSkinState__Sequence__destroy(tactigon_msgs__msg__TSkinState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tactigon_msgs__msg__TSkinState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tactigon_msgs__msg__TSkinState__Sequence__are_equal(const tactigon_msgs__msg__TSkinState__Sequence * lhs, const tactigon_msgs__msg__TSkinState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tactigon_msgs__msg__TSkinState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tactigon_msgs__msg__TSkinState__Sequence__copy(
  const tactigon_msgs__msg__TSkinState__Sequence * input,
  tactigon_msgs__msg__TSkinState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tactigon_msgs__msg__TSkinState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tactigon_msgs__msg__TSkinState * data =
      (tactigon_msgs__msg__TSkinState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tactigon_msgs__msg__TSkinState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tactigon_msgs__msg__TSkinState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tactigon_msgs__msg__TSkinState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

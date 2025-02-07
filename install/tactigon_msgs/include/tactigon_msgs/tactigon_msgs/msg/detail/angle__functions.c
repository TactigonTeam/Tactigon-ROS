// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tactigon_msgs:msg/Angle.idl
// generated code does not contain a copyright notice
#include "tactigon_msgs/msg/detail/angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tactigon_msgs__msg__Angle__init(tactigon_msgs__msg__Angle * msg)
{
  if (!msg) {
    return false;
  }
  // roll
  // pitch
  // yaw
  return true;
}

void
tactigon_msgs__msg__Angle__fini(tactigon_msgs__msg__Angle * msg)
{
  if (!msg) {
    return;
  }
  // roll
  // pitch
  // yaw
}

bool
tactigon_msgs__msg__Angle__are_equal(const tactigon_msgs__msg__Angle * lhs, const tactigon_msgs__msg__Angle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
tactigon_msgs__msg__Angle__copy(
  const tactigon_msgs__msg__Angle * input,
  tactigon_msgs__msg__Angle * output)
{
  if (!input || !output) {
    return false;
  }
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  return true;
}

tactigon_msgs__msg__Angle *
tactigon_msgs__msg__Angle__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tactigon_msgs__msg__Angle * msg = (tactigon_msgs__msg__Angle *)allocator.allocate(sizeof(tactigon_msgs__msg__Angle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tactigon_msgs__msg__Angle));
  bool success = tactigon_msgs__msg__Angle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tactigon_msgs__msg__Angle__destroy(tactigon_msgs__msg__Angle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tactigon_msgs__msg__Angle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tactigon_msgs__msg__Angle__Sequence__init(tactigon_msgs__msg__Angle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tactigon_msgs__msg__Angle * data = NULL;

  if (size) {
    data = (tactigon_msgs__msg__Angle *)allocator.zero_allocate(size, sizeof(tactigon_msgs__msg__Angle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tactigon_msgs__msg__Angle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tactigon_msgs__msg__Angle__fini(&data[i - 1]);
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
tactigon_msgs__msg__Angle__Sequence__fini(tactigon_msgs__msg__Angle__Sequence * array)
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
      tactigon_msgs__msg__Angle__fini(&array->data[i]);
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

tactigon_msgs__msg__Angle__Sequence *
tactigon_msgs__msg__Angle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tactigon_msgs__msg__Angle__Sequence * array = (tactigon_msgs__msg__Angle__Sequence *)allocator.allocate(sizeof(tactigon_msgs__msg__Angle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tactigon_msgs__msg__Angle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tactigon_msgs__msg__Angle__Sequence__destroy(tactigon_msgs__msg__Angle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tactigon_msgs__msg__Angle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tactigon_msgs__msg__Angle__Sequence__are_equal(const tactigon_msgs__msg__Angle__Sequence * lhs, const tactigon_msgs__msg__Angle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tactigon_msgs__msg__Angle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tactigon_msgs__msg__Angle__Sequence__copy(
  const tactigon_msgs__msg__Angle__Sequence * input,
  tactigon_msgs__msg__Angle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tactigon_msgs__msg__Angle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tactigon_msgs__msg__Angle * data =
      (tactigon_msgs__msg__Angle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tactigon_msgs__msg__Angle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tactigon_msgs__msg__Angle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tactigon_msgs__msg__Angle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

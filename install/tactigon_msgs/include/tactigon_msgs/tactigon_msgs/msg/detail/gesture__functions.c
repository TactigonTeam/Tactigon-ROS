// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tactigon_msgs:msg/Gesture.idl
// generated code does not contain a copyright notice
#include "tactigon_msgs/msg/detail/gesture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `gesture`
#include "rosidl_runtime_c/string_functions.h"

bool
tactigon_msgs__msg__Gesture__init(tactigon_msgs__msg__Gesture * msg)
{
  if (!msg) {
    return false;
  }
  // gesture
  if (!rosidl_runtime_c__String__init(&msg->gesture)) {
    tactigon_msgs__msg__Gesture__fini(msg);
    return false;
  }
  // probability
  // confidence
  // displacement
  return true;
}

void
tactigon_msgs__msg__Gesture__fini(tactigon_msgs__msg__Gesture * msg)
{
  if (!msg) {
    return;
  }
  // gesture
  rosidl_runtime_c__String__fini(&msg->gesture);
  // probability
  // confidence
  // displacement
}

bool
tactigon_msgs__msg__Gesture__are_equal(const tactigon_msgs__msg__Gesture * lhs, const tactigon_msgs__msg__Gesture * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gesture
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gesture), &(rhs->gesture)))
  {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // displacement
  if (lhs->displacement != rhs->displacement) {
    return false;
  }
  return true;
}

bool
tactigon_msgs__msg__Gesture__copy(
  const tactigon_msgs__msg__Gesture * input,
  tactigon_msgs__msg__Gesture * output)
{
  if (!input || !output) {
    return false;
  }
  // gesture
  if (!rosidl_runtime_c__String__copy(
      &(input->gesture), &(output->gesture)))
  {
    return false;
  }
  // probability
  output->probability = input->probability;
  // confidence
  output->confidence = input->confidence;
  // displacement
  output->displacement = input->displacement;
  return true;
}

tactigon_msgs__msg__Gesture *
tactigon_msgs__msg__Gesture__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tactigon_msgs__msg__Gesture * msg = (tactigon_msgs__msg__Gesture *)allocator.allocate(sizeof(tactigon_msgs__msg__Gesture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tactigon_msgs__msg__Gesture));
  bool success = tactigon_msgs__msg__Gesture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tactigon_msgs__msg__Gesture__destroy(tactigon_msgs__msg__Gesture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tactigon_msgs__msg__Gesture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tactigon_msgs__msg__Gesture__Sequence__init(tactigon_msgs__msg__Gesture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tactigon_msgs__msg__Gesture * data = NULL;

  if (size) {
    data = (tactigon_msgs__msg__Gesture *)allocator.zero_allocate(size, sizeof(tactigon_msgs__msg__Gesture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tactigon_msgs__msg__Gesture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tactigon_msgs__msg__Gesture__fini(&data[i - 1]);
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
tactigon_msgs__msg__Gesture__Sequence__fini(tactigon_msgs__msg__Gesture__Sequence * array)
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
      tactigon_msgs__msg__Gesture__fini(&array->data[i]);
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

tactigon_msgs__msg__Gesture__Sequence *
tactigon_msgs__msg__Gesture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tactigon_msgs__msg__Gesture__Sequence * array = (tactigon_msgs__msg__Gesture__Sequence *)allocator.allocate(sizeof(tactigon_msgs__msg__Gesture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tactigon_msgs__msg__Gesture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tactigon_msgs__msg__Gesture__Sequence__destroy(tactigon_msgs__msg__Gesture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tactigon_msgs__msg__Gesture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tactigon_msgs__msg__Gesture__Sequence__are_equal(const tactigon_msgs__msg__Gesture__Sequence * lhs, const tactigon_msgs__msg__Gesture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tactigon_msgs__msg__Gesture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tactigon_msgs__msg__Gesture__Sequence__copy(
  const tactigon_msgs__msg__Gesture__Sequence * input,
  tactigon_msgs__msg__Gesture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tactigon_msgs__msg__Gesture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tactigon_msgs__msg__Gesture * data =
      (tactigon_msgs__msg__Gesture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tactigon_msgs__msg__Gesture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tactigon_msgs__msg__Gesture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tactigon_msgs__msg__Gesture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

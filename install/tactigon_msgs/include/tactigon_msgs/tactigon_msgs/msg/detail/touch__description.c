// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tactigon_msgs:msg/Touch.idl
// generated code does not contain a copyright notice

#include "tactigon_msgs/msg/detail/touch__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
const rosidl_type_hash_t *
tactigon_msgs__msg__Touch__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0xd5, 0xc5, 0x9b, 0x19, 0x2a, 0xec, 0x8f,
      0x9c, 0x55, 0xd6, 0x15, 0xbc, 0x51, 0x9c, 0x46,
      0xc8, 0x9d, 0x65, 0x6e, 0xc9, 0xd4, 0x62, 0x5e,
      0x81, 0xd3, 0xb3, 0xfa, 0xaa, 0x24, 0x33, 0xd4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tactigon_msgs__msg__Touch__TYPE_NAME[] = "tactigon_msgs/msg/Touch";

// Define type names, field names, and default values
static char tactigon_msgs__msg__Touch__FIELD_NAME__one_finger[] = "one_finger";
static char tactigon_msgs__msg__Touch__FIELD_NAME__two_finger[] = "two_finger";
static char tactigon_msgs__msg__Touch__FIELD_NAME__x_pos[] = "x_pos";
static char tactigon_msgs__msg__Touch__FIELD_NAME__y_pos[] = "y_pos";

static rosidl_runtime_c__type_description__Field tactigon_msgs__msg__Touch__FIELDS[] = {
  {
    {tactigon_msgs__msg__Touch__FIELD_NAME__one_finger, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__Touch__FIELD_NAME__two_finger, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__Touch__FIELD_NAME__x_pos, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__Touch__FIELD_NAME__y_pos, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tactigon_msgs__msg__Touch__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tactigon_msgs__msg__Touch__TYPE_NAME, 23, 23},
      {tactigon_msgs__msg__Touch__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 one_finger\n"
  "uint8 two_finger\n"
  "float32 x_pos\n"
  "float32 y_pos\n"
  "uint8 ONE_FINGER_NONE=0\n"
  "uint8 ONE_FINGER_SINGLE_TAP=1\n"
  "uint8 ONE_FINGER_TAP_AND_HOLD=2\n"
  "uint8 ONE_FINGER_SWIPE_X_NEG=4\n"
  "uint8 ONE_FINGER_SWIPE_X_POS=8\n"
  "uint8 ONE_FINGER_SWIPE_Y_POS=16\n"
  "uint8 ONE_FINGER_SWIPE_Y_NEG=32\n"
  "uint8 TWO_FINGER_NONE=0\n"
  "uint8 TWO_FINGER_TAP=1\n"
  "uint8 TWO_FINGER_SCROLL=2\n"
  "uint8 TWO_FINGER_ZOOM=4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tactigon_msgs__msg__Touch__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tactigon_msgs__msg__Touch__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 370, 370},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tactigon_msgs__msg__Touch__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tactigon_msgs__msg__Touch__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

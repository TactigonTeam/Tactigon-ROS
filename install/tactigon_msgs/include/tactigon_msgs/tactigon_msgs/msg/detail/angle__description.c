// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tactigon_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

#include "tactigon_msgs/msg/detail/angle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
const rosidl_type_hash_t *
tactigon_msgs__msg__Angle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x02, 0x94, 0xa0, 0x3d, 0xf0, 0xed, 0xff,
      0xa7, 0xb5, 0xfd, 0x4e, 0xaa, 0xe2, 0x6d, 0xe7,
      0x36, 0x08, 0x0c, 0xf4, 0x61, 0xd6, 0x77, 0x9b,
      0x5e, 0x67, 0x07, 0x8c, 0x37, 0x96, 0x6a, 0x1b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tactigon_msgs__msg__Angle__TYPE_NAME[] = "tactigon_msgs/msg/Angle";

// Define type names, field names, and default values
static char tactigon_msgs__msg__Angle__FIELD_NAME__roll[] = "roll";
static char tactigon_msgs__msg__Angle__FIELD_NAME__pitch[] = "pitch";
static char tactigon_msgs__msg__Angle__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field tactigon_msgs__msg__Angle__FIELDS[] = {
  {
    {tactigon_msgs__msg__Angle__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__Angle__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__Angle__FIELD_NAME__yaw, 3, 3},
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
tactigon_msgs__msg__Angle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tactigon_msgs__msg__Angle__TYPE_NAME, 23, 23},
      {tactigon_msgs__msg__Angle__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 roll\n"
  "float32 pitch\n"
  "float32 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tactigon_msgs__msg__Angle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tactigon_msgs__msg__Angle__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tactigon_msgs__msg__Angle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tactigon_msgs__msg__Angle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

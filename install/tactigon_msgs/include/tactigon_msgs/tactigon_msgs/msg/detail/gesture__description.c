// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tactigon_msgs:msg/Gesture.idl
// generated code does not contain a copyright notice

#include "tactigon_msgs/msg/detail/gesture__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
const rosidl_type_hash_t *
tactigon_msgs__msg__Gesture__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0xbb, 0xed, 0x86, 0x65, 0xee, 0x5a, 0x9f,
      0xf6, 0xc2, 0x2c, 0xb5, 0x99, 0x67, 0x06, 0xbc,
      0x14, 0x89, 0xc5, 0x66, 0xc8, 0x4b, 0xa3, 0x28,
      0x6b, 0xca, 0xe4, 0x6a, 0xd2, 0x39, 0x9d, 0x0c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tactigon_msgs__msg__Gesture__TYPE_NAME[] = "tactigon_msgs/msg/Gesture";

// Define type names, field names, and default values
static char tactigon_msgs__msg__Gesture__FIELD_NAME__gesture[] = "gesture";
static char tactigon_msgs__msg__Gesture__FIELD_NAME__probability[] = "probability";
static char tactigon_msgs__msg__Gesture__FIELD_NAME__confidence[] = "confidence";
static char tactigon_msgs__msg__Gesture__FIELD_NAME__displacement[] = "displacement";

static rosidl_runtime_c__type_description__Field tactigon_msgs__msg__Gesture__FIELDS[] = {
  {
    {tactigon_msgs__msg__Gesture__FIELD_NAME__gesture, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__Gesture__FIELD_NAME__probability, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__Gesture__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__Gesture__FIELD_NAME__displacement, 12, 12},
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
tactigon_msgs__msg__Gesture__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tactigon_msgs__msg__Gesture__TYPE_NAME, 25, 25},
      {tactigon_msgs__msg__Gesture__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string gesture\n"
  "float32 probability\n"
  "float32 confidence\n"
  "float32 displacement";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tactigon_msgs__msg__Gesture__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tactigon_msgs__msg__Gesture__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 74, 74},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tactigon_msgs__msg__Gesture__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tactigon_msgs__msg__Gesture__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

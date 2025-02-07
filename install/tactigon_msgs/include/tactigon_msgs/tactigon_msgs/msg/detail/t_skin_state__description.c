// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tactigon_msgs:msg/TSkinState.idl
// generated code does not contain a copyright notice

#include "tactigon_msgs/msg/detail/t_skin_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tactigon_msgs
const rosidl_type_hash_t *
tactigon_msgs__msg__TSkinState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfd, 0x25, 0xe0, 0xb5, 0x74, 0x3a, 0xcb, 0x95,
      0xb0, 0xeb, 0x3c, 0x36, 0xc6, 0x16, 0x28, 0x84,
      0x66, 0xa2, 0xd0, 0xbe, 0xd3, 0xab, 0x12, 0x2d,
      0x1e, 0x33, 0xfc, 0x3a, 0x35, 0xdc, 0x51, 0x5a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "tactigon_msgs/msg/detail/angle__functions.h"
#include "tactigon_msgs/msg/detail/touch__functions.h"
#include "tactigon_msgs/msg/detail/gesture__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t tactigon_msgs__msg__Angle__EXPECTED_HASH = {1, {
    0x41, 0x02, 0x94, 0xa0, 0x3d, 0xf0, 0xed, 0xff,
    0xa7, 0xb5, 0xfd, 0x4e, 0xaa, 0xe2, 0x6d, 0xe7,
    0x36, 0x08, 0x0c, 0xf4, 0x61, 0xd6, 0x77, 0x9b,
    0x5e, 0x67, 0x07, 0x8c, 0x37, 0x96, 0x6a, 0x1b,
  }};
static const rosidl_type_hash_t tactigon_msgs__msg__Gesture__EXPECTED_HASH = {1, {
    0x27, 0xbb, 0xed, 0x86, 0x65, 0xee, 0x5a, 0x9f,
    0xf6, 0xc2, 0x2c, 0xb5, 0x99, 0x67, 0x06, 0xbc,
    0x14, 0x89, 0xc5, 0x66, 0xc8, 0x4b, 0xa3, 0x28,
    0x6b, 0xca, 0xe4, 0x6a, 0xd2, 0x39, 0x9d, 0x0c,
  }};
static const rosidl_type_hash_t tactigon_msgs__msg__Touch__EXPECTED_HASH = {1, {
    0x42, 0xd5, 0xc5, 0x9b, 0x19, 0x2a, 0xec, 0x8f,
    0x9c, 0x55, 0xd6, 0x15, 0xbc, 0x51, 0x9c, 0x46,
    0xc8, 0x9d, 0x65, 0x6e, 0xc9, 0xd4, 0x62, 0x5e,
    0x81, 0xd3, 0xb3, 0xfa, 0xaa, 0x24, 0x33, 0xd4,
  }};
#endif

static char tactigon_msgs__msg__TSkinState__TYPE_NAME[] = "tactigon_msgs/msg/TSkinState";
static char tactigon_msgs__msg__Angle__TYPE_NAME[] = "tactigon_msgs/msg/Angle";
static char tactigon_msgs__msg__Gesture__TYPE_NAME[] = "tactigon_msgs/msg/Gesture";
static char tactigon_msgs__msg__Touch__TYPE_NAME[] = "tactigon_msgs/msg/Touch";

// Define type names, field names, and default values
static char tactigon_msgs__msg__TSkinState__FIELD_NAME__connected[] = "connected";
static char tactigon_msgs__msg__TSkinState__FIELD_NAME__battery[] = "battery";
static char tactigon_msgs__msg__TSkinState__FIELD_NAME__selector[] = "selector";
static char tactigon_msgs__msg__TSkinState__FIELD_NAME__selector_valid[] = "selector_valid";
static char tactigon_msgs__msg__TSkinState__FIELD_NAME__touchpad[] = "touchpad";
static char tactigon_msgs__msg__TSkinState__FIELD_NAME__touchpad_valid[] = "touchpad_valid";
static char tactigon_msgs__msg__TSkinState__FIELD_NAME__angle[] = "angle";
static char tactigon_msgs__msg__TSkinState__FIELD_NAME__angle_valid[] = "angle_valid";
static char tactigon_msgs__msg__TSkinState__FIELD_NAME__gesture[] = "gesture";
static char tactigon_msgs__msg__TSkinState__FIELD_NAME__gesture_valid[] = "gesture_valid";

static rosidl_runtime_c__type_description__Field tactigon_msgs__msg__TSkinState__FIELDS[] = {
  {
    {tactigon_msgs__msg__TSkinState__FIELD_NAME__connected, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__TSkinState__FIELD_NAME__battery, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__TSkinState__FIELD_NAME__selector, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__TSkinState__FIELD_NAME__selector_valid, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__TSkinState__FIELD_NAME__touchpad, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tactigon_msgs__msg__Touch__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__TSkinState__FIELD_NAME__touchpad_valid, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__TSkinState__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tactigon_msgs__msg__Angle__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__TSkinState__FIELD_NAME__angle_valid, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__TSkinState__FIELD_NAME__gesture, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tactigon_msgs__msg__Gesture__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__TSkinState__FIELD_NAME__gesture_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tactigon_msgs__msg__TSkinState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {tactigon_msgs__msg__Angle__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__Gesture__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {tactigon_msgs__msg__Touch__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tactigon_msgs__msg__TSkinState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tactigon_msgs__msg__TSkinState__TYPE_NAME, 28, 28},
      {tactigon_msgs__msg__TSkinState__FIELDS, 10, 10},
    },
    {tactigon_msgs__msg__TSkinState__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&tactigon_msgs__msg__Angle__EXPECTED_HASH, tactigon_msgs__msg__Angle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = tactigon_msgs__msg__Angle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&tactigon_msgs__msg__Gesture__EXPECTED_HASH, tactigon_msgs__msg__Gesture__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = tactigon_msgs__msg__Gesture__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&tactigon_msgs__msg__Touch__EXPECTED_HASH, tactigon_msgs__msg__Touch__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = tactigon_msgs__msg__Touch__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool connected\n"
  "float32 battery\n"
  "uint8 selector\n"
  "bool selector_valid\n"
  "Touch touchpad\n"
  "bool touchpad_valid\n"
  "Angle angle\n"
  "bool angle_valid\n"
  "Gesture gesture\n"
  "bool gesture_valid\n"
  "uint8 BLE_SELECTOR_NONE=0\n"
  "uint8 BLE_SELECTOR_SENSORS=1\n"
  "uint8 BLE_SELECTOR_AUDIO=2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tactigon_msgs__msg__TSkinState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tactigon_msgs__msg__TSkinState__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 246, 246},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tactigon_msgs__msg__TSkinState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tactigon_msgs__msg__TSkinState__get_individual_type_description_source(NULL),
    sources[1] = *tactigon_msgs__msg__Angle__get_individual_type_description_source(NULL);
    sources[2] = *tactigon_msgs__msg__Gesture__get_individual_type_description_source(NULL);
    sources[3] = *tactigon_msgs__msg__Touch__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

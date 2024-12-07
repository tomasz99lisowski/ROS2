// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tutorial_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#include "tutorial_interfaces/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_type_hash_t *
tutorial_interfaces__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x64, 0x0e, 0xde, 0x65, 0x94, 0x10, 0x3d,
      0x8e, 0x85, 0x15, 0xe5, 0xd7, 0x33, 0xcf, 0x75,
      0x24, 0x94, 0xe4, 0x18, 0x5a, 0xca, 0x5a, 0x1f,
      0x38, 0x19, 0x7f, 0x5c, 0xba, 0xa8, 0xd3, 0xc4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tutorial_interfaces__msg__Num__TYPE_NAME[] = "tutorial_interfaces/msg/Num";

// Define type names, field names, and default values
static char tutorial_interfaces__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field tutorial_interfaces__msg__Num__FIELDS[] = {
  {
    {tutorial_interfaces__msg__Num__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tutorial_interfaces__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tutorial_interfaces__msg__Num__TYPE_NAME, 27, 27},
      {tutorial_interfaces__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tutorial_interfaces__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tutorial_interfaces__msg__Num__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 11, 11},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tutorial_interfaces__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tutorial_interfaces__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

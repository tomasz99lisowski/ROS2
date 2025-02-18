// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tutorial_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tutorial_interfaces/srv/detail/add_three_ints__rosidl_typesupport_introspection_c.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tutorial_interfaces/srv/detail/add_three_ints__functions.h"
#include "tutorial_interfaces/srv/detail/add_three_ints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tutorial_interfaces__srv__AddThreeInts_Request__init(message_memory);
}

void tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_fini_function(void * message_memory)
{
  tutorial_interfaces__srv__AddThreeInts_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__srv__AddThreeInts_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__srv__AddThreeInts_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__srv__AddThreeInts_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_message_members = {
  "tutorial_interfaces__srv",  // message namespace
  "AddThreeInts_Request",  // message name
  3,  // number of fields
  sizeof(tutorial_interfaces__srv__AddThreeInts_Request),
  false,  // has_any_key_member_
  tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_message_member_array,  // message members
  tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_message_type_support_handle = {
  0,
  &tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_message_members,
  get_message_typesupport_handle_function,
  &tutorial_interfaces__srv__AddThreeInts_Request__get_type_hash,
  &tutorial_interfaces__srv__AddThreeInts_Request__get_type_description,
  &tutorial_interfaces__srv__AddThreeInts_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Request)() {
  if (!tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_message_type_support_handle.typesupport_identifier) {
    tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tutorial_interfaces/srv/detail/add_three_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tutorial_interfaces/srv/detail/add_three_ints__functions.h"
// already included above
// #include "tutorial_interfaces/srv/detail/add_three_ints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tutorial_interfaces__srv__AddThreeInts_Response__init(message_memory);
}

void tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_fini_function(void * message_memory)
{
  tutorial_interfaces__srv__AddThreeInts_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__srv__AddThreeInts_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_members = {
  "tutorial_interfaces__srv",  // message namespace
  "AddThreeInts_Response",  // message name
  1,  // number of fields
  sizeof(tutorial_interfaces__srv__AddThreeInts_Response),
  false,  // has_any_key_member_
  tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_member_array,  // message members
  tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_type_support_handle = {
  0,
  &tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_members,
  get_message_typesupport_handle_function,
  &tutorial_interfaces__srv__AddThreeInts_Response__get_type_hash,
  &tutorial_interfaces__srv__AddThreeInts_Response__get_type_description,
  &tutorial_interfaces__srv__AddThreeInts_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Response)() {
  if (!tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_type_support_handle.typesupport_identifier) {
    tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tutorial_interfaces/srv/detail/add_three_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tutorial_interfaces/srv/detail/add_three_ints__functions.h"
// already included above
// #include "tutorial_interfaces/srv/detail/add_three_ints__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "tutorial_interfaces/srv/add_three_ints.h"
// Member `request`
// Member `response`
// already included above
// #include "tutorial_interfaces/srv/detail/add_three_ints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tutorial_interfaces__srv__AddThreeInts_Event__init(message_memory);
}

void tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_fini_function(void * message_memory)
{
  tutorial_interfaces__srv__AddThreeInts_Event__fini(message_memory);
}

size_t tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__size_function__AddThreeInts_Event__request(
  const void * untyped_member)
{
  const tutorial_interfaces__srv__AddThreeInts_Request__Sequence * member =
    (const tutorial_interfaces__srv__AddThreeInts_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddThreeInts_Event__request(
  const void * untyped_member, size_t index)
{
  const tutorial_interfaces__srv__AddThreeInts_Request__Sequence * member =
    (const tutorial_interfaces__srv__AddThreeInts_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_function__AddThreeInts_Event__request(
  void * untyped_member, size_t index)
{
  tutorial_interfaces__srv__AddThreeInts_Request__Sequence * member =
    (tutorial_interfaces__srv__AddThreeInts_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddThreeInts_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tutorial_interfaces__srv__AddThreeInts_Request * item =
    ((const tutorial_interfaces__srv__AddThreeInts_Request *)
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddThreeInts_Event__request(untyped_member, index));
  tutorial_interfaces__srv__AddThreeInts_Request * value =
    (tutorial_interfaces__srv__AddThreeInts_Request *)(untyped_value);
  *value = *item;
}

void tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__assign_function__AddThreeInts_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tutorial_interfaces__srv__AddThreeInts_Request * item =
    ((tutorial_interfaces__srv__AddThreeInts_Request *)
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_function__AddThreeInts_Event__request(untyped_member, index));
  const tutorial_interfaces__srv__AddThreeInts_Request * value =
    (const tutorial_interfaces__srv__AddThreeInts_Request *)(untyped_value);
  *item = *value;
}

bool tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__resize_function__AddThreeInts_Event__request(
  void * untyped_member, size_t size)
{
  tutorial_interfaces__srv__AddThreeInts_Request__Sequence * member =
    (tutorial_interfaces__srv__AddThreeInts_Request__Sequence *)(untyped_member);
  tutorial_interfaces__srv__AddThreeInts_Request__Sequence__fini(member);
  return tutorial_interfaces__srv__AddThreeInts_Request__Sequence__init(member, size);
}

size_t tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__size_function__AddThreeInts_Event__response(
  const void * untyped_member)
{
  const tutorial_interfaces__srv__AddThreeInts_Response__Sequence * member =
    (const tutorial_interfaces__srv__AddThreeInts_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddThreeInts_Event__response(
  const void * untyped_member, size_t index)
{
  const tutorial_interfaces__srv__AddThreeInts_Response__Sequence * member =
    (const tutorial_interfaces__srv__AddThreeInts_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_function__AddThreeInts_Event__response(
  void * untyped_member, size_t index)
{
  tutorial_interfaces__srv__AddThreeInts_Response__Sequence * member =
    (tutorial_interfaces__srv__AddThreeInts_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddThreeInts_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tutorial_interfaces__srv__AddThreeInts_Response * item =
    ((const tutorial_interfaces__srv__AddThreeInts_Response *)
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddThreeInts_Event__response(untyped_member, index));
  tutorial_interfaces__srv__AddThreeInts_Response * value =
    (tutorial_interfaces__srv__AddThreeInts_Response *)(untyped_value);
  *value = *item;
}

void tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__assign_function__AddThreeInts_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tutorial_interfaces__srv__AddThreeInts_Response * item =
    ((tutorial_interfaces__srv__AddThreeInts_Response *)
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_function__AddThreeInts_Event__response(untyped_member, index));
  const tutorial_interfaces__srv__AddThreeInts_Response * value =
    (const tutorial_interfaces__srv__AddThreeInts_Response *)(untyped_value);
  *item = *value;
}

bool tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__resize_function__AddThreeInts_Event__response(
  void * untyped_member, size_t size)
{
  tutorial_interfaces__srv__AddThreeInts_Response__Sequence * member =
    (tutorial_interfaces__srv__AddThreeInts_Response__Sequence *)(untyped_member);
  tutorial_interfaces__srv__AddThreeInts_Response__Sequence__fini(member);
  return tutorial_interfaces__srv__AddThreeInts_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__srv__AddThreeInts_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(tutorial_interfaces__srv__AddThreeInts_Event, request),  // bytes offset in struct
    NULL,  // default value
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__size_function__AddThreeInts_Event__request,  // size() function pointer
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddThreeInts_Event__request,  // get_const(index) function pointer
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_function__AddThreeInts_Event__request,  // get(index) function pointer
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddThreeInts_Event__request,  // fetch(index, &value) function pointer
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__assign_function__AddThreeInts_Event__request,  // assign(index, value) function pointer
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__resize_function__AddThreeInts_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(tutorial_interfaces__srv__AddThreeInts_Event, response),  // bytes offset in struct
    NULL,  // default value
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__size_function__AddThreeInts_Event__response,  // size() function pointer
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddThreeInts_Event__response,  // get_const(index) function pointer
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__get_function__AddThreeInts_Event__response,  // get(index) function pointer
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddThreeInts_Event__response,  // fetch(index, &value) function pointer
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__assign_function__AddThreeInts_Event__response,  // assign(index, value) function pointer
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__resize_function__AddThreeInts_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_members = {
  "tutorial_interfaces__srv",  // message namespace
  "AddThreeInts_Event",  // message name
  3,  // number of fields
  sizeof(tutorial_interfaces__srv__AddThreeInts_Event),
  false,  // has_any_key_member_
  tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_member_array,  // message members
  tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_type_support_handle = {
  0,
  &tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_members,
  get_message_typesupport_handle_function,
  &tutorial_interfaces__srv__AddThreeInts_Event__get_type_hash,
  &tutorial_interfaces__srv__AddThreeInts_Event__get_type_description,
  &tutorial_interfaces__srv__AddThreeInts_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Event)() {
  tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Request)();
  tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Response)();
  if (!tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_type_support_handle.typesupport_identifier) {
    tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tutorial_interfaces/srv/detail/add_three_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tutorial_interfaces__srv__detail__add_three_ints__rosidl_typesupport_introspection_c__AddThreeInts_service_members = {
  "tutorial_interfaces__srv",  // service namespace
  "AddThreeInts",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // tutorial_interfaces__srv__detail__add_three_ints__rosidl_typesupport_introspection_c__AddThreeInts_Request_message_type_support_handle,
  NULL,  // response message
  // tutorial_interfaces__srv__detail__add_three_ints__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_type_support_handle
  NULL  // event_message
  // tutorial_interfaces__srv__detail__add_three_ints__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_type_support_handle
};


static rosidl_service_type_support_t tutorial_interfaces__srv__detail__add_three_ints__rosidl_typesupport_introspection_c__AddThreeInts_service_type_support_handle = {
  0,
  &tutorial_interfaces__srv__detail__add_three_ints__rosidl_typesupport_introspection_c__AddThreeInts_service_members,
  get_service_typesupport_handle_function,
  &tutorial_interfaces__srv__AddThreeInts_Request__rosidl_typesupport_introspection_c__AddThreeInts_Request_message_type_support_handle,
  &tutorial_interfaces__srv__AddThreeInts_Response__rosidl_typesupport_introspection_c__AddThreeInts_Response_message_type_support_handle,
  &tutorial_interfaces__srv__AddThreeInts_Event__rosidl_typesupport_introspection_c__AddThreeInts_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tutorial_interfaces,
    srv,
    AddThreeInts
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tutorial_interfaces,
    srv,
    AddThreeInts
  ),
  &tutorial_interfaces__srv__AddThreeInts__get_type_hash,
  &tutorial_interfaces__srv__AddThreeInts__get_type_description,
  &tutorial_interfaces__srv__AddThreeInts__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts)(void) {
  if (!tutorial_interfaces__srv__detail__add_three_ints__rosidl_typesupport_introspection_c__AddThreeInts_service_type_support_handle.typesupport_identifier) {
    tutorial_interfaces__srv__detail__add_three_ints__rosidl_typesupport_introspection_c__AddThreeInts_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tutorial_interfaces__srv__detail__add_three_ints__rosidl_typesupport_introspection_c__AddThreeInts_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, AddThreeInts_Event)()->data;
  }

  return &tutorial_interfaces__srv__detail__add_three_ints__rosidl_typesupport_introspection_c__AddThreeInts_service_type_support_handle;
}

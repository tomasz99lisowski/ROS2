// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/srv/detail/add_three_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
tutorial_interfaces__srv__AddThreeInts_Request__init(tutorial_interfaces__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
tutorial_interfaces__srv__AddThreeInts_Request__fini(tutorial_interfaces__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

bool
tutorial_interfaces__srv__AddThreeInts_Request__are_equal(const tutorial_interfaces__srv__AddThreeInts_Request * lhs, const tutorial_interfaces__srv__AddThreeInts_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__srv__AddThreeInts_Request__copy(
  const tutorial_interfaces__srv__AddThreeInts_Request * input,
  tutorial_interfaces__srv__AddThreeInts_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  return true;
}

tutorial_interfaces__srv__AddThreeInts_Request *
tutorial_interfaces__srv__AddThreeInts_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__AddThreeInts_Request * msg = (tutorial_interfaces__srv__AddThreeInts_Request *)allocator.allocate(sizeof(tutorial_interfaces__srv__AddThreeInts_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__srv__AddThreeInts_Request));
  bool success = tutorial_interfaces__srv__AddThreeInts_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__srv__AddThreeInts_Request__destroy(tutorial_interfaces__srv__AddThreeInts_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__srv__AddThreeInts_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__srv__AddThreeInts_Request__Sequence__init(tutorial_interfaces__srv__AddThreeInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__AddThreeInts_Request * data = NULL;

  if (size) {
    data = (tutorial_interfaces__srv__AddThreeInts_Request *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__srv__AddThreeInts_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__srv__AddThreeInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__srv__AddThreeInts_Request__fini(&data[i - 1]);
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
tutorial_interfaces__srv__AddThreeInts_Request__Sequence__fini(tutorial_interfaces__srv__AddThreeInts_Request__Sequence * array)
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
      tutorial_interfaces__srv__AddThreeInts_Request__fini(&array->data[i]);
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

tutorial_interfaces__srv__AddThreeInts_Request__Sequence *
tutorial_interfaces__srv__AddThreeInts_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__AddThreeInts_Request__Sequence * array = (tutorial_interfaces__srv__AddThreeInts_Request__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__srv__AddThreeInts_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__srv__AddThreeInts_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__srv__AddThreeInts_Request__Sequence__destroy(tutorial_interfaces__srv__AddThreeInts_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__srv__AddThreeInts_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__srv__AddThreeInts_Request__Sequence__are_equal(const tutorial_interfaces__srv__AddThreeInts_Request__Sequence * lhs, const tutorial_interfaces__srv__AddThreeInts_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__srv__AddThreeInts_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__srv__AddThreeInts_Request__Sequence__copy(
  const tutorial_interfaces__srv__AddThreeInts_Request__Sequence * input,
  tutorial_interfaces__srv__AddThreeInts_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__srv__AddThreeInts_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__srv__AddThreeInts_Request * data =
      (tutorial_interfaces__srv__AddThreeInts_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__srv__AddThreeInts_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__srv__AddThreeInts_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__srv__AddThreeInts_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tutorial_interfaces__srv__AddThreeInts_Response__init(tutorial_interfaces__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
tutorial_interfaces__srv__AddThreeInts_Response__fini(tutorial_interfaces__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
tutorial_interfaces__srv__AddThreeInts_Response__are_equal(const tutorial_interfaces__srv__AddThreeInts_Response * lhs, const tutorial_interfaces__srv__AddThreeInts_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__srv__AddThreeInts_Response__copy(
  const tutorial_interfaces__srv__AddThreeInts_Response * input,
  tutorial_interfaces__srv__AddThreeInts_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

tutorial_interfaces__srv__AddThreeInts_Response *
tutorial_interfaces__srv__AddThreeInts_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__AddThreeInts_Response * msg = (tutorial_interfaces__srv__AddThreeInts_Response *)allocator.allocate(sizeof(tutorial_interfaces__srv__AddThreeInts_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__srv__AddThreeInts_Response));
  bool success = tutorial_interfaces__srv__AddThreeInts_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__srv__AddThreeInts_Response__destroy(tutorial_interfaces__srv__AddThreeInts_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__srv__AddThreeInts_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__srv__AddThreeInts_Response__Sequence__init(tutorial_interfaces__srv__AddThreeInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__AddThreeInts_Response * data = NULL;

  if (size) {
    data = (tutorial_interfaces__srv__AddThreeInts_Response *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__srv__AddThreeInts_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__srv__AddThreeInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__srv__AddThreeInts_Response__fini(&data[i - 1]);
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
tutorial_interfaces__srv__AddThreeInts_Response__Sequence__fini(tutorial_interfaces__srv__AddThreeInts_Response__Sequence * array)
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
      tutorial_interfaces__srv__AddThreeInts_Response__fini(&array->data[i]);
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

tutorial_interfaces__srv__AddThreeInts_Response__Sequence *
tutorial_interfaces__srv__AddThreeInts_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__AddThreeInts_Response__Sequence * array = (tutorial_interfaces__srv__AddThreeInts_Response__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__srv__AddThreeInts_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__srv__AddThreeInts_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__srv__AddThreeInts_Response__Sequence__destroy(tutorial_interfaces__srv__AddThreeInts_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__srv__AddThreeInts_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__srv__AddThreeInts_Response__Sequence__are_equal(const tutorial_interfaces__srv__AddThreeInts_Response__Sequence * lhs, const tutorial_interfaces__srv__AddThreeInts_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__srv__AddThreeInts_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__srv__AddThreeInts_Response__Sequence__copy(
  const tutorial_interfaces__srv__AddThreeInts_Response__Sequence * input,
  tutorial_interfaces__srv__AddThreeInts_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__srv__AddThreeInts_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__srv__AddThreeInts_Response * data =
      (tutorial_interfaces__srv__AddThreeInts_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__srv__AddThreeInts_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__srv__AddThreeInts_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__srv__AddThreeInts_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "tutorial_interfaces/srv/detail/add_three_ints__functions.h"

bool
tutorial_interfaces__srv__AddThreeInts_Event__init(tutorial_interfaces__srv__AddThreeInts_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    tutorial_interfaces__srv__AddThreeInts_Event__fini(msg);
    return false;
  }
  // request
  if (!tutorial_interfaces__srv__AddThreeInts_Request__Sequence__init(&msg->request, 0)) {
    tutorial_interfaces__srv__AddThreeInts_Event__fini(msg);
    return false;
  }
  // response
  if (!tutorial_interfaces__srv__AddThreeInts_Response__Sequence__init(&msg->response, 0)) {
    tutorial_interfaces__srv__AddThreeInts_Event__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__srv__AddThreeInts_Event__fini(tutorial_interfaces__srv__AddThreeInts_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  tutorial_interfaces__srv__AddThreeInts_Request__Sequence__fini(&msg->request);
  // response
  tutorial_interfaces__srv__AddThreeInts_Response__Sequence__fini(&msg->response);
}

bool
tutorial_interfaces__srv__AddThreeInts_Event__are_equal(const tutorial_interfaces__srv__AddThreeInts_Event * lhs, const tutorial_interfaces__srv__AddThreeInts_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!tutorial_interfaces__srv__AddThreeInts_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!tutorial_interfaces__srv__AddThreeInts_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__srv__AddThreeInts_Event__copy(
  const tutorial_interfaces__srv__AddThreeInts_Event * input,
  tutorial_interfaces__srv__AddThreeInts_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!tutorial_interfaces__srv__AddThreeInts_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!tutorial_interfaces__srv__AddThreeInts_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__srv__AddThreeInts_Event *
tutorial_interfaces__srv__AddThreeInts_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__AddThreeInts_Event * msg = (tutorial_interfaces__srv__AddThreeInts_Event *)allocator.allocate(sizeof(tutorial_interfaces__srv__AddThreeInts_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__srv__AddThreeInts_Event));
  bool success = tutorial_interfaces__srv__AddThreeInts_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__srv__AddThreeInts_Event__destroy(tutorial_interfaces__srv__AddThreeInts_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__srv__AddThreeInts_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__srv__AddThreeInts_Event__Sequence__init(tutorial_interfaces__srv__AddThreeInts_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__AddThreeInts_Event * data = NULL;

  if (size) {
    data = (tutorial_interfaces__srv__AddThreeInts_Event *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__srv__AddThreeInts_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__srv__AddThreeInts_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__srv__AddThreeInts_Event__fini(&data[i - 1]);
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
tutorial_interfaces__srv__AddThreeInts_Event__Sequence__fini(tutorial_interfaces__srv__AddThreeInts_Event__Sequence * array)
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
      tutorial_interfaces__srv__AddThreeInts_Event__fini(&array->data[i]);
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

tutorial_interfaces__srv__AddThreeInts_Event__Sequence *
tutorial_interfaces__srv__AddThreeInts_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__AddThreeInts_Event__Sequence * array = (tutorial_interfaces__srv__AddThreeInts_Event__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__srv__AddThreeInts_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__srv__AddThreeInts_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__srv__AddThreeInts_Event__Sequence__destroy(tutorial_interfaces__srv__AddThreeInts_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__srv__AddThreeInts_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__srv__AddThreeInts_Event__Sequence__are_equal(const tutorial_interfaces__srv__AddThreeInts_Event__Sequence * lhs, const tutorial_interfaces__srv__AddThreeInts_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__srv__AddThreeInts_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__srv__AddThreeInts_Event__Sequence__copy(
  const tutorial_interfaces__srv__AddThreeInts_Event__Sequence * input,
  tutorial_interfaces__srv__AddThreeInts_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__srv__AddThreeInts_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__srv__AddThreeInts_Event * data =
      (tutorial_interfaces__srv__AddThreeInts_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__srv__AddThreeInts_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__srv__AddThreeInts_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__srv__AddThreeInts_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

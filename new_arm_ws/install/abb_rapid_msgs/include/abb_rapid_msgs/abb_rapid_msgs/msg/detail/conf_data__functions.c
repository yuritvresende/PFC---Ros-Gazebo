// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_msgs:msg/ConfData.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/conf_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abb_rapid_msgs__msg__ConfData__init(abb_rapid_msgs__msg__ConfData * msg)
{
  if (!msg) {
    return false;
  }
  // cf1
  // cf4
  // cf6
  // cfx
  return true;
}

void
abb_rapid_msgs__msg__ConfData__fini(abb_rapid_msgs__msg__ConfData * msg)
{
  if (!msg) {
    return;
  }
  // cf1
  // cf4
  // cf6
  // cfx
}

bool
abb_rapid_msgs__msg__ConfData__are_equal(const abb_rapid_msgs__msg__ConfData * lhs, const abb_rapid_msgs__msg__ConfData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cf1
  if (lhs->cf1 != rhs->cf1) {
    return false;
  }
  // cf4
  if (lhs->cf4 != rhs->cf4) {
    return false;
  }
  // cf6
  if (lhs->cf6 != rhs->cf6) {
    return false;
  }
  // cfx
  if (lhs->cfx != rhs->cfx) {
    return false;
  }
  return true;
}

bool
abb_rapid_msgs__msg__ConfData__copy(
  const abb_rapid_msgs__msg__ConfData * input,
  abb_rapid_msgs__msg__ConfData * output)
{
  if (!input || !output) {
    return false;
  }
  // cf1
  output->cf1 = input->cf1;
  // cf4
  output->cf4 = input->cf4;
  // cf6
  output->cf6 = input->cf6;
  // cfx
  output->cfx = input->cfx;
  return true;
}

abb_rapid_msgs__msg__ConfData *
abb_rapid_msgs__msg__ConfData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__ConfData * msg = (abb_rapid_msgs__msg__ConfData *)allocator.allocate(sizeof(abb_rapid_msgs__msg__ConfData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_msgs__msg__ConfData));
  bool success = abb_rapid_msgs__msg__ConfData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_msgs__msg__ConfData__destroy(abb_rapid_msgs__msg__ConfData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_msgs__msg__ConfData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_msgs__msg__ConfData__Sequence__init(abb_rapid_msgs__msg__ConfData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__ConfData * data = NULL;

  if (size) {
    data = (abb_rapid_msgs__msg__ConfData *)allocator.zero_allocate(size, sizeof(abb_rapid_msgs__msg__ConfData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_msgs__msg__ConfData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_msgs__msg__ConfData__fini(&data[i - 1]);
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
abb_rapid_msgs__msg__ConfData__Sequence__fini(abb_rapid_msgs__msg__ConfData__Sequence * array)
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
      abb_rapid_msgs__msg__ConfData__fini(&array->data[i]);
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

abb_rapid_msgs__msg__ConfData__Sequence *
abb_rapid_msgs__msg__ConfData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__ConfData__Sequence * array = (abb_rapid_msgs__msg__ConfData__Sequence *)allocator.allocate(sizeof(abb_rapid_msgs__msg__ConfData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_msgs__msg__ConfData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_msgs__msg__ConfData__Sequence__destroy(abb_rapid_msgs__msg__ConfData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_msgs__msg__ConfData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_msgs__msg__ConfData__Sequence__are_equal(const abb_rapid_msgs__msg__ConfData__Sequence * lhs, const abb_rapid_msgs__msg__ConfData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_msgs__msg__ConfData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_msgs__msg__ConfData__Sequence__copy(
  const abb_rapid_msgs__msg__ConfData__Sequence * input,
  abb_rapid_msgs__msg__ConfData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_msgs__msg__ConfData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_msgs__msg__ConfData * data =
      (abb_rapid_msgs__msg__ConfData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_msgs__msg__ConfData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_msgs__msg__ConfData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_msgs__msg__ConfData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

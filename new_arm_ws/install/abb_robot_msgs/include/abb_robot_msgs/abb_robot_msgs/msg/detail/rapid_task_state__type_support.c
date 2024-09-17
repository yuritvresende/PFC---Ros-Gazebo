// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_robot_msgs:msg/RAPIDTaskState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_robot_msgs/msg/detail/rapid_task_state__rosidl_typesupport_introspection_c.h"
#include "abb_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_robot_msgs/msg/detail/rapid_task_state__functions.h"
#include "abb_robot_msgs/msg/detail/rapid_task_state__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_robot_msgs__msg__RAPIDTaskState__init(message_memory);
}

void abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_fini_function(void * message_memory)
{
  abb_robot_msgs__msg__RAPIDTaskState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__msg__RAPIDTaskState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "activated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__msg__RAPIDTaskState, activated),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "execution_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__msg__RAPIDTaskState, execution_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_task",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__msg__RAPIDTaskState, motion_task),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_message_members = {
  "abb_robot_msgs__msg",  // message namespace
  "RAPIDTaskState",  // message name
  4,  // number of fields
  sizeof(abb_robot_msgs__msg__RAPIDTaskState),
  abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_message_member_array,  // message members
  abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_message_type_support_handle = {
  0,
  &abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, msg, RAPIDTaskState)() {
  if (!abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_message_type_support_handle.typesupport_identifier) {
    abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_robot_msgs__msg__RAPIDTaskState__rosidl_typesupport_introspection_c__RAPIDTaskState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
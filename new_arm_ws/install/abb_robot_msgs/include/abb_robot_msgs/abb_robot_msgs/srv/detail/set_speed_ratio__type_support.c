// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_robot_msgs:srv/SetSpeedRatio.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_robot_msgs/srv/detail/set_speed_ratio__rosidl_typesupport_introspection_c.h"
#include "abb_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_robot_msgs/srv/detail/set_speed_ratio__functions.h"
#include "abb_robot_msgs/srv/detail/set_speed_ratio__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_robot_msgs__srv__SetSpeedRatio_Request__init(message_memory);
}

void abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_fini_function(void * message_memory)
{
  abb_robot_msgs__srv__SetSpeedRatio_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_message_member_array[1] = {
  {
    "speed_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__srv__SetSpeedRatio_Request, speed_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_message_members = {
  "abb_robot_msgs__srv",  // message namespace
  "SetSpeedRatio_Request",  // message name
  1,  // number of fields
  sizeof(abb_robot_msgs__srv__SetSpeedRatio_Request),
  abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_message_member_array,  // message members
  abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_message_type_support_handle = {
  0,
  &abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetSpeedRatio_Request)() {
  if (!abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_message_type_support_handle.typesupport_identifier) {
    abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_robot_msgs__srv__SetSpeedRatio_Request__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "abb_robot_msgs/srv/detail/set_speed_ratio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "abb_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "abb_robot_msgs/srv/detail/set_speed_ratio__functions.h"
// already included above
// #include "abb_robot_msgs/srv/detail/set_speed_ratio__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_robot_msgs__srv__SetSpeedRatio_Response__init(message_memory);
}

void abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_fini_function(void * message_memory)
{
  abb_robot_msgs__srv__SetSpeedRatio_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_message_member_array[2] = {
  {
    "result_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__srv__SetSpeedRatio_Response, result_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__srv__SetSpeedRatio_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_message_members = {
  "abb_robot_msgs__srv",  // message namespace
  "SetSpeedRatio_Response",  // message name
  2,  // number of fields
  sizeof(abb_robot_msgs__srv__SetSpeedRatio_Response),
  abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_message_member_array,  // message members
  abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_message_type_support_handle = {
  0,
  &abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetSpeedRatio_Response)() {
  if (!abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_message_type_support_handle.typesupport_identifier) {
    abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_robot_msgs__srv__SetSpeedRatio_Response__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "abb_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "abb_robot_msgs/srv/detail/set_speed_ratio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers abb_robot_msgs__srv__detail__set_speed_ratio__rosidl_typesupport_introspection_c__SetSpeedRatio_service_members = {
  "abb_robot_msgs__srv",  // service namespace
  "SetSpeedRatio",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // abb_robot_msgs__srv__detail__set_speed_ratio__rosidl_typesupport_introspection_c__SetSpeedRatio_Request_message_type_support_handle,
  NULL  // response message
  // abb_robot_msgs__srv__detail__set_speed_ratio__rosidl_typesupport_introspection_c__SetSpeedRatio_Response_message_type_support_handle
};

static rosidl_service_type_support_t abb_robot_msgs__srv__detail__set_speed_ratio__rosidl_typesupport_introspection_c__SetSpeedRatio_service_type_support_handle = {
  0,
  &abb_robot_msgs__srv__detail__set_speed_ratio__rosidl_typesupport_introspection_c__SetSpeedRatio_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetSpeedRatio_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetSpeedRatio_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_robot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetSpeedRatio)() {
  if (!abb_robot_msgs__srv__detail__set_speed_ratio__rosidl_typesupport_introspection_c__SetSpeedRatio_service_type_support_handle.typesupport_identifier) {
    abb_robot_msgs__srv__detail__set_speed_ratio__rosidl_typesupport_introspection_c__SetSpeedRatio_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)abb_robot_msgs__srv__detail__set_speed_ratio__rosidl_typesupport_introspection_c__SetSpeedRatio_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetSpeedRatio_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetSpeedRatio_Response)()->data;
  }

  return &abb_robot_msgs__srv__detail__set_speed_ratio__rosidl_typesupport_introspection_c__SetSpeedRatio_service_type_support_handle;
}

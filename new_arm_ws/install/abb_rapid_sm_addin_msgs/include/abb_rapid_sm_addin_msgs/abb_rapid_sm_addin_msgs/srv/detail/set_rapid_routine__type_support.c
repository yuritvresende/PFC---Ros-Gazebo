// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_rapid_sm_addin_msgs:srv/SetRAPIDRoutine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_rapid_sm_addin_msgs/srv/detail/set_rapid_routine__rosidl_typesupport_introspection_c.h"
#include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_rapid_sm_addin_msgs/srv/detail/set_rapid_routine__functions.h"
#include "abb_rapid_sm_addin_msgs/srv/detail/set_rapid_routine__struct.h"


// Include directives for member types
// Member `task`
// Member `routine`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__init(message_memory);
}

void abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_fini_function(void * message_memory)
{
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_message_member_array[2] = {
  {
    "task",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request, task),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "routine",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request, routine),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_message_members = {
  "abb_rapid_sm_addin_msgs__srv",  // message namespace
  "SetRAPIDRoutine_Request",  // message name
  2,  // number of fields
  sizeof(abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request),
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_message_member_array,  // message members
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_message_type_support_handle = {
  0,
  &abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, srv, SetRAPIDRoutine_Request)() {
  if (!abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_message_type_support_handle.typesupport_identifier) {
    abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "abb_rapid_sm_addin_msgs/srv/detail/set_rapid_routine__rosidl_typesupport_introspection_c.h"
// already included above
// #include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "abb_rapid_sm_addin_msgs/srv/detail/set_rapid_routine__functions.h"
// already included above
// #include "abb_rapid_sm_addin_msgs/srv/detail/set_rapid_routine__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__init(message_memory);
}

void abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_fini_function(void * message_memory)
{
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_message_member_array[2] = {
  {
    "result_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response, result_code),  // bytes offset in struct
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
    offsetof(abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_message_members = {
  "abb_rapid_sm_addin_msgs__srv",  // message namespace
  "SetRAPIDRoutine_Response",  // message name
  2,  // number of fields
  sizeof(abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response),
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_message_member_array,  // message members
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_message_type_support_handle = {
  0,
  &abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, srv, SetRAPIDRoutine_Response)() {
  if (!abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_message_type_support_handle.typesupport_identifier) {
    abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "abb_rapid_sm_addin_msgs/srv/detail/set_rapid_routine__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers abb_rapid_sm_addin_msgs__srv__detail__set_rapid_routine__rosidl_typesupport_introspection_c__SetRAPIDRoutine_service_members = {
  "abb_rapid_sm_addin_msgs__srv",  // service namespace
  "SetRAPIDRoutine",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // abb_rapid_sm_addin_msgs__srv__detail__set_rapid_routine__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Request_message_type_support_handle,
  NULL  // response message
  // abb_rapid_sm_addin_msgs__srv__detail__set_rapid_routine__rosidl_typesupport_introspection_c__SetRAPIDRoutine_Response_message_type_support_handle
};

static rosidl_service_type_support_t abb_rapid_sm_addin_msgs__srv__detail__set_rapid_routine__rosidl_typesupport_introspection_c__SetRAPIDRoutine_service_type_support_handle = {
  0,
  &abb_rapid_sm_addin_msgs__srv__detail__set_rapid_routine__rosidl_typesupport_introspection_c__SetRAPIDRoutine_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, srv, SetRAPIDRoutine_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, srv, SetRAPIDRoutine_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, srv, SetRAPIDRoutine)() {
  if (!abb_rapid_sm_addin_msgs__srv__detail__set_rapid_routine__rosidl_typesupport_introspection_c__SetRAPIDRoutine_service_type_support_handle.typesupport_identifier) {
    abb_rapid_sm_addin_msgs__srv__detail__set_rapid_routine__rosidl_typesupport_introspection_c__SetRAPIDRoutine_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)abb_rapid_sm_addin_msgs__srv__detail__set_rapid_routine__rosidl_typesupport_introspection_c__SetRAPIDRoutine_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, srv, SetRAPIDRoutine_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, srv, SetRAPIDRoutine_Response)()->data;
  }

  return &abb_rapid_sm_addin_msgs__srv__detail__set_rapid_routine__rosidl_typesupport_introspection_c__SetRAPIDRoutine_service_type_support_handle;
}
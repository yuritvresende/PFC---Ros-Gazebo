// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from abb_rapid_msgs:msg/RobTarget.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__FUNCTIONS_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "abb_rapid_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "abb_rapid_msgs/msg/detail/rob_target__struct.h"

/// Initialize msg/RobTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_rapid_msgs__msg__RobTarget
 * )) before or use
 * abb_rapid_msgs__msg__RobTarget__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
bool
abb_rapid_msgs__msg__RobTarget__init(abb_rapid_msgs__msg__RobTarget * msg);

/// Finalize msg/RobTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
void
abb_rapid_msgs__msg__RobTarget__fini(abb_rapid_msgs__msg__RobTarget * msg);

/// Create msg/RobTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_rapid_msgs__msg__RobTarget__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
abb_rapid_msgs__msg__RobTarget *
abb_rapid_msgs__msg__RobTarget__create();

/// Destroy msg/RobTarget message.
/**
 * It calls
 * abb_rapid_msgs__msg__RobTarget__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
void
abb_rapid_msgs__msg__RobTarget__destroy(abb_rapid_msgs__msg__RobTarget * msg);

/// Check for msg/RobTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
bool
abb_rapid_msgs__msg__RobTarget__are_equal(const abb_rapid_msgs__msg__RobTarget * lhs, const abb_rapid_msgs__msg__RobTarget * rhs);

/// Copy a msg/RobTarget message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
bool
abb_rapid_msgs__msg__RobTarget__copy(
  const abb_rapid_msgs__msg__RobTarget * input,
  abb_rapid_msgs__msg__RobTarget * output);

/// Initialize array of msg/RobTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_rapid_msgs__msg__RobTarget__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
bool
abb_rapid_msgs__msg__RobTarget__Sequence__init(abb_rapid_msgs__msg__RobTarget__Sequence * array, size_t size);

/// Finalize array of msg/RobTarget messages.
/**
 * It calls
 * abb_rapid_msgs__msg__RobTarget__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
void
abb_rapid_msgs__msg__RobTarget__Sequence__fini(abb_rapid_msgs__msg__RobTarget__Sequence * array);

/// Create array of msg/RobTarget messages.
/**
 * It allocates the memory for the array and calls
 * abb_rapid_msgs__msg__RobTarget__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
abb_rapid_msgs__msg__RobTarget__Sequence *
abb_rapid_msgs__msg__RobTarget__Sequence__create(size_t size);

/// Destroy array of msg/RobTarget messages.
/**
 * It calls
 * abb_rapid_msgs__msg__RobTarget__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
void
abb_rapid_msgs__msg__RobTarget__Sequence__destroy(abb_rapid_msgs__msg__RobTarget__Sequence * array);

/// Check for msg/RobTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
bool
abb_rapid_msgs__msg__RobTarget__Sequence__are_equal(const abb_rapid_msgs__msg__RobTarget__Sequence * lhs, const abb_rapid_msgs__msg__RobTarget__Sequence * rhs);

/// Copy an array of msg/RobTarget messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_msgs
bool
abb_rapid_msgs__msg__RobTarget__Sequence__copy(
  const abb_rapid_msgs__msg__RobTarget__Sequence * input,
  abb_rapid_msgs__msg__RobTarget__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__FUNCTIONS_H_
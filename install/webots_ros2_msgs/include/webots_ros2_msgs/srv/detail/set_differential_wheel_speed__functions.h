// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from webots_ros2_msgs:srv\SetDifferentialWheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__FUNCTIONS_H_
#define WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "webots_ros2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "webots_ros2_msgs/srv/detail/set_differential_wheel_speed__struct.h"

/// Initialize srv/SetDifferentialWheelSpeed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request
 * )) before or use
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
bool
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__init(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request * msg);

/// Finalize srv/SetDifferentialWheelSpeed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__fini(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request * msg);

/// Create srv/SetDifferentialWheelSpeed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request *
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__create();

/// Destroy srv/SetDifferentialWheelSpeed message.
/**
 * It calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__destroy(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request * msg);


/// Initialize array of srv/SetDifferentialWheelSpeed messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
bool
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__init(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetDifferentialWheelSpeed messages.
/**
 * It calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__fini(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence * array);

/// Create array of srv/SetDifferentialWheelSpeed messages.
/**
 * It allocates the memory for the array and calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence *
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetDifferentialWheelSpeed messages.
/**
 * It calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__destroy(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence * array);

/// Initialize srv/SetDifferentialWheelSpeed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response
 * )) before or use
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
bool
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__init(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response * msg);

/// Finalize srv/SetDifferentialWheelSpeed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__fini(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response * msg);

/// Create srv/SetDifferentialWheelSpeed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response *
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__create();

/// Destroy srv/SetDifferentialWheelSpeed message.
/**
 * It calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__destroy(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response * msg);


/// Initialize array of srv/SetDifferentialWheelSpeed messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
bool
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__init(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetDifferentialWheelSpeed messages.
/**
 * It calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__fini(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence * array);

/// Create array of srv/SetDifferentialWheelSpeed messages.
/**
 * It allocates the memory for the array and calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence *
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetDifferentialWheelSpeed messages.
/**
 * It calls
 * webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__destroy(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__FUNCTIONS_H_

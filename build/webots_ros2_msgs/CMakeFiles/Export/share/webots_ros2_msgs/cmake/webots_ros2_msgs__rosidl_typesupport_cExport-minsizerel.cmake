#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "webots_ros2_msgs::webots_ros2_msgs__rosidl_typesupport_c" for configuration "MinSizeRel"
set_property(TARGET webots_ros2_msgs::webots_ros2_msgs__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(webots_ros2_msgs::webots_ros2_msgs__rosidl_typesupport_c PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/webots_ros2_msgs__rosidl_typesupport_c.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/webots_ros2_msgs__rosidl_typesupport_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS webots_ros2_msgs::webots_ros2_msgs__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_webots_ros2_msgs::webots_ros2_msgs__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/webots_ros2_msgs__rosidl_typesupport_c.lib" "${_IMPORT_PREFIX}/bin/webots_ros2_msgs__rosidl_typesupport_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

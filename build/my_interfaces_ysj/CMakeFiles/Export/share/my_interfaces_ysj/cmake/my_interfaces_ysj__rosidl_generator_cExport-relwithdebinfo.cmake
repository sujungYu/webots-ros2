#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "my_interfaces_ysj::my_interfaces_ysj__rosidl_generator_c" for configuration "RelWithDebInfo"
set_property(TARGET my_interfaces_ysj::my_interfaces_ysj__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(my_interfaces_ysj::my_interfaces_ysj__rosidl_generator_c PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/my_interfaces_ysj__rosidl_generator_c.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/my_interfaces_ysj__rosidl_generator_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS my_interfaces_ysj::my_interfaces_ysj__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_my_interfaces_ysj::my_interfaces_ysj__rosidl_generator_c "${_IMPORT_PREFIX}/lib/my_interfaces_ysj__rosidl_generator_c.lib" "${_IMPORT_PREFIX}/bin/my_interfaces_ysj__rosidl_generator_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
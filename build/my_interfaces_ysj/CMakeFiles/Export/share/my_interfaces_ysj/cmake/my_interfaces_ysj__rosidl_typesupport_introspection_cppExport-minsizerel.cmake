#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "my_interfaces_ysj::my_interfaces_ysj__rosidl_typesupport_introspection_cpp" for configuration "MinSizeRel"
set_property(TARGET my_interfaces_ysj::my_interfaces_ysj__rosidl_typesupport_introspection_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(my_interfaces_ysj::my_interfaces_ysj__rosidl_typesupport_introspection_cpp PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/my_interfaces_ysj__rosidl_typesupport_introspection_cpp.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/my_interfaces_ysj__rosidl_typesupport_introspection_cpp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS my_interfaces_ysj::my_interfaces_ysj__rosidl_typesupport_introspection_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_my_interfaces_ysj::my_interfaces_ysj__rosidl_typesupport_introspection_cpp "${_IMPORT_PREFIX}/lib/my_interfaces_ysj__rosidl_typesupport_introspection_cpp.lib" "${_IMPORT_PREFIX}/bin/my_interfaces_ysj__rosidl_typesupport_introspection_cpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

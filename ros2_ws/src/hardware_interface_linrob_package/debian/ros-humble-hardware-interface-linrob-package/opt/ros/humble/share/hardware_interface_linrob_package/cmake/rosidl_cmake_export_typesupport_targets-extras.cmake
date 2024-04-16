# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:hardware_interface_linrob_package__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:hardware_interface_linrob_package__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:hardware_interface_linrob_package__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:hardware_interface_linrob_package__rosidl_typesupport_c;__rosidl_generator_cpp:hardware_interface_linrob_package__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:hardware_interface_linrob_package__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:hardware_interface_linrob_package__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:hardware_interface_linrob_package__rosidl_typesupport_cpp;__rosidl_generator_py:hardware_interface_linrob_package__rosidl_generator_py")

# populate hardware_interface_linrob_package_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "hardware_interface_linrob_package::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'hardware_interface_linrob_package' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND hardware_interface_linrob_package_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()

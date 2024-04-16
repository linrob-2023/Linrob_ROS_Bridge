// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from hardware_interface_linrob_package:action/MoveFeedback.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"
#include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hardware_interface_linrob_package
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveFeedback_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveFeedback_Goal_type_support_ids_t;

static const _MoveFeedback_Goal_type_support_ids_t _MoveFeedback_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveFeedback_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveFeedback_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveFeedback_Goal_type_support_symbol_names_t _MoveFeedback_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hardware_interface_linrob_package, action, MoveFeedback_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hardware_interface_linrob_package, action, MoveFeedback_Goal)),
  }
};

typedef struct _MoveFeedback_Goal_type_support_data_t
{
  void * data[2];
} _MoveFeedback_Goal_type_support_data_t;

static _MoveFeedback_Goal_type_support_data_t _MoveFeedback_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveFeedback_Goal_message_typesupport_map = {
  2,
  "hardware_interface_linrob_package",
  &_MoveFeedback_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveFeedback_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveFeedback_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveFeedback_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveFeedback_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_Goal)() {
  return &::hardware_interface_linrob_package::action::rosidl_typesupport_c::MoveFeedback_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hardware_interface_linrob_package
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveFeedback_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveFeedback_Result_type_support_ids_t;

static const _MoveFeedback_Result_type_support_ids_t _MoveFeedback_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveFeedback_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveFeedback_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveFeedback_Result_type_support_symbol_names_t _MoveFeedback_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hardware_interface_linrob_package, action, MoveFeedback_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hardware_interface_linrob_package, action, MoveFeedback_Result)),
  }
};

typedef struct _MoveFeedback_Result_type_support_data_t
{
  void * data[2];
} _MoveFeedback_Result_type_support_data_t;

static _MoveFeedback_Result_type_support_data_t _MoveFeedback_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveFeedback_Result_message_typesupport_map = {
  2,
  "hardware_interface_linrob_package",
  &_MoveFeedback_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveFeedback_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveFeedback_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveFeedback_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveFeedback_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_Result)() {
  return &::hardware_interface_linrob_package::action::rosidl_typesupport_c::MoveFeedback_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hardware_interface_linrob_package
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveFeedback_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveFeedback_Feedback_type_support_ids_t;

static const _MoveFeedback_Feedback_type_support_ids_t _MoveFeedback_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveFeedback_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveFeedback_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveFeedback_Feedback_type_support_symbol_names_t _MoveFeedback_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hardware_interface_linrob_package, action, MoveFeedback_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hardware_interface_linrob_package, action, MoveFeedback_Feedback)),
  }
};

typedef struct _MoveFeedback_Feedback_type_support_data_t
{
  void * data[2];
} _MoveFeedback_Feedback_type_support_data_t;

static _MoveFeedback_Feedback_type_support_data_t _MoveFeedback_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveFeedback_Feedback_message_typesupport_map = {
  2,
  "hardware_interface_linrob_package",
  &_MoveFeedback_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveFeedback_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveFeedback_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveFeedback_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveFeedback_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_Feedback)() {
  return &::hardware_interface_linrob_package::action::rosidl_typesupport_c::MoveFeedback_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hardware_interface_linrob_package
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveFeedback_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveFeedback_SendGoal_Request_type_support_ids_t;

static const _MoveFeedback_SendGoal_Request_type_support_ids_t _MoveFeedback_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveFeedback_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveFeedback_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveFeedback_SendGoal_Request_type_support_symbol_names_t _MoveFeedback_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hardware_interface_linrob_package, action, MoveFeedback_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hardware_interface_linrob_package, action, MoveFeedback_SendGoal_Request)),
  }
};

typedef struct _MoveFeedback_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveFeedback_SendGoal_Request_type_support_data_t;

static _MoveFeedback_SendGoal_Request_type_support_data_t _MoveFeedback_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveFeedback_SendGoal_Request_message_typesupport_map = {
  2,
  "hardware_interface_linrob_package",
  &_MoveFeedback_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveFeedback_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveFeedback_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveFeedback_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveFeedback_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_SendGoal_Request)() {
  return &::hardware_interface_linrob_package::action::rosidl_typesupport_c::MoveFeedback_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hardware_interface_linrob_package
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveFeedback_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveFeedback_SendGoal_Response_type_support_ids_t;

static const _MoveFeedback_SendGoal_Response_type_support_ids_t _MoveFeedback_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveFeedback_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveFeedback_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveFeedback_SendGoal_Response_type_support_symbol_names_t _MoveFeedback_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hardware_interface_linrob_package, action, MoveFeedback_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hardware_interface_linrob_package, action, MoveFeedback_SendGoal_Response)),
  }
};

typedef struct _MoveFeedback_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveFeedback_SendGoal_Response_type_support_data_t;

static _MoveFeedback_SendGoal_Response_type_support_data_t _MoveFeedback_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveFeedback_SendGoal_Response_message_typesupport_map = {
  2,
  "hardware_interface_linrob_package",
  &_MoveFeedback_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveFeedback_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveFeedback_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveFeedback_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveFeedback_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_SendGoal_Response)() {
  return &::hardware_interface_linrob_package::action::rosidl_typesupport_c::MoveFeedback_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hardware_interface_linrob_package
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveFeedback_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveFeedback_SendGoal_type_support_ids_t;

static const _MoveFeedback_SendGoal_type_support_ids_t _MoveFeedback_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveFeedback_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveFeedback_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveFeedback_SendGoal_type_support_symbol_names_t _MoveFeedback_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hardware_interface_linrob_package, action, MoveFeedback_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hardware_interface_linrob_package, action, MoveFeedback_SendGoal)),
  }
};

typedef struct _MoveFeedback_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveFeedback_SendGoal_type_support_data_t;

static _MoveFeedback_SendGoal_type_support_data_t _MoveFeedback_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveFeedback_SendGoal_service_typesupport_map = {
  2,
  "hardware_interface_linrob_package",
  &_MoveFeedback_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveFeedback_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveFeedback_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveFeedback_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveFeedback_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_SendGoal)() {
  return &::hardware_interface_linrob_package::action::rosidl_typesupport_c::MoveFeedback_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hardware_interface_linrob_package
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveFeedback_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveFeedback_GetResult_Request_type_support_ids_t;

static const _MoveFeedback_GetResult_Request_type_support_ids_t _MoveFeedback_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveFeedback_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveFeedback_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveFeedback_GetResult_Request_type_support_symbol_names_t _MoveFeedback_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hardware_interface_linrob_package, action, MoveFeedback_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hardware_interface_linrob_package, action, MoveFeedback_GetResult_Request)),
  }
};

typedef struct _MoveFeedback_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveFeedback_GetResult_Request_type_support_data_t;

static _MoveFeedback_GetResult_Request_type_support_data_t _MoveFeedback_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveFeedback_GetResult_Request_message_typesupport_map = {
  2,
  "hardware_interface_linrob_package",
  &_MoveFeedback_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveFeedback_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveFeedback_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveFeedback_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveFeedback_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_GetResult_Request)() {
  return &::hardware_interface_linrob_package::action::rosidl_typesupport_c::MoveFeedback_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hardware_interface_linrob_package
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveFeedback_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveFeedback_GetResult_Response_type_support_ids_t;

static const _MoveFeedback_GetResult_Response_type_support_ids_t _MoveFeedback_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveFeedback_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveFeedback_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveFeedback_GetResult_Response_type_support_symbol_names_t _MoveFeedback_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hardware_interface_linrob_package, action, MoveFeedback_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hardware_interface_linrob_package, action, MoveFeedback_GetResult_Response)),
  }
};

typedef struct _MoveFeedback_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveFeedback_GetResult_Response_type_support_data_t;

static _MoveFeedback_GetResult_Response_type_support_data_t _MoveFeedback_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveFeedback_GetResult_Response_message_typesupport_map = {
  2,
  "hardware_interface_linrob_package",
  &_MoveFeedback_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveFeedback_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveFeedback_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveFeedback_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveFeedback_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_GetResult_Response)() {
  return &::hardware_interface_linrob_package::action::rosidl_typesupport_c::MoveFeedback_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hardware_interface_linrob_package
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveFeedback_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveFeedback_GetResult_type_support_ids_t;

static const _MoveFeedback_GetResult_type_support_ids_t _MoveFeedback_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveFeedback_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveFeedback_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveFeedback_GetResult_type_support_symbol_names_t _MoveFeedback_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hardware_interface_linrob_package, action, MoveFeedback_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hardware_interface_linrob_package, action, MoveFeedback_GetResult)),
  }
};

typedef struct _MoveFeedback_GetResult_type_support_data_t
{
  void * data[2];
} _MoveFeedback_GetResult_type_support_data_t;

static _MoveFeedback_GetResult_type_support_data_t _MoveFeedback_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveFeedback_GetResult_service_typesupport_map = {
  2,
  "hardware_interface_linrob_package",
  &_MoveFeedback_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveFeedback_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveFeedback_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveFeedback_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveFeedback_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_GetResult)() {
  return &::hardware_interface_linrob_package::action::rosidl_typesupport_c::MoveFeedback_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hardware_interface_linrob_package
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveFeedback_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveFeedback_FeedbackMessage_type_support_ids_t;

static const _MoveFeedback_FeedbackMessage_type_support_ids_t _MoveFeedback_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveFeedback_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveFeedback_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveFeedback_FeedbackMessage_type_support_symbol_names_t _MoveFeedback_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hardware_interface_linrob_package, action, MoveFeedback_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hardware_interface_linrob_package, action, MoveFeedback_FeedbackMessage)),
  }
};

typedef struct _MoveFeedback_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveFeedback_FeedbackMessage_type_support_data_t;

static _MoveFeedback_FeedbackMessage_type_support_data_t _MoveFeedback_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveFeedback_FeedbackMessage_message_typesupport_map = {
  2,
  "hardware_interface_linrob_package",
  &_MoveFeedback_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveFeedback_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveFeedback_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveFeedback_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveFeedback_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_FeedbackMessage)() {
  return &::hardware_interface_linrob_package::action::rosidl_typesupport_c::MoveFeedback_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "hardware_interface_linrob_package/action/move_feedback.h"
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__type_support.h"

static rosidl_action_type_support_t _hardware_interface_linrob_package__action__MoveFeedback__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback)()
{
  // Thread-safe by always writing the same values to the static struct
  _hardware_interface_linrob_package__action__MoveFeedback__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_SendGoal)();
  _hardware_interface_linrob_package__action__MoveFeedback__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_GetResult)();
  _hardware_interface_linrob_package__action__MoveFeedback__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _hardware_interface_linrob_package__action__MoveFeedback__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, hardware_interface_linrob_package, action, MoveFeedback_FeedbackMessage)();
  _hardware_interface_linrob_package__action__MoveFeedback__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_hardware_interface_linrob_package__action__MoveFeedback__typesupport_c;
}

#ifdef __cplusplus
}
#endif
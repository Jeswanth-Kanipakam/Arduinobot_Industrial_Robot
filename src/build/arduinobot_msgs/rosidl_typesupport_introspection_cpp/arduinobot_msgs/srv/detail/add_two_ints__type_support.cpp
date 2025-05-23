// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from arduinobot_msgs:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "arduinobot_msgs/srv/detail/add_two_ints__functions.h"
#include "arduinobot_msgs/srv/detail/add_two_ints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace arduinobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void AddTwoInts_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) arduinobot_msgs::srv::AddTwoInts_Request(_init);
}

void AddTwoInts_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<arduinobot_msgs::srv::AddTwoInts_Request *>(message_memory);
  typed_message->~AddTwoInts_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AddTwoInts_Request_message_member_array[2] = {
  {
    "a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arduinobot_msgs::srv::AddTwoInts_Request, a),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arduinobot_msgs::srv::AddTwoInts_Request, b),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AddTwoInts_Request_message_members = {
  "arduinobot_msgs::srv",  // message namespace
  "AddTwoInts_Request",  // message name
  2,  // number of fields
  sizeof(arduinobot_msgs::srv::AddTwoInts_Request),
  false,  // has_any_key_member_
  AddTwoInts_Request_message_member_array,  // message members
  AddTwoInts_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AddTwoInts_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AddTwoInts_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AddTwoInts_Request_message_members,
  get_message_typesupport_handle_function,
  &arduinobot_msgs__srv__AddTwoInts_Request__get_type_hash,
  &arduinobot_msgs__srv__AddTwoInts_Request__get_type_description,
  &arduinobot_msgs__srv__AddTwoInts_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace arduinobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arduinobot_msgs::srv::AddTwoInts_Request>()
{
  return &::arduinobot_msgs::srv::rosidl_typesupport_introspection_cpp::AddTwoInts_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arduinobot_msgs, srv, AddTwoInts_Request)() {
  return &::arduinobot_msgs::srv::rosidl_typesupport_introspection_cpp::AddTwoInts_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "arduinobot_msgs/srv/detail/add_two_ints__functions.h"
// already included above
// #include "arduinobot_msgs/srv/detail/add_two_ints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace arduinobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void AddTwoInts_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) arduinobot_msgs::srv::AddTwoInts_Response(_init);
}

void AddTwoInts_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<arduinobot_msgs::srv::AddTwoInts_Response *>(message_memory);
  typed_message->~AddTwoInts_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AddTwoInts_Response_message_member_array[1] = {
  {
    "sum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arduinobot_msgs::srv::AddTwoInts_Response, sum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AddTwoInts_Response_message_members = {
  "arduinobot_msgs::srv",  // message namespace
  "AddTwoInts_Response",  // message name
  1,  // number of fields
  sizeof(arduinobot_msgs::srv::AddTwoInts_Response),
  false,  // has_any_key_member_
  AddTwoInts_Response_message_member_array,  // message members
  AddTwoInts_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AddTwoInts_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AddTwoInts_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AddTwoInts_Response_message_members,
  get_message_typesupport_handle_function,
  &arduinobot_msgs__srv__AddTwoInts_Response__get_type_hash,
  &arduinobot_msgs__srv__AddTwoInts_Response__get_type_description,
  &arduinobot_msgs__srv__AddTwoInts_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace arduinobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arduinobot_msgs::srv::AddTwoInts_Response>()
{
  return &::arduinobot_msgs::srv::rosidl_typesupport_introspection_cpp::AddTwoInts_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arduinobot_msgs, srv, AddTwoInts_Response)() {
  return &::arduinobot_msgs::srv::rosidl_typesupport_introspection_cpp::AddTwoInts_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "arduinobot_msgs/srv/detail/add_two_ints__functions.h"
// already included above
// #include "arduinobot_msgs/srv/detail/add_two_ints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace arduinobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void AddTwoInts_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) arduinobot_msgs::srv::AddTwoInts_Event(_init);
}

void AddTwoInts_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<arduinobot_msgs::srv::AddTwoInts_Event *>(message_memory);
  typed_message->~AddTwoInts_Event();
}

size_t size_function__AddTwoInts_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<arduinobot_msgs::srv::AddTwoInts_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AddTwoInts_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<arduinobot_msgs::srv::AddTwoInts_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__AddTwoInts_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<arduinobot_msgs::srv::AddTwoInts_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__AddTwoInts_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const arduinobot_msgs::srv::AddTwoInts_Request *>(
    get_const_function__AddTwoInts_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<arduinobot_msgs::srv::AddTwoInts_Request *>(untyped_value);
  value = item;
}

void assign_function__AddTwoInts_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<arduinobot_msgs::srv::AddTwoInts_Request *>(
    get_function__AddTwoInts_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const arduinobot_msgs::srv::AddTwoInts_Request *>(untyped_value);
  item = value;
}

void resize_function__AddTwoInts_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<arduinobot_msgs::srv::AddTwoInts_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AddTwoInts_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<arduinobot_msgs::srv::AddTwoInts_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AddTwoInts_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<arduinobot_msgs::srv::AddTwoInts_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__AddTwoInts_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<arduinobot_msgs::srv::AddTwoInts_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__AddTwoInts_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const arduinobot_msgs::srv::AddTwoInts_Response *>(
    get_const_function__AddTwoInts_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<arduinobot_msgs::srv::AddTwoInts_Response *>(untyped_value);
  value = item;
}

void assign_function__AddTwoInts_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<arduinobot_msgs::srv::AddTwoInts_Response *>(
    get_function__AddTwoInts_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const arduinobot_msgs::srv::AddTwoInts_Response *>(untyped_value);
  item = value;
}

void resize_function__AddTwoInts_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<arduinobot_msgs::srv::AddTwoInts_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AddTwoInts_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arduinobot_msgs::srv::AddTwoInts_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<arduinobot_msgs::srv::AddTwoInts_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(arduinobot_msgs::srv::AddTwoInts_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__AddTwoInts_Event__request,  // size() function pointer
    get_const_function__AddTwoInts_Event__request,  // get_const(index) function pointer
    get_function__AddTwoInts_Event__request,  // get(index) function pointer
    fetch_function__AddTwoInts_Event__request,  // fetch(index, &value) function pointer
    assign_function__AddTwoInts_Event__request,  // assign(index, value) function pointer
    resize_function__AddTwoInts_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<arduinobot_msgs::srv::AddTwoInts_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(arduinobot_msgs::srv::AddTwoInts_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__AddTwoInts_Event__response,  // size() function pointer
    get_const_function__AddTwoInts_Event__response,  // get_const(index) function pointer
    get_function__AddTwoInts_Event__response,  // get(index) function pointer
    fetch_function__AddTwoInts_Event__response,  // fetch(index, &value) function pointer
    assign_function__AddTwoInts_Event__response,  // assign(index, value) function pointer
    resize_function__AddTwoInts_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AddTwoInts_Event_message_members = {
  "arduinobot_msgs::srv",  // message namespace
  "AddTwoInts_Event",  // message name
  3,  // number of fields
  sizeof(arduinobot_msgs::srv::AddTwoInts_Event),
  false,  // has_any_key_member_
  AddTwoInts_Event_message_member_array,  // message members
  AddTwoInts_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  AddTwoInts_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AddTwoInts_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AddTwoInts_Event_message_members,
  get_message_typesupport_handle_function,
  &arduinobot_msgs__srv__AddTwoInts_Event__get_type_hash,
  &arduinobot_msgs__srv__AddTwoInts_Event__get_type_description,
  &arduinobot_msgs__srv__AddTwoInts_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace arduinobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arduinobot_msgs::srv::AddTwoInts_Event>()
{
  return &::arduinobot_msgs::srv::rosidl_typesupport_introspection_cpp::AddTwoInts_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arduinobot_msgs, srv, AddTwoInts_Event)() {
  return &::arduinobot_msgs::srv::rosidl_typesupport_introspection_cpp::AddTwoInts_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "arduinobot_msgs/srv/detail/add_two_ints__functions.h"
// already included above
// #include "arduinobot_msgs/srv/detail/add_two_ints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace arduinobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AddTwoInts_service_members = {
  "arduinobot_msgs::srv",  // service namespace
  "AddTwoInts",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<arduinobot_msgs::srv::AddTwoInts>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t AddTwoInts_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AddTwoInts_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<arduinobot_msgs::srv::AddTwoInts_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<arduinobot_msgs::srv::AddTwoInts_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<arduinobot_msgs::srv::AddTwoInts_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<arduinobot_msgs::srv::AddTwoInts>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<arduinobot_msgs::srv::AddTwoInts>,
  &arduinobot_msgs__srv__AddTwoInts__get_type_hash,
  &arduinobot_msgs__srv__AddTwoInts__get_type_description,
  &arduinobot_msgs__srv__AddTwoInts__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace arduinobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<arduinobot_msgs::srv::AddTwoInts>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::arduinobot_msgs::srv::rosidl_typesupport_introspection_cpp::AddTwoInts_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::arduinobot_msgs::srv::AddTwoInts_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::arduinobot_msgs::srv::AddTwoInts_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::arduinobot_msgs::srv::AddTwoInts_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arduinobot_msgs, srv, AddTwoInts)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<arduinobot_msgs::srv::AddTwoInts>();
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sixdof_arm_interfaces:srv/ResetArm.idl
// generated code does not contain a copyright notice

#ifndef SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__BUILDER_HPP_
#define SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sixdof_arm_interfaces/srv/detail/reset_arm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sixdof_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetArm_Request_positions
{
public:
  Init_ResetArm_Request_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sixdof_arm_interfaces::srv::ResetArm_Request positions(::sixdof_arm_interfaces::srv::ResetArm_Request::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sixdof_arm_interfaces::srv::ResetArm_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sixdof_arm_interfaces::srv::ResetArm_Request>()
{
  return sixdof_arm_interfaces::srv::builder::Init_ResetArm_Request_positions();
}

}  // namespace sixdof_arm_interfaces


namespace sixdof_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetArm_Response_success
{
public:
  Init_ResetArm_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sixdof_arm_interfaces::srv::ResetArm_Response success(::sixdof_arm_interfaces::srv::ResetArm_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sixdof_arm_interfaces::srv::ResetArm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sixdof_arm_interfaces::srv::ResetArm_Response>()
{
  return sixdof_arm_interfaces::srv::builder::Init_ResetArm_Response_success();
}

}  // namespace sixdof_arm_interfaces

#endif  // SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sixdof_arm_interfaces:action/MoveSixDofArm.idl
// generated code does not contain a copyright notice

#ifndef SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__BUILDER_HPP_
#define SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sixdof_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveSixDofArm_Goal_reset
{
public:
  explicit Init_MoveSixDofArm_Goal_reset(::sixdof_arm_interfaces::action::MoveSixDofArm_Goal & msg)
  : msg_(msg)
  {}
  ::sixdof_arm_interfaces::action::MoveSixDofArm_Goal reset(::sixdof_arm_interfaces::action::MoveSixDofArm_Goal::_reset_type arg)
  {
    msg_.reset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_Goal msg_;
};

class Init_MoveSixDofArm_Goal_duration
{
public:
  explicit Init_MoveSixDofArm_Goal_duration(::sixdof_arm_interfaces::action::MoveSixDofArm_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveSixDofArm_Goal_reset duration(::sixdof_arm_interfaces::action::MoveSixDofArm_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_MoveSixDofArm_Goal_reset(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_Goal msg_;
};

class Init_MoveSixDofArm_Goal_velocities
{
public:
  explicit Init_MoveSixDofArm_Goal_velocities(::sixdof_arm_interfaces::action::MoveSixDofArm_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveSixDofArm_Goal_duration velocities(::sixdof_arm_interfaces::action::MoveSixDofArm_Goal::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_MoveSixDofArm_Goal_duration(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_Goal msg_;
};

class Init_MoveSixDofArm_Goal_current_position
{
public:
  explicit Init_MoveSixDofArm_Goal_current_position(::sixdof_arm_interfaces::action::MoveSixDofArm_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveSixDofArm_Goal_velocities current_position(::sixdof_arm_interfaces::action::MoveSixDofArm_Goal::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return Init_MoveSixDofArm_Goal_velocities(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_Goal msg_;
};

class Init_MoveSixDofArm_Goal_joint_names
{
public:
  Init_MoveSixDofArm_Goal_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveSixDofArm_Goal_current_position joint_names(::sixdof_arm_interfaces::action::MoveSixDofArm_Goal::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_MoveSixDofArm_Goal_current_position(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sixdof_arm_interfaces::action::MoveSixDofArm_Goal>()
{
  return sixdof_arm_interfaces::action::builder::Init_MoveSixDofArm_Goal_joint_names();
}

}  // namespace sixdof_arm_interfaces


namespace sixdof_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveSixDofArm_Result_success
{
public:
  Init_MoveSixDofArm_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sixdof_arm_interfaces::action::MoveSixDofArm_Result success(::sixdof_arm_interfaces::action::MoveSixDofArm_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sixdof_arm_interfaces::action::MoveSixDofArm_Result>()
{
  return sixdof_arm_interfaces::action::builder::Init_MoveSixDofArm_Result_success();
}

}  // namespace sixdof_arm_interfaces


namespace sixdof_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveSixDofArm_Feedback_current_position
{
public:
  Init_MoveSixDofArm_Feedback_current_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sixdof_arm_interfaces::action::MoveSixDofArm_Feedback current_position(::sixdof_arm_interfaces::action::MoveSixDofArm_Feedback::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>()
{
  return sixdof_arm_interfaces::action::builder::Init_MoveSixDofArm_Feedback_current_position();
}

}  // namespace sixdof_arm_interfaces


namespace sixdof_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveSixDofArm_SendGoal_Request_goal
{
public:
  explicit Init_MoveSixDofArm_SendGoal_Request_goal(::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request goal(::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request msg_;
};

class Init_MoveSixDofArm_SendGoal_Request_goal_id
{
public:
  Init_MoveSixDofArm_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveSixDofArm_SendGoal_Request_goal goal_id(::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveSixDofArm_SendGoal_Request_goal(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request>()
{
  return sixdof_arm_interfaces::action::builder::Init_MoveSixDofArm_SendGoal_Request_goal_id();
}

}  // namespace sixdof_arm_interfaces


namespace sixdof_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveSixDofArm_SendGoal_Response_stamp
{
public:
  explicit Init_MoveSixDofArm_SendGoal_Response_stamp(::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response stamp(::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response msg_;
};

class Init_MoveSixDofArm_SendGoal_Response_accepted
{
public:
  Init_MoveSixDofArm_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveSixDofArm_SendGoal_Response_stamp accepted(::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveSixDofArm_SendGoal_Response_stamp(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response>()
{
  return sixdof_arm_interfaces::action::builder::Init_MoveSixDofArm_SendGoal_Response_accepted();
}

}  // namespace sixdof_arm_interfaces


namespace sixdof_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveSixDofArm_GetResult_Request_goal_id
{
public:
  Init_MoveSixDofArm_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request goal_id(::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request>()
{
  return sixdof_arm_interfaces::action::builder::Init_MoveSixDofArm_GetResult_Request_goal_id();
}

}  // namespace sixdof_arm_interfaces


namespace sixdof_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveSixDofArm_GetResult_Response_result
{
public:
  explicit Init_MoveSixDofArm_GetResult_Response_result(::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response result(::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response msg_;
};

class Init_MoveSixDofArm_GetResult_Response_status
{
public:
  Init_MoveSixDofArm_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveSixDofArm_GetResult_Response_result status(::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveSixDofArm_GetResult_Response_result(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response>()
{
  return sixdof_arm_interfaces::action::builder::Init_MoveSixDofArm_GetResult_Response_status();
}

}  // namespace sixdof_arm_interfaces


namespace sixdof_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveSixDofArm_FeedbackMessage_feedback
{
public:
  explicit Init_MoveSixDofArm_FeedbackMessage_feedback(::sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage feedback(::sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage msg_;
};

class Init_MoveSixDofArm_FeedbackMessage_goal_id
{
public:
  Init_MoveSixDofArm_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveSixDofArm_FeedbackMessage_feedback goal_id(::sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveSixDofArm_FeedbackMessage_feedback(msg_);
  }

private:
  ::sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage>()
{
  return sixdof_arm_interfaces::action::builder::Init_MoveSixDofArm_FeedbackMessage_goal_id();
}

}  // namespace sixdof_arm_interfaces

#endif  // SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__BUILDER_HPP_

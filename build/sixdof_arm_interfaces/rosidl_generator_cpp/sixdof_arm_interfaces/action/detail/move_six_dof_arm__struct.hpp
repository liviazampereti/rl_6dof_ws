// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sixdof_arm_interfaces:action/MoveSixDofArm.idl
// generated code does not contain a copyright notice

#ifndef SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__STRUCT_HPP_
#define SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Goal __attribute__((deprecated))
#else
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Goal __declspec(deprecated)
#endif

namespace sixdof_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveSixDofArm_Goal_
{
  using Type = MoveSixDofArm_Goal_<ContainerAllocator>;

  explicit MoveSixDofArm_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
      this->reset = false;
    }
  }

  explicit MoveSixDofArm_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
      this->reset = false;
    }
  }

  // field types and members
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_names_type joint_names;
  using _current_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _current_position_type current_position;
  using _velocities_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _velocities_type velocities;
  using _duration_type =
    double;
  _duration_type duration;
  using _reset_type =
    bool;
  _reset_type reset;

  // setters for named parameter idiom
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__current_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->current_position = _arg;
    return *this;
  }
  Type & set__velocities(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->velocities = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__reset(
    const bool & _arg)
  {
    this->reset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Goal
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Goal
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveSixDofArm_Goal_ & other) const
  {
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->current_position != other.current_position) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->reset != other.reset) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveSixDofArm_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveSixDofArm_Goal_

// alias to use template instance with default allocator
using MoveSixDofArm_Goal =
  sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace sixdof_arm_interfaces


#ifndef _WIN32
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Result __attribute__((deprecated))
#else
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Result __declspec(deprecated)
#endif

namespace sixdof_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveSixDofArm_Result_
{
  using Type = MoveSixDofArm_Result_<ContainerAllocator>;

  explicit MoveSixDofArm_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MoveSixDofArm_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Result
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Result
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveSixDofArm_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveSixDofArm_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveSixDofArm_Result_

// alias to use template instance with default allocator
using MoveSixDofArm_Result =
  sixdof_arm_interfaces::action::MoveSixDofArm_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace sixdof_arm_interfaces


#ifndef _WIN32
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Feedback __declspec(deprecated)
#endif

namespace sixdof_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveSixDofArm_Feedback_
{
  using Type = MoveSixDofArm_Feedback_<ContainerAllocator>;

  explicit MoveSixDofArm_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reward = 0ll;
      this->done = false;
    }
  }

  explicit MoveSixDofArm_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reward = 0ll;
      this->done = false;
    }
  }

  // field types and members
  using _current_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _current_position_type current_position;
  using _reward_type =
    int64_t;
  _reward_type reward;
  using _done_type =
    bool;
  _done_type done;

  // setters for named parameter idiom
  Type & set__current_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->current_position = _arg;
    return *this;
  }
  Type & set__reward(
    const int64_t & _arg)
  {
    this->reward = _arg;
    return *this;
  }
  Type & set__done(
    const bool & _arg)
  {
    this->done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Feedback
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_Feedback
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveSixDofArm_Feedback_ & other) const
  {
    if (this->current_position != other.current_position) {
      return false;
    }
    if (this->reward != other.reward) {
      return false;
    }
    if (this->done != other.done) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveSixDofArm_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveSixDofArm_Feedback_

// alias to use template instance with default allocator
using MoveSixDofArm_Feedback =
  sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace sixdof_arm_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request __declspec(deprecated)
#endif

namespace sixdof_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveSixDofArm_SendGoal_Request_
{
  using Type = MoveSixDofArm_SendGoal_Request_<ContainerAllocator>;

  explicit MoveSixDofArm_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveSixDofArm_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const sixdof_arm_interfaces::action::MoveSixDofArm_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveSixDofArm_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveSixDofArm_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveSixDofArm_SendGoal_Request_

// alias to use template instance with default allocator
using MoveSixDofArm_SendGoal_Request =
  sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace sixdof_arm_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response __declspec(deprecated)
#endif

namespace sixdof_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveSixDofArm_SendGoal_Response_
{
  using Type = MoveSixDofArm_SendGoal_Response_<ContainerAllocator>;

  explicit MoveSixDofArm_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveSixDofArm_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveSixDofArm_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveSixDofArm_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveSixDofArm_SendGoal_Response_

// alias to use template instance with default allocator
using MoveSixDofArm_SendGoal_Response =
  sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace sixdof_arm_interfaces

namespace sixdof_arm_interfaces
{

namespace action
{

struct MoveSixDofArm_SendGoal
{
  using Request = sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request;
  using Response = sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response;
};

}  // namespace action

}  // namespace sixdof_arm_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request __declspec(deprecated)
#endif

namespace sixdof_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveSixDofArm_GetResult_Request_
{
  using Type = MoveSixDofArm_GetResult_Request_<ContainerAllocator>;

  explicit MoveSixDofArm_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveSixDofArm_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveSixDofArm_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveSixDofArm_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveSixDofArm_GetResult_Request_

// alias to use template instance with default allocator
using MoveSixDofArm_GetResult_Request =
  sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace sixdof_arm_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response __declspec(deprecated)
#endif

namespace sixdof_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveSixDofArm_GetResult_Response_
{
  using Type = MoveSixDofArm_GetResult_Response_<ContainerAllocator>;

  explicit MoveSixDofArm_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveSixDofArm_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const sixdof_arm_interfaces::action::MoveSixDofArm_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveSixDofArm_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveSixDofArm_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveSixDofArm_GetResult_Response_

// alias to use template instance with default allocator
using MoveSixDofArm_GetResult_Response =
  sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace sixdof_arm_interfaces

namespace sixdof_arm_interfaces
{

namespace action
{

struct MoveSixDofArm_GetResult
{
  using Request = sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request;
  using Response = sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response;
};

}  // namespace action

}  // namespace sixdof_arm_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage __declspec(deprecated)
#endif

namespace sixdof_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveSixDofArm_FeedbackMessage_
{
  using Type = MoveSixDofArm_FeedbackMessage_<ContainerAllocator>;

  explicit MoveSixDofArm_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveSixDofArm_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const sixdof_arm_interfaces::action::MoveSixDofArm_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage
    std::shared_ptr<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveSixDofArm_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveSixDofArm_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveSixDofArm_FeedbackMessage_

// alias to use template instance with default allocator
using MoveSixDofArm_FeedbackMessage =
  sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace sixdof_arm_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace sixdof_arm_interfaces
{

namespace action
{

struct MoveSixDofArm
{
  /// The goal message defined in the action definition.
  using Goal = sixdof_arm_interfaces::action::MoveSixDofArm_Goal;
  /// The result message defined in the action definition.
  using Result = sixdof_arm_interfaces::action::MoveSixDofArm_Result;
  /// The feedback message defined in the action definition.
  using Feedback = sixdof_arm_interfaces::action::MoveSixDofArm_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = sixdof_arm_interfaces::action::MoveSixDofArm_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveSixDofArm MoveSixDofArm;

}  // namespace action

}  // namespace sixdof_arm_interfaces

#endif  // SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sixdof_arm_interfaces:srv/ResetArm.idl
// generated code does not contain a copyright notice

#ifndef SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__STRUCT_HPP_
#define SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sixdof_arm_interfaces__srv__ResetArm_Request __attribute__((deprecated))
#else
# define DEPRECATED__sixdof_arm_interfaces__srv__ResetArm_Request __declspec(deprecated)
#endif

namespace sixdof_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetArm_Request_
{
  using Type = ResetArm_Request_<ContainerAllocator>;

  explicit ResetArm_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ResetArm_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;

  // setters for named parameter idiom
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sixdof_arm_interfaces__srv__ResetArm_Request
    std::shared_ptr<sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sixdof_arm_interfaces__srv__ResetArm_Request
    std::shared_ptr<sixdof_arm_interfaces::srv::ResetArm_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetArm_Request_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetArm_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetArm_Request_

// alias to use template instance with default allocator
using ResetArm_Request =
  sixdof_arm_interfaces::srv::ResetArm_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sixdof_arm_interfaces


#ifndef _WIN32
# define DEPRECATED__sixdof_arm_interfaces__srv__ResetArm_Response __attribute__((deprecated))
#else
# define DEPRECATED__sixdof_arm_interfaces__srv__ResetArm_Response __declspec(deprecated)
#endif

namespace sixdof_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetArm_Response_
{
  using Type = ResetArm_Response_<ContainerAllocator>;

  explicit ResetArm_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ResetArm_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sixdof_arm_interfaces__srv__ResetArm_Response
    std::shared_ptr<sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sixdof_arm_interfaces__srv__ResetArm_Response
    std::shared_ptr<sixdof_arm_interfaces::srv::ResetArm_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetArm_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetArm_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetArm_Response_

// alias to use template instance with default allocator
using ResetArm_Response =
  sixdof_arm_interfaces::srv::ResetArm_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sixdof_arm_interfaces

namespace sixdof_arm_interfaces
{

namespace srv
{

struct ResetArm
{
  using Request = sixdof_arm_interfaces::srv::ResetArm_Request;
  using Response = sixdof_arm_interfaces::srv::ResetArm_Response;
};

}  // namespace srv

}  // namespace sixdof_arm_interfaces

#endif  // SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__STRUCT_HPP_

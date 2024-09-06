cmake_minimum_required(VERSION 3.8)
project(action_test)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(my_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)

add_executable(action_server src/action_server.cpp)
add_executable(action_client src/action_client.cpp)

target_include_directories(action_server PRIVATE
      $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>
      $<INSTALL_INTERFACE:include>
)
target_include_directories(action_client PRIVATE
      $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>
      $<INSTALL_INTERFACE:include>
)

ament_target_dependencies(action_server rclcpp my_msgs rclcpp_action)
ament_target_dependencies(action_client rclcpp my_msgs rclcpp_action)


target_compile_features(action_server PUBLIC c_std_11 cxx_std_14)
target_compile_features(action_client PUBLIC c_std_11 cxx_std_14)

install(TARGETS
    action_server
    action_client
    DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

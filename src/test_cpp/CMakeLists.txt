cmake_minimum_required(VERSION 3.8)
project(test_cpp)


#Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(my_msgs REQUIRED)

add_executable(test_node src/main.cpp)
add_executable(sub_node src/sub_ros2_test.cpp)
add_executable(server_node src/server/server.cpp)
add_executable(server_client_node src/server/server_client.cpp)


ament_target_dependencies(test_node rclcpp std_msgs my_msgs)
ament_target_dependencies(sub_node rclcpp std_msgs my_msgs)
ament_target_dependencies(server_node rclcpp std_msgs my_msgs)
ament_target_dependencies(server_client_node rclcpp std_msgs my_msgs)


install(TARGETS
      test_node
      sub_node
      server_node
      server_client_node
      DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY 
     launch
     DESTINATION share/${PROJECT_NAME}/
)   

ament_package()


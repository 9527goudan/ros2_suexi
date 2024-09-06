from launch import LaunchDescription
from launch_ros.actions import Node


#   package  :      功能包名        必填项
# executable :      节点名称        必填项
#   name     :      运行时节点名称
# namespace  :      节点ROS命名空间 【 rclcpp::Node test_node("test_node")  test_node ： ROS 命名空间】
# remappings :      重映射，节点、话题、服务、action名称 [('from_1', 'to_1'), ('from_2', 'to_2'), ...]
#  respawn   :      复位。默认为‘false’；设为‘true’，节点停止后自动重启
#  output    ：     输出。设为‘screen’，将节点的输出打印到终端显示
# parameters :      传参

def generate_launch_description():
    test_Node = Node(package="test_cpp", executable="test_node")

    subNodeRemappings = [('pub_test2', 'pubTest_2')]
                        
    sub_node = Node(package="test_cpp", executable="sub_node", name="nb", remappings=subNodeRemappings)

    launch_description = LaunchDescription([test_Node, sub_node])

    return launch_description
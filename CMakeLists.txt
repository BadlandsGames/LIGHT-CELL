cmake_minimum_required(VERSION 3.10)
project(LightCell)

set(CMAKE_CXX_STANDARD 17)

find_package(Vulkan REQUIRED)

add_executable(LightCell
    src/main.cpp
    src/VulkanApp.cpp
    src/InputManager.cpp
    src/Scene.cpp
    src/VRManager.cpp
)

target_include_directories(LightCell PRIVATE ${Vulkan_INCLUDE_DIRS})
target_link_libraries(LightCell PRIVATE ${Vulkan_LIBRARIES})
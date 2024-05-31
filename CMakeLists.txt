cmake_minimum_required(VERSION 3.0.0)
project(devcontainer-cpp VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON) 

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 加入本项目的头文件
include_directories(${CMAKE_SOURCE_DIR}/src/include)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Wextra -Wshadow -Wpedantic")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Woverflow -Wfloat-equal")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=address,undefined")

add_executable(hello test/hello.cpp src/hello.cpp)


cmake_minimum_required(VERSION 3.27.7)

project(App VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include_directories(src/includes)

add_executable(App src/main.cpp)

target_include_directories(App PUBLIC "${PROJECT_BINARY_DIR}")
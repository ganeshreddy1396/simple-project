cmake_minimum_required(VERSION 3.10)
project(YourProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
add_executable(YourProject src/main.cpp src/adder.cpp)

# For CppUTest
enable_testing()
add_subdirectory(tests)

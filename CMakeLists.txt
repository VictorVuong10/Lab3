cmake_minimum_required(VERSION 3.13)
project(Lab3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab3 main.cpp Stack.cpp Stack.hpp unit_tests.cpp catch.hpp)
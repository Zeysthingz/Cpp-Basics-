cmake_minimum_required(VERSION 3.22)
project(cpp_header_exp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_header_exp
        main.cpp
        arrays1.cpp
        arrays1.hpp)

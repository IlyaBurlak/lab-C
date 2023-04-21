cmake_minimum_required(VERSION 3.24)
project(LAB_4 CXX)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(LAB_4
        main.cpp
        main.h
        Geometric/Common.cpp
        Geometric/Common.h
        Geometric/Equilateral_triangle.cpp
        Geometric/Equilateral_triangle.h
        Geometric/Hexagon.cpp
        Geometric/Hexagon.h
        )

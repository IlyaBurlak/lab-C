cmake_minimum_required(VERSION 3.24)
project(LAb_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(LAb_2 main.cpp main.h test.cpp App.cpp App.h File.cpp File.h Menu.cpp Menu.h)
add_executable(2-app LAB2/App.cpp)

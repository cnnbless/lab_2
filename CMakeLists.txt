cmake_minimum_required(VERSION 3.26)
project(OOP_lab2)

set(CMAKE_CXX_STANDARD 23)

add_executable(OOP_lab2 main.cpp
        Mechanic.cpp
        Membrane.h
        Membrane.cpp
        Optical.h
        Optical.cpp
)

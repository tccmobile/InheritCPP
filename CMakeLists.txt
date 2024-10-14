cmake_minimum_required(VERSION 3.29)
project(InheritCPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(InheritCPP main.cpp
        Person.cpp
        Person.h
        Student.cpp
        Student.h)

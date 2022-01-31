cmake_minimum_required(VERSION 3.21)
project(lab02_classroom_exercises_FurryLord)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab02_classroom_exercises_FurryLord
        catch.hpp
        ex01.hpp
        ex02.hpp
        lab02.cpp
        lab02.hpp
        tests.cpp)

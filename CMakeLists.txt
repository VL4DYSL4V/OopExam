cmake_minimum_required(VERSION 3.19)
project(OopExam)

set(CMAKE_CXX_STANDARD 14)

add_executable(OopExam
        main.cpp)

project(tests)

set(CMAKE_CXX_STANDARD 20)

add_executable(tests
        test/tests.cpp)
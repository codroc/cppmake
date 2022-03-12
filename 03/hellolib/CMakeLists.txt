cmake_minimum_required(VERSION 3.12)
project(hello)

add_library(hello SHARED hello.cpp)
target_include_directories(hello PUBLIC .)

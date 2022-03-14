cmake_minimum_required(VERSION 3.12)
project(hello)

add_library(hello STATIC hello.cpp)

target_link_libraries(hello PUBLIC log)
target_include_directories(hello PUBLIC .)

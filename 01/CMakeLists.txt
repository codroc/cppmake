cmake_minimum_required(VERSION 3.12)
project(hellocmake)

add_library(hello STATIC hello.cpp)
add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC hello)

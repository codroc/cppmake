cmake_minimum_required(VERSION 3.12)
project(log)

add_library(log STATIC log.cpp)
target_include_directories(log PUBLIC .)

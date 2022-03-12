cmake_minimum_required(VERSION 3.12)
project(hello)

add_subdirectory(hellolib)
add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC hello)
# 这里不需要 target_include_directories 是因为 a.out 依赖的唯一头文件 hello.h 被 hellolib 所依赖了
# 即 子模块中的 target_include_directories(hello PUBLIC .)

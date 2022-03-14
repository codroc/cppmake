cmake_minimum_required(VERSION 3.12)
project(third_party_library)

find_package(Boost
    1.46.1
    REQUIRED
    COMPONENTS filesystem system
    )

if(Boost_FOUND)
    message("boost found")
else()
    message("Cannot find boost")
endif()

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Boost::filesystem Boost::system)
# target_include_directories(${PROJECT_NAME} PUBLIC ${Boost_INCLUDE_DIRS})


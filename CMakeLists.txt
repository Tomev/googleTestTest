cmake_minimum_required(VERSION 3.11)
project(googleTestTest)

set(CMAKE_CXX_STANDARD 11)
set(SOURCES main.cpp)

add_executable(googleTestTest ${SOURCES})

include_directories(googleTestTest)
add_subdirectory(src)
add_subdirectory(test)

target_link_libraries(googleTestTest ADDER_LIB)

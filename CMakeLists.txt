cmake_minimum_required(VERSION 3.5.0)
project(protobuf VERSION 0.1.0 LANGUAGES C CXX)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/test
)
add_subdirectory(test)
link_libraries(test)
add_executable(app main.cpp)
cmake_minimum_required(VERSION 3.5.0)
project(test VERSION 0.1.0 LANGUAGES C CXX)

aux_source_directory(./ SRC)
add_library(test ${SRC})
target_link_libraries(test protobuf)


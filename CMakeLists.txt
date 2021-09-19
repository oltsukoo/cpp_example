cmake_minimum_required(VERSION 3.18)

project(cpp_example_project)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(cpp_example_app)
add_subdirectory(cpp_example_tests)
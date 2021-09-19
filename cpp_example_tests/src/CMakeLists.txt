include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(cpp_example_tests cpp_example_tests.cpp)
target_include_directories(cpp_example_tests PRIVATE ${PROJECT_SOURCE_DIR}/cpp_example_app/include)
target_link_libraries(cpp_example_tests gtest_main)
add_test(NAME cpp_example_tests COMMAND cpp_example_tests)
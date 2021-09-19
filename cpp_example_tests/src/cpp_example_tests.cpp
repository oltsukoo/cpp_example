#include "gtest/gtest.h"

#include "cpp_example_header.hpp"

TEST(example_test_suite, example_test_case)
{
    EXPECT_EQ(0, cpp_example_function());
    EXPECT_NE(1, cpp_example_function());
}
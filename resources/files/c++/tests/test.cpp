#include <gtest/gtest.h>

// Example test case
TEST(ExampleTest, SimpleAssertions) {
    EXPECT_EQ(1 + 1, 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
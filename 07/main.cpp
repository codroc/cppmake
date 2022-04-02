#include <gtest/gtest.h>

TEST(ABC, abc) {
    EXPECT_EQ((1 + 2), 3);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

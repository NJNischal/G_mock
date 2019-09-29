#include <gtest/gtest.h>
#include "../app/PID.cpp"

TEST(computeTest, should_pass) {
    PID pid(0,0,0,0,0,0);
    double something = pid.compute(0,0);
    EXPECT_EQ(0, something);
}

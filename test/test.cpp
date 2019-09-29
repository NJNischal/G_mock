#include <gtest/gtest.h>
#include "../app/PID.cpp"

TEST(computeTest, should_pass) {
    PID pid(0,0,0,0,0,0);
    double something = pid.compute(0,0);
    EXPECT_EQ(1, something);
}

TEST(constructorTest, should_pass) {
    int temp = 13 ;
    PID pid(0,0,0,temp,0,0);
    double something = pid.getSampleTime();
    EXPECT_EQ(temp, something);
}

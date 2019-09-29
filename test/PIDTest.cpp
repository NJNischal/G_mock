#include <gtest/gtest.h>
#include "../include/PID.h"

/**
* @brief Test for compute function
*/
TEST(computeTest, should_pass) {
    PID pid(0,0,0,0,0,0);
    double something = pid.compute(0,0);
    EXPECT_EQ(0, something);
}

/**
* @brief Test for constructor setting sampleTime
*/
TEST(constructorTestForSampleTime, should_pass) {
    int temp = 13 ;
    PID pid(0,0,0,temp,0,0);
    double something = pid.getSampleTime();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for constructor setting kp
*/
TEST(constructorTestForKp, should_pass) {
    int temp = 13 ;
    PID pid(temp,0,0,0,0,0);
    double something = pid.getKp();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for constructor setting kd
*/
TEST(constructorTestForKd, should_pass) {
    int temp = 13 ;
    PID pid(0,temp,0,0,0,0);
    double something = pid.getKd();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for constructor setting ki
*/
TEST(constructorTestForKi, should_pass) {
    int temp = 13 ;
    PID pid(0,0,temp,0,0,0);
    double something = pid.getKi();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for constructor setting outMax
*/
TEST(constructorTestForOutMax, should_pass) {
    int temp = 13 ;
    PID pid(0,0,0,0,temp,0);
    double something = pid.getOutMax();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for constructor setting outMin
*/
TEST(constructorTestForOutMin, should_pass) {
    int temp = 13 ;
    PID pid(0,0,0,0,0,temp);
    double something = pid.getOutMin();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for setter of sampleTime
*/
TEST(setterTestForSampleTime, should_pass) {
    int temp = 13 ;
    PID pid(0,0,0,0,0,0);
    pid.setSampleTime(temp);
    double something = pid.getSampleTime();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for setter of kp
*/
TEST(setterTestForKp, should_pass) {
    int temp = 13 ;
    PID pid(0,0,0,0,0,0);
    pid.setKp(temp);
    double something = pid.getKp();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for setter of ki
*/
TEST(setterTestForKi, should_pass) {
    int temp = 13 ;
    PID pid(0,0,0,0,0,0);
    pid.setKi(temp);
    double something = pid.getKi();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for setter of kd
*/
TEST(setterTestForKd, should_pass) {
    int temp = 13 ;
    PID pid(0,0,0,0,0,0);
    pid.setKd(temp);
    double something = pid.getKd();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for setter of outMax
*/
TEST(setterTestForOutMax, should_pass) {
    int temp = 13 ;
    PID pid(0,0,0,0,0,0);
    pid.setOutMax(temp);
    double something = pid.getOutMax();
    EXPECT_EQ(temp, something);
}

/**
* @brief Test for setter of outMin
*/
TEST(setterTestForOutMin, should_pass) {
    int temp = 13 ;
    PID pid(0,0,0,0,0,0);
    pid.setOutMin(temp);
    double something = pid.getOutMin();
    EXPECT_EQ(temp, something);
}


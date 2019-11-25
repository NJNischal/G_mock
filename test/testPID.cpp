/**
*
*Copyright (c) 2019 Nagireddi Jagadesh Nischal
*
*Redistribution and use in source and binary forms, with or without modification, are permitted *provided that the following conditions are met:
*
*1. Redistributions of source code must retain the above copyright notice, this list of conditions and *the following disclaimer.
*
*2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions *and the following disclaimer in the documentation and/or other materials provided with the *distribution.
*
*3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse *or promote products derived from this software without specific prior written permission.
*
*THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR *IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND *FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR *CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL *DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, *DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER *IN *CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT *OF THE *USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**/





#include <iostream>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "mockgeneralPID.h"
#include "GmockStatic.h"
#include "generalPID.h"
#include "PID.h"
#include "generalPID.h"

using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

/**
 *@brief Cases to test setting of kp gain by the mocked class
 *and the drived class
 *@param none
 *@return none
 */
TEST(GmockStatic, settingKPTest) {
  PID pid;
  std::unique_ptr<mockgeneralPID> gpid(new mockgeneralPID);
  std::unique_ptr<GmockStatic> gmock;

  // expect a call of the mocked class and should return true
  EXPECT_CALL(*gpid, setKP(3)).Times(1).WillOnce(Return(true));
  gmock->set_KP(std::move(gpid));

  // check if the expected return is equal to the actual output
  EXPECT_EQ(1, pid.setKP(3));
}

/**
 *@brief Cases to test setting of kd gain by the mocked class
 *and the drived class
 *@param none
 *@return none
 */
TEST(GmockStatic, settingKDTest) {
  PID pid;
  std::unique_ptr<mockgeneralPID> gpid(new mockgeneralPID);
  std::unique_ptr<GmockStatic> gmock;

  EXPECT_CALL(*gpid, setKD(4)).Times(1).WillOnce(Return(true));
  gmock->set_KD(std::move(gpid));

  EXPECT_EQ(1, pid.setKD(4));
}

/**
 *@brief Cases to test setting of ki gain by the mocked class
 *and the drived class
 *@param none
 *@return none
 */
TEST(GmockStatic, settingKITest) {
  PID pid;
  std::unique_ptr<mockgeneralPID> gpid(new mockgeneralPID);
  std::unique_ptr<GmockStatic> gmock;

  EXPECT_CALL(*gpid, setKI(0.2)).Times(1).WillOnce(Return(true));
  gmock->set_KI(std::move(gpid));

  EXPECT_EQ(1, pid.setKI(0.2));
}

/**
 *@brief Cases to test setting of compute PID by the mocked class
 *and the drived class
 *@param none
 *@return none
 */
TEST(GmockStatic, computeMethodTest) {
  PID pid;
  std::unique_ptr<mockgeneralPID> gpid(new mockgeneralPID);
  std::unique_ptr<GmockStatic> gmock;

  EXPECT_CALL(*gpid , computePID(1, 2)).Times(1).WillOnce(Return(0.0));
  gmock->compute_PID(std::move(gpid));

  float newVel = pid.computePID(1, 2);
  EXPECT_NEAR(-4.05, newVel, 0.1);
}

/**
 *@brief Unit test to check if the returned gain
 *are the initialized gains
 *@param none
 *@return none
 */
TEST(PIDtest, getGainsTest) {
  mockgeneralPID mdb;

  // KP KD KI
  PID pid(3, 2, 4, 0.5);

  // checking if the gains are properly set by Setkp method
  EXPECT_EQ(3, pid.getKP());
  EXPECT_EQ(2, pid.getKD());
  EXPECT_EQ(4, pid.getKI());
}

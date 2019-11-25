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


#ifndef INCLUDE_MOCKGENERALPID_H_
#define INCLUDE_MOCKGENERALPID_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "generalPID.h"

/**
 * @brief mockgeneralPID class
 * class to initializes the mock method
 * that are yet to be tested using gmock
 */
class mockgeneralPID : public generalPID {
 public:
  /**
   * @brief computePID mock
   * @param float currVel
   * @param float spvel
   * @return none
   * initializes the computePID mock
   */
  MOCK_METHOD2(computePID, float(float,float));

  /**
   * @brief setKP mock
   * @param float kp
   * @return bool
   * initializes the setKP mock
   */
  MOCK_METHOD1(setKP, bool(float kp));

  /**
   * @brief setKI mock
   * @param float kI
   * @return bool
   * initializes the setKI mock
   */
  MOCK_METHOD1(setKI, bool(float ki));

  /**
   * @brief setKD mock
   * @param float kD
   * @return bool
   * initializes the setKD mock
   */
  MOCK_METHOD1(setKD, bool(float kd));
};

#endif /* INCLUDE_MOCKGENERALPID_H_ */

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





#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "generalPID.h"

/**
 * @brief GMockStatic Class
 * class to call functions of generalPID mock class
 */
class GmockStatic : public ::testing::Test {
 public:
  /**
   * @brief set_Kp function
   * @param instance of std::unique_ptr<generalPID>
   * @return none
   * initializes the object and
   * calls the setKP in the generalPID class
   */
  void set_KP(std::unique_ptr<generalPID> instance) {
    instance->setKP(3);
  }

  /**
   * @brief set_KD function
   * @param instance of std::unique_ptr<generalPID>
   * @return none
   * initializes the object and
   * calls the setKD in the generalPID class
   */
  void set_KD(std::unique_ptr<generalPID> instance) {
    instance->setKD(4);
  }

  /**
   * @brief set_KI function
   * @param instance of std::unique_ptr<generalPID>
   * @return none
   * initializes the object and
   * calls the setKI in the generalPID class
   */
  void set_KI(std::unique_ptr<generalPID> instance) {
    instance->setKI(0.2);
  }

  /**
   * @brief compute_PID function
   * @param instance of std::unique_ptr<generalPID>
   * @return none
   * initializes the object and
   * calls the computePID in the generalPID class
   */
  void compute_PID(std::unique_ptr<generalPID> instance) {
    instance->computePID(1, 2);
  }
};

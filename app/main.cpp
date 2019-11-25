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

/**
* @file main.cpp
* @author Jagadesh Nischal Nagireddi
* @date 25 November 2019
* @brief This is a the main class for the PID implementation project
* PID controller implementation for mobile robot.
*/

#include <iostream>
#include "PID.h"
#include "parameters.h"

/**
* @brief Main compute function for PID Controller
*/
#include <iostream>
#include "PID.h"
#include "generalPID.h"
#include "memory"

/**
 * @brief      main function
 * @param      none
 * @param      none
 * @return     int of value zero
 */
int main() {
  // Instantiate a object
  PID pid;
  // point the virtual class object to the PID class
  std::unique_ptr<generalPID> gpid = std::make_unique<PID>();

  // variables to hold user input
  float fVal, iVal;

  // input Target setpoint velocity
  std::cout << "Enter the Target setpoint velocity" << std::endl;
  std::cin >> fVal;

  // input actual velocity
  std::cout << "Enter the actual velocity" << std::endl;
  std::cin >> iVal;

  // set the PID gains
  gpid->setKD(1);
  gpid->setKI(0.1);
  gpid->setKP(2);

  // compute the control input
  float inc = pid.computePID(fVal, iVal);

  // output the input to the screen
  std::cout << "Input: " << inc << std::endl;

  return 0;
}

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
int main() {
    double change;
    PID mobileRobot;
    Parameter comp;

    // Main compute function
    change = comp.compute(1.0, 1.0, mobileRobot);
    std::cout << "Computed velocity is: " << change << std::endl;
    return 0;
}

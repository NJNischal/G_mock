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
#include "PID.h"
#include "generalPID.h"

PID::PID() {
  kP = 2;
  kD = 1;
  kI = 0.1;
  dT = 0.5;
  prevErr = 0;
  iterr = 0;
}

PID::PID(float kp, float kd, float ki, float dt) {
  kP = kp;
  kD = kd;
  kI = ki;
  dT = dt;
  prevErr = 0;
  iterr = 0;
}


PID::~PID() {
}

float PID::getKD() {
  return kD;
}

float PID::getKI() {
  return kI;
}

float PID::getKP() {
  return kP;
}

float PID::computePID(float spVel, float currVel) {
  // calculate error
    float error = spVel - currVel;
    // calculate iterr for integral
    iterr += error * dT;
    // calculate final output
    // Proportional term = kp* error
    // integral term  = kI * iterr
    // derivative term = kD * ((error - prevErr) / dT)
    float output = kP * error + kI * iterr + kD * ((error - prevErr) / dT);
    prevErr = error;
    return output;
}

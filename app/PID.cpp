/**
 * @file main.cpp
 * @brief This is a the main class for the PID implementation project
 *        PID controller implementation for mobile robot.
 *
 * BSD 3-Clause License
 *
 * @copyright Copyright (c) Chinmay Joshi
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * @author Chinmay Joshi
 *
 * @date 11-24-2019
 */

#include <../include/PID.h>
PID::PID() {}
PID::~PID() {}

/**
* @breif This function sets value of kp
* @params _Kp New value for kp
*/
void PID::setKp(double Kp) {
    kp = Kp;
}

/**
* @breif Function to access value of kp
* @return value of kp
*/
double PID::getKp() {
    return kp;
}

/**
* @breif This function sets value of ki
* @params _Ki New value for ki
*/
void PID::setKi(double Ki) {
    ki = Ki;
}

/**
* @breif Function to access value of ki
* @return value of ki
*/
double PID::getKi() {
    return ki;
}

/**
* @breif This function sets value of kd
* @params _Kd New value for kd
*/
void PID::setKd(double Kd) {
    kd = Kd;
}

/**
* @breif Function to access value of kd
* @return value of kd
*/
double PID::getKd() {
    return kd;
}

/**
* @breif This function sets value of sampleTime
* @params _SampleTime New value for sampleTime
*/
void PID::setSampleTime(double SampleTime) {
    sampleTime = SampleTime;
}

/**
* @breif Function to access value of sampleTime
* @return value of sampleTime
*/
double PID::getSampleTime() {
    return sampleTime;
}

/**
* @breif This function sets value of outMax
* @params _OutMax New value for outMax
*/
void PID::setOutMax(double OutMax) {
    outMax = OutMax;
}

/**
* @breif Function to access value of outMax
* @return value of outMax
*/
double PID::getOutMax() {
    return outMax;
}

/**
* @breif This function sets value of outMin
* @params _OutMin New value for outMin
*/
void PID::setOutMin(double OutMin) {
    outMin = OutMin;
}

/**
* @breif Function to access value of outMin
* @return value of outMin
*/
double PID::getOutMin() {
    return outMin;
}

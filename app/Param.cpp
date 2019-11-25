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
#include <../include/Param.h>
#include <../include/PID.h>

PID pid;

/**
* @brief This is the function which computes the pid calculations
* @params actualVelocity Recent velocity reading
* @params targetSetpoint Expected velocity reading
* @params address of the PID class
* @return change needed to be applied.
*/
double Parameter::compute(double actualVelocity, double targetSetpoint,
                                   PID& pid) {
    pid.setKd(1);
    pid.setKp(1);
    pid.setKi(1);
    pid.setSampleTime(13);
    pid.setOutMax(20);
    pid.setOutMin(0);
    std::chrono::system_clock::time_point start
                                 = std::chrono::system_clock::now();
    double lastInput = pid.lastInput;
    double iPart = pid.iPart;
    double kd = pid.getKd();
    double kp = pid.getKp();
    double ki = pid.getKi();
    double sampleTime =  pid.getSampleTime();
    double outMax =  pid.getOutMax();
    double outMin = pid.getOutMin();
    std::chrono::system_clock::time_point end =
                                    std::chrono::system_clock::now();
    unsigned timeChange = std::chrono::duration_cast
                            <std::chrono::milliseconds>(start - end).count();
    if ( timeChange >= sampleTime ) {
        // the current velocity
        double input = actualVelocity;
        // the error for the velocity
        double error = targetSetpoint - input;
        // to update error
        double dPart = (input - lastInput);
        iPart+= (ki * error);
        // if value is more than max or lesser than min
        if ( iPart > outMax )
            iPart = outMax;
        else if ( iPart < outMin )
            iPart = outMin;

        double output;
        // derievative term
        output = kp * error;
        // output integrated over time
        output += iPart - kd * dPart;
        // define the max and min pid velocity
        if ( output > outMax )
            output = outMax;
        else if (output < outMin)
            output = outMin;
        // update input
        lastInput = input;
        start = end;
        return output;
    } else {
        return 0;
      }
}

/**
 * @file PID.h
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
 * @author Jagadesh NischalNagireddi,Toyas Dhake,ShivamAkhauri,ChinmayJoshi
 *
 * @date 11-24-2019
 */

#ifndef INCLUDE_PID_H_
#define INCLUDE_PID_H_
#include <ctime>
#include <chrono>

class PID {
 public:
  double kp = 0;
  double ki = 0;
  double kd = 0;
  double sampleTime = 0;
  double outMax = 0;
  double outMin = 0;
  double lastInput = 0;
  double iPart = 0;
  std::chrono::system_clock::time_point start;
  PID();
  virtual ~PID();
  void setKp(double Kp);
  double getKp();
  void setKi(double Ki);
  double getKi();
  virtual void setKd(double Kd);
  virtual double getKd();
  void setSampleTime(double SampleTime);
  double getSampleTime();
  void setOutMax(double OutMax);
  double getOutMax();
  void setOutMin(double OutMin);
  double getOutMin();
};

#endif  // INCLUDE_PID_H_

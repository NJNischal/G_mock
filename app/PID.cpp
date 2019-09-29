/**
* @file PID.cpp
* @author Jagadesh Nischal Nagireddi (Driver), Toyas Dhake (Navigator)
* @date 26 Spetember 2019
* @copyright 2019 Jagadesh Nischal Nagireddi, Toyas Dhake
* @brief This is a class for a PID controller
*/

#include <PID.h>

/**
* @brief This is the function which computes the pid calculations
* @params ADD PARAMETERS HERE
* @return Corrected velocity
*/

double PID::compute(double actualVelocity, double targetSetpoint) {
  //STUB here
    double velocity=1.0;
    return velocity;
  }

PID::PID(double _Kp, double _Kd, double _Ki, unsigned long _SampleTime,
               double _outMax, double _outMin) {
    // TODO Auto-generated constructor stub
    kp = _Kp;
    kd = _Kd;
    ki = _Ki;
    sampleTime = _SampleTime;
    outMax = _outMax;
    outMin = _outMin;
    start = std::chrono::system_clock::now();   
}

void PID::setKp(double _Kp) {
    kp = _Kp;
}

double PID::getKp() {
    return kp;
}

void PID::setKi(double _Ki) {
    ki = _Ki;
}

double PID::getKi() {
    return ki;
}

void PID::setKd(double _Kd) {
    kd = _Kd;
}

double PID::getKd() {
    return kd;
}

void PID::setSampleTime(double _SampleTime) {
    sampleTime = _SampleTime;
}

double PID::getSampleTime() {
    return sampleTime;
}

void PID::setOutMax(double _OutMax) {
    outMax =_OutMax;
}

double PID::getOutMax() {
    return outMax;
}

void PID::setOutMin(double _OutMin) {
    outMin =_OutMin;
}

double PID::getOutMin() {
    return outMin;
}


/**
* @file PID.h
* @author Jagadesh Nischal Nagireddi (Driver), Toyas Dhake (Navigator)
* @date 26 Spetember 2019
* @copyright 2019 Jagadesh Nischal Nagireddi, Toyas Dhake
* @brief This is a class for a PID controller
*/

#ifndef INCLUDE_PID_H_
#define INCLUDE_PID_H_
#include <ctime>
#include <chrono>

class PID {
 private:
    double kp;
    double ki;
    double kd;
    double sampleTime;
    double outMax;
    double outMin;
    double lastInput;
    double iPart;
    std::chrono::system_clock::time_point start;

 public:
    // compute method here
    double compute(double actualVelocity, double targetSetpoint);
    PID(double _Kp, double _Kd, double _Ki, unsigned _SampleTime,
               double _outMax, double _outMin);
    void setKp(double _Kp);
    double getKp();
    void setKi(double _Ki);
    double getKi();
    void setKd(double _Kd);
    double getKd();
    void setSampleTime(double _SampleTime);
    double getSampleTime();
    void setOutMax(double _OutMax);
    double getOutMax();
    void setOutMin(double _OutMin);
    double getOutMin();
};

#endif  // INCLUDE_PID_H_

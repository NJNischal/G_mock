#ifndef INCLUDE_PARAM_H_
#define INCLUDE_PARAM_H_
#include <../include/PID.h>
#include <ctime>
#include <chrono>

class Parameter {
 public:
    double compute(double actualVelocity, double targetSetpoint, PID &);
};

#endif  // INCLUDE_PARAM_H_

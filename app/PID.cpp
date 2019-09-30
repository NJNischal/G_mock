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
* @params actualVelocity Recent velocity reading
* @params targetSetpoint Expected velocity reading
* @return change needed to be applied.
*/

double PID::compute(double actualVelocity, double targetSetpoint) {
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

/**
* @brief This is constructor for PID class setting soem required parameters
* @params _Kp Multipling factor for proportional
* @params _Kd Multipling factor for derivative
* @params _Ki Multipling factor for integral
* @params _SmapleTime The rate at which PID should be computed
* @params _outMax Maximum allowed output value
* @params _outMin Minimum allowed output value
*/
PID::PID(double _Kp, double _Kd, double _Ki, unsigned _SampleTime,
               double _outMax, double _outMin) {
    kp = _Kp;
    kd = _Kd;
    ki = _Ki;
    sampleTime = _SampleTime;
    outMax = _outMax;
    outMin = _outMin;
    start = std::chrono::system_clock::now();
}

/**
* @breif This function sets value of kp
* @params _Kp New value for kp
*/
void PID::setKp(double _Kp) {
    kp = _Kp;
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
void PID::setKi(double _Ki) {
    ki = _Ki;
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
void PID::setKd(double _Kd) {
    kd = _Kd;
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
void PID::setSampleTime(double _SampleTime) {
    sampleTime = _SampleTime;
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
void PID::setOutMax(double _OutMax) {
    outMax = _OutMax;
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
void PID::setOutMin(double _OutMin) {
    outMin = _OutMin;
}

/**
* @breif Function to access value of outMin
* @return value of outMin
*/
double PID::getOutMin() {
    return outMin;
}

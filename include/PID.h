
/**
* @file PID.h
* @author Jagadesh Nischal Nagireddi (Driver), Toyas Dhake (Navigator)
* @date 26 Spetember 2019
* @copyright 2019 Jagadesh Nischal Nagireddi, Toyas Dhake
* @brief This is a class for a PID controller
*/

#ifndef INCLUDE_PID_H_
#define INCLUDE_PID_H_

class PID {
 private:
  double Kp;
  double Ki;
  double Kd;
  double targetSetpoint;
  double actualVelocity;
  //add a few more attributes

 public:
  // compute method here
  double PID::compute(){
  //STUB here
    double velocity=1.0;
    return velocity;
  }
  PID();
  virtual ~PID();
};

#endif /* INCLUDE_PID_H_ */

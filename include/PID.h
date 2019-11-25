

#ifndef INCLUDE_PID_H_
#define INCLUDE_PID_H_

#include <iostream>
#include "generalPID.h"

/**
 * @brief generalPID Class
 * derived class of the base generalPID class
 * implements the computePID
 */
class PID : public generalPID {
 public:
  /**
   * @brief default constructor PID class
   * @param none
   * @return none
   * Initializes all gain values of
   * the base class to zero
   */
  PID();

  /**
   * @brief constructor PID class
   * @param kp of type float
   * @param kd of type float
   * @param ki of type float
   * @param dt of type float
   * @return none
   * Initializes gains and dt to the values passed
   * to the constructor
   */
  PID(float kp, float kd, float ki, float dt);

  /**
   * @brief Destructor for PID class
   * @param none
   * @return none
   * destroys class objects when
   * it goes out of scope
   */
  ~PID();

  /**
   * @brief getKP function
   * @param none
   * @return kp gain of type float
   * returns the kp gain upon request
   */
  float getKP();

  /**
   * @brief getKD function
   * @param none
   * @return kd gain of type float
   * returns the kd gain upon request
   */
  float getKD();

  /**
   * @brief getKI function
   * @param none
   * @return ki gain of type float
   * returns the ki gain upon request
   */
  float getKI();

  /**
   * @brief computePID function
   * @param spVel of type float
   * @param currVel of type float
   * @return input of type float
   */
  float computePID(float spVel, float currVel);

};

#endif /* INCLUDE_PID_H_ */

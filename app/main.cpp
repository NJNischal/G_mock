/**
* @file main.cpp
* @author Jagadesh Nischal Nagireddi (Driver), Toyas Dhake (Navigator)
* @date 26 Spetember 2019
* @copyright 2019 Jagadesh Nischal Nagireddi, Toyas Dhake
* @brief This is a the main class for the PID implementation project
*/


#include <iostream>
#include "PID.cpp"

int main()
{
  PID mobileRobot(1,1,1, 13, 20, 0);
  mobileRobot.compute(0,0);
//  mobileRobot.method(params);
  return 0;
}

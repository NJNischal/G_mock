### PID Controller implementation from ACME Robotics.
[![Build Status](https://travis-ci.org/Chinj17/AcmeRoboticsPIDcontroller_week5Assignment.svg?branch=GMock_Extra_Credit)](https://travis-ci.org/Chinj17/AcmeRoboticsPIDcontroller_week5Assignment)
[![Coverage Status](https://coveralls.io/repos/github/Chinj17/AcmeRoboticsPIDcontroller_week5Assignment/badge.svg?branch=GMock_Extra_Credit)](https://coveralls.io/github/Chinj17/AcmeRoboticsPIDcontroller_week5Assignment?branch=master)

Welcome to Acme Robotics. We provide control solutions for your robots. Based on type pf requirement we give PID controller, LQR contorller, etc. We also provide filtering algorithms for you sensor fusion tasks.

There are 2 types of systems stable and unstable. Stable systems do not require correction for their actions as they are inherantly stable. But unstable system requires correction. One of the way is PID Controller. PID controller stands for proportional integral derivative. It performs those 3 tasks. Proportional allows the system to take greater corrections steps than predefined ones. Derivative controller the slope of correction. It basicaly dampens the oscialtions created by proportional and lastly integral removes the constant error induced by derivation as derivation of a constant avlue is zero.
### Prelude

changeCalculatedByPID = Kp*(expectedValue-currentValue)+Kd*(previousValue-CurrentValue)+(previousIntegral+Ki*currentError)

The given equation consist fo 3 parts, Proportional, Derivative and integration
### Implementation Details

The implementation inputs variables kp, kd and ki. It defines a compute function which calculates the corrected velocity, given a set-point. The implementation is done in C++ and Google style guides have been followed. We initially stub the compute function to verify the pipeline sanity and work across teams to have the full implementation

### Compiling and Running

```

Clone repository

cd <path to directory>

cd repository

mkdir build

cd build

cmake ..

make

cd ..

cppcheck --enable=all --std=c++11 -I include/ --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" )

To run program: ./app/shell-app

To test program: ./test/cpp-test

```
### Group Discussion overview

We reached a conclusion of creating separate git branches for part b for team A and team B like we did for part A. We discussed on the UML diagrams, possible test cases like Divide by zero error, which can occur during compute function. We agreed on the unit test design architecture for our software and that the merge to the master would be done upon proper review by the Navigator. The following diagram represents an overview of the overall software architecture for testing.
![](GroupDiscussion.png)
### Contributors

Part A \
-Jagadesh Nagireddi (Driver) \
-Toyas Dhake (Navigator) \
Part B \
-Shivam Akhauri (Navigator) \
-Chinmay Joshi (Driver)

# GMock
The class being mocked is PID class. I have modified the class to be in accordance with the requirements of the assignment. Class "Parameter" is tested, which consumes the PID class. The test checks if the mocked class function is called by the class.
To clone this branch:
```
git clone -b GMock_Extra_Credit_Chinj17 --single-branch https://github.com/Chinj17/AcmeRoboticsPIDcontroller_week5Assignment.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
./test/cpp-test
```

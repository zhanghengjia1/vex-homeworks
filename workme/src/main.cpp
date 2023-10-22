/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       zhj20                                                     */
/*    Created:      2023/10/22 09:53:53                                       */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here


int main() {

    Brain.Screen.printAt( 10, 50, "Hello V5" );
  vex::controller Controller1 = controller(primary);
  vex::motor LeftMotor1 = motor(16);
  vex::motor LeftMotor2 = motor(17);
  vex::motor RightMotor1 = motor(18);
  vex::motor RightMotor2 = motor(19);
  int deadband = 5;
  double x=0.5;
  while (true) {
    // Get the velocity percentage of the left motor. (Axis3)
    int forwordSpeed = Controller1.Axis3.position();
    // Get the velocity percentage of the right motor. (Axis2)
    int turnSpeed = Controller1.Axis4.position();
    double v1=forwordSpeed+turnSpeed;
    double v2=forwordSpeed-turnSpeed;
    LeftMotor1.spin(vex::directionType::rev,v1,vex::velocityUnits::pct);
    LeftMotor2.spin(vex::directionType::rev,v1,vex::velocityUnits::pct);
    RightMotor1.spin(vex::directionType::fwd,v2,vex::velocityUnits::pct);
    RightMotor2.spin(vex::directionType::fwd,v2,vex::velocityUnits::pct);
    

   
    return 0;
}

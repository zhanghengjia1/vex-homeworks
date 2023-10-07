/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       zhj20                                                     */
/*    Created:      2023/10/7 13:30:46                                        */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here


int main() {

    vex::motor motor1(0);
    vex::motor motor2(9);
    motor1.spin(vex::directionType::fwd,19.4,vex::velocityUnits::rpm);
    motor2.spin(vex::directionType::rev,58.06,vex::velocityUnits::rpm);
    this_thread::sleep_for(7600);
    motor1.spin(vex::directionType::fwd,58.06,vex::velocityUnits::rpm);
    motor2.spin(vex::directionType::rev,19.4,vex::velocityUnits::rpm);
    this_thread::sleep_for(15800);
    motor1.spin(vex::directionType::fwd,19.4,vex::velocityUnits::rpm);
    motor2.spin(vex::directionType::rev,58.06,vex::velocityUnits::rpm);
    this_thread::sleep_for(7600);
    motor1.stop(vex::brakeType::brake);
    motor2.stop(vex::brakeType::brake);
    return 0;

    
}

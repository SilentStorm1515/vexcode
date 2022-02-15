#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor L_Down = motor(PORT20, ratio18_1, true);
motor L_Up = motor(PORT19, ratio18_1, true);
motor R_Down = motor(PORT12, ratio18_1, true);
motor R_Up = motor(PORT11, ratio18_1, true);
motor L_ArmSpin = motor(PORT1, ratio36_1, true);
motor R_ArmSpin = motor(PORT10, ratio36_1, true);
motor ClawSpin = motor(PORT15, ratio36_1, true);
motor GroupTestMotorA = motor(PORT4, ratio18_1, false);
motor GroupTestMotorB = motor(PORT5, ratio18_1, false);
motor_group GroupTest = motor_group(GroupTestMotorA, GroupTestMotorB);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}
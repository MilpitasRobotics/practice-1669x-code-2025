#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);
motor LeftFront1 = motor(PORT4, ratio6_1, true);
motor LeftFront2 = motor(PORT5, ratio6_1, true);
motor LeftFront3 = motor(PORT6, ratio6_1, true);
motor RightFront1 = motor(PORT7, ratio6_1, false);
motor RightFront2 = motor(PORT8, ratio6_1, false);
motor RightFront3 = motor(PORT9, ratio6_1, false);
//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) {
  // nothing to initialize
}
#include "vex.h"
#include "opControl.h"

using namespace vex;

void joyStickControl(){
  front_L.spin(fwd, Controller1.Axis3.position(), pct);
  front_R.spin(fwd, Controller1.Axis2.position(), pct);
  back_L.spin(fwd, Controller1.Axis3.position(), pct);
  back_R.spin(fwd, Controller1.Axis2.position(), pct);
}

void intakeControl(){
  if(Controller1.ButtonR1.pressing()){
    intake_L.spin(fwd, 100, pct);
    intake_R.spin(fwd, 100, pct);
  }
  else if(Controller1.ButtonR2.pressing()){
    intake_L.spin(reverse, 100, pct);
    intake_R.spin(reverse, 100, pct);
  }
  else{
    intake_L.stop(brake);
    intake_R.stop(brake);
  }
} 



#include "vex.h"
#include "autonFunctions.h"

using namespace vex;

void moveForwardCrawl( int speed ){
  back_L.spin(fwd, speed, pct);
  back_R.spin(fwd, speed, pct);
  front_L.spin(fwd, speed, pct);
  front_R.spin(fwd, speed, pct);
}

void moveForwardWalk( int speed, double distanceIn){
double wheeelDiameter = 3.25;
double circumferance = 3.14 * wheeelDiameter; 
double degreesToRotate = ((360 * distanceIn) / circumferance);

front_L.rotateFor(fwd, degreesToRotate, deg, speed, velocityUnits::pct);
front_R.rotateFor(fwd, degreesToRotate, deg, speed, velocityUnits::pct);
back_L.rotateFor(fwd, degreesToRotate, deg, speed, velocityUnits::pct);
back_R.rotateFor(fwd, degreesToRotate, deg, speed, velocityUnits::pct);

}

void turnRightCrawl( int speed){
  front_L.spin(fwd, speed, pct);
  front_R.spin(fwd, -speed, pct);
  back_L.spin(fwd, speed, pct);
  back_R.spin(fwd, -speed, pct);
}

void turnLeftCrawl( int speed){
  front_L.spin(fwd, -speed, pct);
  front_R.spin(fwd, speed, pct);
  back_L.spin(fwd, -speed, pct);
  back_R.spin(fwd, speed, pct);
}

int ticks = 1050; 

void turnRightWalk(int speed, double degrees){
double ticksToTurn = (degrees * ticks) / 360; 

front_L.rotateFor(fwd, ticksToTurn, deg, speed, velocityUnits::pct);
front_R.rotateFor(fwd, ticksToTurn, deg, -speed, velocityUnits::pct);
back_L.rotateFor(fwd, ticksToTurn, deg, speed, velocityUnits::pct);
back_R.rotateFor(fwd, ticksToTurn, deg, -speed, velocityUnits::pct);
}

void turnLeftWalk(int speed, double degrees){
double ticksToTurn = (degrees * ticks) / 360; 

front_L.rotateFor(fwd, ticksToTurn, deg, -speed, velocityUnits::pct);
front_R.rotateFor(fwd, ticksToTurn, deg, speed, velocityUnits::pct);
back_L.rotateFor(fwd, ticksToTurn, deg, -speed, velocityUnits::pct);
back_R.rotateFor(fwd, ticksToTurn, deg, speed, velocityUnits::pct);
}

int debugging(){
double circumferance = 3.14 * 3.25; 
  while(true){
    printf("Distance Travaled by front left %f\n", (front_L.rotation(deg) * circumferance) / 360 );
    printf("Distance Travaled by front right %f\n", (front_R.rotation(deg) * circumferance) / 360 );
    printf("Distance Travaled by back left %f\n", (back_L.rotation(deg) * circumferance) / 360 );
    printf("Distance Travaled by back right %f\n", (back_R.rotation(deg) * circumferance) / 360 );
  }
}



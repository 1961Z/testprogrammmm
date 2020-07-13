using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor front_L;
extern motor front_R;
extern motor back_L;
extern motor back_R;
extern controller Controller1;
extern motor intake_L;
extern motor intake_R;
extern line LineTrackerA;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );
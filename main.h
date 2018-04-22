#ifndef MAIN_H
#define MAIN


#include <Stepper.h>
#include <Servo.h>


/* ultrasonic sensor */
#define trig_pin  11
#define echo_pin  10
#define filer_size  200

/* microswitch pins */
#define pos_x_switch	31	
#define neg_x_switch  32
#define y_switch 	30


/* servo pin */
#define servo_power	8


/* x_stepper pins */
#define xStep   5
#define xDir   4


/* y_stepper pins */
#define yStep   7
#define yDir   6


/* z_stepper pins */
#define zStep   3
#define zDir   2


/* Stepper definitions */
#define steps_per_rev   200
#define SpeedX  2000
#define SpeedY  2000
#define SpeedZ  2000
#define total_y_steps 10


/* Claw ISR definitions */
#define target_dist  17
#define drop_claw 600;




#endif 


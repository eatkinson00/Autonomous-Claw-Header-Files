#ifndef MAIN_H
#define MAIN


#include <Stepper.h>
#include <Servo.h>


/* ultrasonic sensor pin */
#define trig_pin  11
#define echo_pin  10


/* microswitch pins */
#define x_switch	31	
#define y_switch 	30


/* servo pin */
#define servo_power	8


/* x_stepper pins */
#define xStep   7
#define xDir   6


/* y_stepper pins */
#define yStep   5
#define yDir   4


/* z_stepper pins */
#define zStep   3
#define zDir   2


/* Stepper definitions */
#define steps_per_rev   200
#define stepper_rpm 60
#define stepper_rpm_cal 60
#define stepper_rpm_z 90
#define x_sweep 1200
#define y_step  100
#define total_y_steps 8


/* Claw ISR definitions */
#define target_dist  9
#define extend_claw  75
#define recoil_claw -75


/* claw_open_close definitions */
#define open_angle  120
#define close_angle 0



#endif 


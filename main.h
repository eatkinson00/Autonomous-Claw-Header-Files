#ifndef MAIN_H
#define MAIN


#include <Stepper.h>
#include <Servo.h>


/* ultrasonic sensor pin */
#define trig_pin  11
#define echo_pin  10


/* microswitch pins */
#define x_switch	45	
#define y_switch 	46


/* servo pin */
#define servo_power	4


/* x_stepper pins */
#define xPin1   22
#define xPin2   24
#define xPin3   26


/* y_stepper pins */
#define yPin1   30
#define yPin2   32
#define yPin3   34


/* z_stepper pins */
#define zPin1   38
#define zPin2   40
#define zPin3   42


/* Stepper definitions */
#define steps_per_rev   200
#define stepper_rpm 60
#define stepper_rpm_cal 90
#define stepper_rpm_z 90
#define pos_x_sweep 100
#define neg_x_sweep -100
#define pos_y_step  25
#define neg_y_step  -25
#define total_y_steps 8


/* Claw ISR definitions */
#define grab_value  9
#define extend_claw  75
#define recoil_claw -75


/* claw_open_close definitions */
#define open_angle  180
#define close_angle 0



#endif 


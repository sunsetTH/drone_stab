#include "drone_motor.h"

static drone_cmd_motor 	d_motor_cmd;
static drone_cmd_motor	d_prev_motor_cmd;	
static drone_quad_motor	d_quad_motor;

/*
 * init_motor
 * 
 * initialize  motor_current speed to stop value
 * 
 */
int init_motor(drone_motor *motor, int clkw)
{
	motor->motor_max 		= MOTOR_MAX;
	motor->motor_min 		= MOTOR_MIN;
	motor->motor_stop 		= MOTOR_STOP;
	motor->motor_current	= MOTOR_STOP;
	motor->motor_alert		= 0;
	
	if( clkw > 1)
		motor->motor_clockwise 	= 1;
	else if( clkw < 0 )
		motor->motor_clockwise 	= 0;
	else
		motor->motor_clockwise	= clkw;
		
	return 1;
}

/*
 * init_quad_motor 
 * 
 * front_left and back_right motors work clockwise
 * front_right and back_left both work anti-clockwise
 * 
 */
int init_quad_motor()
{
	init_motor( &d_quad_motor.motor_front_l, 1 );
	init_motor( &d_quad_motor.motor_front_r, 0 );
	init_motor( &d_quad_motor.motor_back_l, 0 );
	init_motor( &d_quad_motor.motor_back_r, 1 );
	return 1;
}


int set_cmd_quad_motor(int c_up, int c_rotx, int c_roty, int c_rotz)
{
	
	return 1;
}


void interpret_cmd()
{
	
}


void normalize_cmd()
{
	
}

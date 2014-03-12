#ifndef DRONE_MOTOR_H
#define DRONE_MOTOR_H

#include <stdio.h>

#define MOTOR_MAX 	170
#define MOTOR_MIN 	64
#define MOTOR_STOP 	63

// Unitary motor description
typedef struct {
	int 	motor_max;
	int 	motor_min;
	int		motor_stop;
	int 	motor_current;
	int 	motor_clockwise;
	int		motor_alert;
} drone_motor;

// Drone motor based description
typedef struct {
	drone_motor motor_front_l;
	drone_motor motor_front_r;
	drone_motor motor_back_l;
	drone_motor motor_back_r;
} drone_quad_motor;

// Unitary motor command description
typedef struct {
	int		cmd_up;
	int		cmd_rot_x;
	int		cmd_rot_y;
	int		cmd_rot_z;
	int		stop;
} drone_cmd_motor;


int init_motor(drone_motor *motor, int clkw);
int init_quad_motor();
int set_cmd_quad_motor(int c_up, int c_rotx, int c_roty, int c_rotz);
void interpret_cmd();
void normalize_cmd();

#endif /* DRONE_MOTOR_H */

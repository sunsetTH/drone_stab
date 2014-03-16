#ifndef DRONE_MOTOR_H
#define DRONE_MOTOR_H

#include <stdio.h>

#define MOTOR_MAX	170
#define MOTOR_MIN	64
#define MOTOR_STOP	63

// Unitary motor description
typedef struct {
	int 	m_max;
	int 	m_min;
	int		m_stop;
	int 	m_current;
	int		m_previous;
	int 	m_clockwise;
	int		m_alert;
} drone_motor;

// Drone motor based description
typedef struct {
	drone_motor m_front_l;
	drone_motor m_front_r;
	drone_motor m_back_l;
	drone_motor m_back_r;
} drone_quad_motor;

// Unitary motor command description
typedef struct {
	int		m_cmd_up;
	int		m_cmd_rot_x;
	int		m_cmd_rot_y;
	int		m_cmd_rot_z;
	int		m_cmd_stop;
} drone_cmd_motor;


int 	init_motor(drone_motor *motor, int clkw);
int		set_motor_pwm(drone_motor *motor, int pwm);
int		set_motor_stop(drone_motor *motor);
int 	init_quad_motor();
int 	set_cmd_quad_motor(int c_up, int c_rotx, int c_roty, int c_rotz, int c_stop);
void 	interpret_cmd();
void 	normalize_cmd();
int 	through_DC_cmd();

#endif /* DRONE_MOTOR_H */

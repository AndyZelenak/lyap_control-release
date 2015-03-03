#pragma once

#include "ros/ros.h"

// Header for 'plant_msg.msg'
#include "lyap_control/plant_msg.h"

// Header for controller_msg.msg
#include "lyap_control/controller_msg.h"

/////////////////////////////////////////////
// Variables -- Make changes here.
/////////////////////////////////////////////

static const int num_states=1;
static const int num_inputs=1;

double delta_t = 0.01; // control period in seconds

// Global so it can be passed from the callback fxn to main
static double u[num_inputs] = {0};


/////////////////////////////////////////////
// Functions
/////////////////////////////////////////////

void chatterCallback(const lyap_control::controller_msg& u_msg);

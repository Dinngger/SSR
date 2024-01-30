#ifndef PARAMETER_L1_B9_A0_C2_H
#define PARAMETER_L1_B9_A0_C2_H
#include "para_L1.h"

static int8_t matB_LUT0[L1_size]={1,-1,-1,-1,1,1,-1,0,-1,0,1,-1,1,0,-1,0,1,0,1,-1,-1,0,-1,0,0,1,0,0,-1,0,1,0,1,-1,0,-1,0,0,-1,-1,1,0,0,0,-1,-1,0,0,0,-1,-1,-1,1,1,1,1,1,1,-1,1,0,-1,-1,1,1,0,-1,0,-1,-1,-1,1,1,0,1,1,0,0,0,-1,0,0,1,-1,1,-1,0,1,0,0,0,-1,0,0,0,0,1,0,0,-1,1,1,1,0,1,1,-1,0,1,0,1,-1,1,-1,0,1,-1,-1,-1,-1,0,0,0,1,0,-1,-1,-1,0,0,0,0,0,1,-1,0,0,-1,0,-1,0,1,0,0,0,1,1,-1,-1,0,1,1,-1,0,1,0,1,-1,-1,1,-1,-1,-1,0,0,0,-1,-1,1,0,0,-1,1,1,1,0,-1,-1,1,-1,0,0,-1,0,-1,-1,0,-1,1,0,1,1,-1,-1,1,1,-1,-1,0,1,1,0,1,1,-1,0,0,-1,-1,1,1,0,-1,-1,-1,1,0,-1,-1,0,1,1,0,0,1,1,-1,-1,1,0,0,1,1,1,0,1,0,-1,-1,-1,1,0,1,1,-1,0,1,-1,0,0,1,0,1,0,1,0,0,-1,0,1,0,0,1,-1,1,-1,0,1,0,0,-1,0,1,-1,-1,-1,-1,1,1,0,-1,0,0,1,0,1,1,1,-1,0,0,-1,0,1,-1,-1,-1,0,-1,0,-1,1,0,-1,0,1,1,0,-1,-1,0,1,-1,0,1,0,0,-1,0,1,1,1,1,-1,0,-1,0,1,-1,1,0,1,-1,-1,-1,-1,0,-1,1,-1,-1,0,1,0,-1,-1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,0,0,-1,0,1,-1,1,-1,0,0,0,1,0,0,0,0,0,-1,0,1,1,1,1,1,1,-1,-1,-1,-1,-1,0,0,-1,-1,-1,0,-1,0,0,-1,1,-1,1,1,-1,0,0,1,0,0,1,1,-1,0,-1,1,0,-1,-1,0,-1,1,0,1,-1,0,0,1,0,1,1,-1,1,1,1,-1,0,0,-1,-1,1,1,-1,-1,1,0,-1,0,1,1,-1,0,0,0,1,1,0,-1,-1,0,-1,-1,0,-1,1,0,1,-1,0,0,1,1,1,-1,-1,1,-1,-1,0,1,-1,1,-1,0,-1,1,-1,1,1,0,-1,-1,0,-1,-1,-1,-1,1,1,-1,0,1,-1,1,-1,-1,-1,1,1,1,0,1,-1,0,-1,0,1,-1,0,-1,-1,1,-1,1,0,1,-1,1,1,-1,1,1,-1,1,1,-1,0,0,0,0,1,0,0,-1,-1,0,0,-1,0,1,-1,0,0,1,-1,1,-1,0,1,1,0,0,-1,0,0,-1,0,1,-1,0,0,-1,1,1,-1,0,0,1,-1,0,-1,1,0,-1,1,0,-1,1,1,-1,0,0,1,0,0,1,-1,0,0,0,-1,1,-1,0,-1,1,0,1,-1,1,-1,1,1,0,1,1,-1,1,1,1,-1,0,-1,-1,1,0,1,1,1,-1,-1,-1,-1,-1,0,0,1,1,-1,0,-1,0,1,-1,1,0,0,-1,-1,0,0,0,1,1,1,0,0,1,-1,1,1,0,0,0,1,-1,-1,1,-1,-1,0,-1,-1,0,0,1,0,0,1,1,0,1,-1,1,0,-1,1,0,-1,1,-1,1,1,1,0,0,0,-1,1,1,-1,1,-1,-1,0,0,-1,0,-1,0,1,0,-1,1,1,0,-1,1,0,0,1,1,1,0,1,-1,0,1,-1,0,1,-1,-1,1,0,-1,-1,-1,1,1,1,1,1,1,-1,1,1,-1,-1,1,-1,1,0,-1,-1,1,-1,0,-1,0,1,-1,-1,1,1,0,0,-1,1,0,0,0,-1,0,0,-1,-1,1,-1,-1,1,1,0,1,0,-1,-1,-1,0,-1,0,-1,0,0,0,1,-1,1,1,1,-1,1,1,-1,1,-1,1,-1,-1,1,0,0,1,-1,-1,1,-1,0,1,0,1,0,0,1,1,1,-1,-1,1,1,0,1,1,0,0,1,0,0,1,0,-1,0,0,0,0,1,0,0,-1,-1,0,1,-1,-1,0,1,1,-1,1,1,0,-1,-1,1,0,0,-1,-1,-1,1,-1,0,0,1,1,0,-1,0,-1,-1,0,1,0,0,1,0,0,-1,1,0,0,1,-1,1,1,-1,-1,-1,0,0,1,1,1,-1,1,-1,1,0,-1,-1,-1,1,-1,0,0,1,-1,-1,0,-1,1,-1,0,1,1,0,1,1,0,0,-1,1,-1,1,-1,0,1,0,-1,0,-1,-1,1,0,1,0,-1,-1,0,0,1,-1,-1,0,0,1,-1,-1,0,-1,-1,0,-1,-1,-1,1,-1,0,-1,0,0,-1,1,1,1,-1,1,-1,0,1,-1,1,0,0,-1,-1,-1,1,0,-1,1,1,-1,-1,-1,-1,-1,1,0,-1,0,1,0,0,1,0,1,-1,-1,1,0,0,1,1,0,-1,-1,1,1,1,0,-1,-1,-1,-1,1,-1,0,1,0,0,1,-1,-1,1,0,-1,1,-1,1,-1,0,1,-1,1,1,1,1,-1,0,1,0,1,1,1,-1,1,0,0,1,-1,-1,0,0,0,1,0,0,-1,-1,1,-1,0,0,1,0,-1,0,1,0,0,-1,1,1,0,-1,-1,0,-1,-1,-1,1,1,1,1,1,0,1,0,1,-1,1,0,0,0,-1,-1,-1,1,0,1,1,0,0,-1,0,-1,0,0,-1,-1,-1,0,0,1,1,1,1,-1,1,-1,-1,-1,1,1,0,-1,-1,0,0,-1,0,-1,-1,0,-1,1,0,-1,1,1,-1,0,-1,-1,0,1,1,0,-1,0,-1,1,1,-1,0,1,1,-1,0,0,-1,1,0,0,1,1,1,1,0,0,0,-1,-1,-1,0,0,-1,-1,1,0,-1,0,0,0,-1,0,1,-1,1,-1,-1,0,1,0,-1,1,1,-1,1,-1,1,1,0,0,1,1,0,-1,-1,1,0,0,1,-1,0,-1,-1,1,-1,0,-1,0,-1,1,-1,-1,-1,0,1,1,1,0,0,1,0,0,-1,1,0,1,-1,0,-1,0,0,-1,1,0,1,1,-1,-1,-1,-1,0,0,1,-1,-1,-1,1,1,0,1,-1,-1,0,0,0,0,-1,-1,-1,-1,1,0,-1,1,-1,1,0,0,-1,1,0,1,1,-1,-1,-1,-1,-1,0,-1,0,1,-1,-1,-1,-1,-1,0,-1,-1,-1,0,-1,0,1,0,-1,0,0,1,-1,1,0,1,1,1,-1,0,-1,0,1,0,1,-1,0,0,1,-1,-1,0,0,1,-1,0,1,0,0,-1,0,-1,1,1,1,0,0,1,-1,1,0,0,1,1,1,-1,1,-1,-1,-1,-1,-1,1,-1,-1,0,0,-1,-1,1,0,-1,1,0,0,1,0,-1,-1,1,0,-1,0,-1,1,1,0,-1,1,-1,-1,-1,-1,0,0,0,1,-1,-1,1,1,0,1,1,1,0,0,0,1,0,1,-1,1,0,1,0,-1,-1,0,-1,-1,-1,0,1,1,-1,0,0,0,1,-1,0,0,-1,1,0,1,0,-1,-1,-1,0,-1,1,0,0,-1,-1,0,0,1,-1,0,0,-1,0,1,-1,-1,0,0,1,0,1,-1,0,-1,0,1,1,0,1,1,0,0,0,-1,0,0,0,1,-1,0,-1,0,1,-1,1,-1,0,-1,1,0,-1,0,1,1,-1,-1,0,0,1,1,1,1,-1,1,-1,0,-1,-1,1,1,-1,1,-1,0,1,1,0,0,1,1,0,0,-1,-1,0,-1,0,1,0,1,-1,1,-1,-1,1,0,-1,-1,-1,0,1,1,0,1,0,1,-1,0,-1,-1,1,-1,0,1,-1,-1,0,0,-1,0,1,1,-1,-1,-1,0,-1,-1,0,1,-1,1,0,1,0,-1,0,1,1,1,-1,-1,1,0,0,-1,-1,-1,-1,-1,-1,1,1,-1,1,-1,0,1,-1,-1,0,-1,0,1,-1,1,-1,-1,0,-1,-1,0,-1,1,0,0,1,0,0,0,-1,-1,1,0,-1,1,0,0,0,-1,-1,0,-1,0,1,0,-1,-1,-1,0,0,-1,0,1,-1,1,0,0,-1,1,-1,0,0,0,-1,0,0,1,-1,0,1,0,-1,1,1,1,0,1,0,1,0,0,1,-1,1,1,-1,1,0,0,-1,0,0,0,-1,1,-1,0,0,1,-1,1,0,0,-1,0,1,-1,0,-1,-1,0,1,0,1,-1,0,-1,-1,-1,1,1,-1,-1,1,0,1,0,-1,1,1,0,1,-1,0,1,-1,1,0,1,1,1,0,-1,0,0,0,1,0,0,-1,-1,-1,-1,-1,0,0,0,0,1,1,0,-1,1,-1,0,1,-1,-1,0,1,1,0,-1,-1,-1,1,-1,0,-1,0,-1,0,1,1,1,0,1,1,-1,-1,-1,-1,-1,-1,-1,1,0,-1,0,-1,1,1,-1,0,0,1,0,-1,0,1,1,-1,-1,0,1,1,0,0,1,-1,-1,1,-1,-1,0,-1,0,1,0,1,-1,0,-1,1,-1,0,1,0,0,0,0,1,0,-1,0,-1,0,0,0,0,-1,0,0,0,-1,1,0,-1,1,-1,0,0,-1,1,0,-1,-1,1,0,0,0,0,-1,-1,1,1,0,0,0,1,1,0,-1,-1,-1,-1,-1,0,-1,1,0,-1,-1,0,0,-1,1,0,1,-1,0,0,-1,-1,-1,-1,1,-1,1,0,-1,0,0,0,1,0,-1,0,1,1,0,-1,1,0,0,1,1,-1,1,-1,0,0,0,0,-1,-1,-1,-1,-1,1,0,0,1,0,0,0,-1,1,0,-1,-1,1,1,0,-1,-1,0,-1,0,-1,0,-1,1,0,0,1,-1,1,-1,1,-1,1,0,0,1,1,-1,0,-1,-1,-1,0,0,-1,1,-1,-1,-1,-1,0,-1,0,1,-1,1,1,1,0,0,1,0,-1,0,-1,0,-1,1,-1,0,0,-1,-1,-1,0,0,-1,1,1,0,1,0,-1,1,0,-1,-1,-1,1,0,0,0,1,0,0,-1,0,-1,-1,0,-1,-1,0,1,-1,1,1,0,1,0,-1,1,1,-1,-1,1,0,-1,-1,0,-1,0,1,-1,0,-1,-1,1,0,1,0,1,-1,-1,1,0,1,0,1,1,0,-1,0,-1,-1,-1,-1,1,0,0,-1,-1,1,0,0,-1,0,1,0,1,-1,0,1,-1,0,-1,1,0,-1,0,0,1,-1,1,1,-1,0,-1,0,-1,1,0,0,1,1,-1,-1,0,1,0,1,-1,1,0,-1,1,1,-1,-1,1,1,1,0,1,0,0,-1,1,1,-1,-1,-1,0,1,-1,-1,-1,0,0,0,1,1,1,1,1,1,-1,1,1,1,0,-1,1,0,1,0,-1,1,0,1,-1,1,1,1,1,0,0,-1,1,-1,1,-1,-1,1,1,0,1,0,0,-1,0,-1,1,-1,-1,0,0,0,-1,1,0,1,0,-1,-1,1,1,0,1,-1,0,1,0,1,-1,1,1,-1,0,0,-1,0,1,0,1,0,0,0,1,-1,-1,0,0,0,1,1,1,1,0,1,-1,0,0,1,1,1,1,1,0,0,-1,1,-1,0,1,-1,0,0,1,1,-1,1,0,-1,-1,1,0,0,1,0,-1,-1,0,-1,-1,-1,-1,-1,-1,0,-1,1,0,0,-1,0,0,1,0,0,-1,0,1,0,0,1,1,-1,1,-1,-1,-1,-1,-1,-1,1,1,1,-1,0,0,-1,0,-1,0,0,-1,0,-1,-1,0,0,1,-1,1,1,0,0,-1,-1,0,1,1,1,0,0,1,0,1,1,1,1,0,1,0,-1,0,-1,1,-1,1,1,-1,-1,0,1,1,1,0,1,1,1,0,1,0,0,0,1,1,0,-1,-1,0,-1,-1,0,0,1,0,1,0,-1,-1,-1,-1,0,0,0,-1,-1,0,1,-1,0,-1,1,1,0,0,0,1,0,-1,0,1,-1,-1,-1,1,-1,0,-1,-1,-1,-1,1,-1,0,0,0,-1,-1,-1,-1,-1,0,0,1,-1,1,1,1,0,1,-1,-1,0,-1,-1,-1,0,1,1,0,1,-1,1,0,1,1,0,0,1,0,1,0,0,-1,0,-1,-1,1,-1,0,1,-1,0,-1,0,0,1,0,-1,1,1,0,1,0,0,0,-1,1,0,1,1,0,0,1,-1,-1,0,-1,-1,1,-1,1,-1,-1,0,-1,-1,-1,-1,1,1,1,-1,1,0,-1,0,0,0,0,1,-1,-1,1,0,0,1,-1,1,1,1,0,0,0,-1,0,-1,1,1,1,1,1,0,-1,-1,0,1,1,1,1,0,-1,1,-1,1,1,0,0,1,1,1,0,-1,0,-1,1,-1,0,-1,-1,0,1,0,-1,1,0,1,-1,1,-1,0,-1,-1,0,-1,-1,0,1,0,1,0,0,1,-1,-1,1,1,-1,0,1,-1,0,-1,0,0,1,0,0,-1,-1,-1,0,-1,-1,0,0,-1,1,1,0,-1,1,1,0,1,1,-1,1,0,-1,0,1,1,0,0,0,0,1,0,-1,1,1,-1,-1,-1,0,0,-1,1,0,-1,1,1,0,0,-1,-1,0,0,-1,0,-1,1,0,1,0,-1,-1,0,0,1,1,0,0,-1,1,0,-1,-1,1,0,-1,1,0,1,-1,1,0,0,-1,0,0,0,-1,0,-1,1,1,-1,0,-1,1,0,1,-1,1,0,0,-1,1,1,-1,0,0,0,0,0,1,-1,0,1,-1,1,1,-1,-1,-1,1,1,1,0,1,0,0,1,0,-1,-1,1,1,1,0,0,-1,1,0,1,0,0,1,-1,0,1,0,1,-1,1,1,1,1,0,-1,0,-1,0,1,0,1,0,1,0,-1,0,1,0,1,0,1,-1,-1,1,1,1,1,1,-1,0,1,0,0,0,-1,1,0,0,1,0,0,-1,-1,0,0,-1,-1,1,1,0,-1,-1,0,-1,-1,-1,0,1,0,-1,-1,-1,-1,1,-1,0,-1,-1,0,1,1,0,1,0,-1,1,-1,1,1,-1,1,0,0,0,0,1,-1,-1,-1,0,1,-1,1,0,0,1,1,-1,-1,1,1,1,0,-1,-1,1,1,-1,0,-1,0,1,1,1,0,-1,0,1,0,1,1,0,0,0,0,0,-1,0,-1,1,-1,-1,1,0,1,1,-1,1,1,1,0,0,-1,-1,-1,1,-1,1,-1,-1,0,0,-1,1,-1,0,0,-1,1,0,-1,1,0,0,-1,1,-1,-1,-1,1,1,0,1,1,0,0,1,0,-1,1,1,0,1,1,1,-1,-1,-1,0,-1,1,-1,0,0,-1,-1,0,-1,1,1,0,-1,1,1,-1,1,-1,1,0,-1,-1,0,-1,0,1,1,1,-1,1,1,0,1,-1,1,-1,1,-1,-1,0,0,-1,0,0,-1,1,0,1,-1,0,-1,-1,-1,0,1,-1,-1,0,1,-1,1,1,0,1,-1,1,0,0,0,0,0,-1,0,-1,0,0,0,1,1,1,1,-1,-1,-1,0,-1,-1,-1,0,0,0,-1,-1,-1,-1,-1,1,1,1,-1,1,1,-1,0,-1,1,-1,1,-1,1,-1,-1,-1,1,0,0,-1,-1,1,0,-1,0,1,1,-1,-1,1,0,0,-1,-1,1,1,0,1,1,0,0,-1,1,-1,-1,1,0,0,-1,1,0,-1,-1,0,1,1,-1,-1,1,0,0,-1,-1,1,0,1,-1,0,-1,0,-1,-1,-1,-1,0,-1,1,-1,-1,1,1,0,-1,1,0,1,1,1,1,1,-1,-1,0,-1,-1,1,-1,0,0,1,1,-1,0,-1,1,1,-1,0,0,1,-1,0,-1,0,1,-1,-1,0,0,1,-1,-1,0,-1,-1,1,0,0,0,-1,0,-1,0,1,0,-1,1,0,0,0,0,0,0,-1,1,-1,0,1,0,1,-1,-1,0,1,-1,0,-1,1,0,1,0,1,-1,0,-1,0,0,-1,1,-1,-1,1,0,1,1,-1,0,1,-1,-1,-1,0,0,1,0,-1,1,-1,1,1,0,0,-1,1,0,-1,-1,-1,1,0,0,0,0,-1,1,0,1,1,1,-1,-1,0,-1,0,1,-1,-1,1,1,0,1,0,-1,0,-1,-1,-1,0,-1,1,1,0,0,1,-1,0,0,0,-1,-1,0,-1,-1,-1,-1,-1,1,-1,0,1,-1,0,0,0,0,-1,0,1,1,1,-1,1,-1,1,1,-1,1,1,0,0,0,1,-1,-1,1,1,1,1,0,-1,0,1,1,1,1,0,-1,0,1,0,-1,-1,1,0,0,-1,1,-1,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,1,-1,0,0,1,0,1,-1,-1,0,1,1,1,-1,0,1,1,0,1,1,0,-1,-1,0,0,1,1,0,-1,-1,0,0,0,0,0,-1,0,-1,-1,-1,1,0,-1,-1,0,0,1,-1,0,1,-1,-1,0,-1,1,-1,-1,0,-1,-1,-1,1,-1,1,0,-1,1,-1,0,1,0,0,1,-1,-1,0,-1,-1,1,-1,-1,-1,-1,1,0,0,1,0,0,1,1,1,1,-1,0,1,1,0,-1,-1,-1,0,-1,-1,1,-1,0,0,0,1,1,0,0,-1,1,0,-1,-1,-1,-1,-1,1,1,-1,1,-1,1,1,-1,1,-1,1,1,0,1,-1,-1,1,0,0,-1,1,-1,-1,1,0,-1,-1,-1,-1,1,1,1,1,1,0,-1,0,1,-1,-1,0,-1,-1,1,-1,1,0,-1,-1,0,1,-1,1,-1,1,0,-1,1,0,0,1,1,0,-1,-1,-1,1,1,-1,0,0,1,-1,1,-1,1,1,-1,-1,0,-1,0,1,0,1,0,1,-1,1,-1,-1,-1,0,1,-1,1,-1,1,-1,-1,1,1,1,1,0,1,0,1,-1,-1,1,0,0,-1,1,1,-1,-1,-1,-1,1,-1,0,1,1,0,0,0,-1,1,-1,1,0,0,-1,1,0,-1,-1,0,1,-1,1,-1,-1,0,-1,0,1,1,1,0,-1,-1,1,1,1,1,-1,-1,-1,0,-1,0,-1,1,0,-1,0,0,0,-1,-1,0,1,0,1,1,0,0,1,0,-1,-1,0,1,0,0,0,-1,0,1,1,0,0,1,-1,0,0,0,0,-1,-1,1,-1,1,0,1,1,-1,-1,-1,1,1,0,-1,1,0,1,1,0,0,0,0,-1,-1,-1,-1,1,1,1,1,0,0,0,1,1,0,-1,0,0,-1,1,-1,-1,0,0,-1,-1,1,0,0,1,0,0,1,1,0,-1,1,0,0,0,-1,1,0,1,0,1,1,-1,0,1,0,1,0,1,1,1,-1,0,0,-1,0,0,0,0,0,-1,-1,1,1,0,-1,1,1,0,-1,1,1,-1,1,-1,0,-1,-1,1,0,0,-1,1,-1,1,0,0,1,-1,0,1,0,-1,0,-1,0,1,1,0,1,1,0,1,0,1,1,-1,-1,-1,-1,-1,-1,1,0,1,-1,-1,0,0,0,1,-1,0,0,0,0,1,-1,0,0,-1,0,1,0,0,-1,0,1,-1,-1,-1,1,0,-1,-1,-1,0,-1,-1,0,1,0,1,-1,-1,-1,0,0,1,0,0,0,0,-1,1,1,-1,-1,1,0,0,0,1,-1,0,1,0,0,1,-1,0,-1,0,0,-1,1,1,1,1,1,1,0,0,-1,0,0,0,-1,1,1,1,1,-1,1,-1,0,0,1,1,1,-1,1,1,0,1,1,0,-1,-1,-1,1,1,0,-1,1,0,0,0,1,-1,-1,-1,1,0,1,1,-1,0,-1,0,0,1,-1,1,-1,1,0,-1,1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,-1,0,-1,1,-1,1,1,-1,-1,-1,0,1,0,0,0,1,1,0,-1,-1,-1,1,1,1,1,-1,-1,-1,1,-1,-1,1,0,1,1,1,-1,0,1,-1,0,1,0,1,1,1,1,-1,1,0,-1,0,-1,-1,-1,-1,1,0,1,-1,0,0,1,0,-1,-1,1,0,1,1,-1,1,1,-1,1,0,-1,0,0,0,0,0,-1,1,1,0,0,1,0,0,-1,0,-1,1,-1,-1,1,1,1,1,1,0,-1,0,0,1,1,0,1,1,0,-1,0,0,0,-1,-1,0,0,-1,-1,-1};

#endif
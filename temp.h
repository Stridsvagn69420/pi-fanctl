#ifndef TEMP_H
#define TEMP_H

#include <stdio.h>
#include <math.h>
#include "consts.h"

// Reads the CPU_TEMP_FILE and casts the string to an int
int raw_temp();

// Reads the CPU_TEMP_FILE and converts it to a decimal number in °C
float cpu_temp();

// Gets the CPU temperature and rounds it to a integer in °C
int round_temp();

#endif
#ifndef TEMP_H
#define TEMP_H

#include <stdio.h>
#include "consts.h"

// Reads the CPU_TEMP_FILE and casts the string to an int
int raw_temp();

// Reads the CPU_TEMP_FILE and converts it to a decimal number in °C
float cpu_temp();

#endif
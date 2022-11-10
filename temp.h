#ifndef TEMP_H
#define TEMP_H

#include <stdio.h>
#include <math.h>
#include "consts.h"

// Opens the CPU_TEMP_FILE in read-only mode
FILE* open_temp();

// Reads the CPU temperature file and returns it in °C
int cpu_temp(FILE *p);

#endif

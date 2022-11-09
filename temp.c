#include <stdio.h>
#include "consts.h"

// Reads the CPU_TEMP_FILE and casts the string to an int
int raw_temp() {
	// Read Temperature File
	char raw[CPU_TEMP_FILE_LENGTH];
	FILE *tempfile = fopen(CPU_TEMP_FILE, "r");
	fgets(raw, CPU_TEMP_FILE_LENGTH, tempfile);

	// Parse contents to int
	int res;
	sscanf(raw, "%d", &res);
	return 0;
}

// Reads the CPU_TEMP_FILE and converts it to a decimal number in °C
float cpu_temp() {
        int temp = raw_temp();
        return temp / 1000;
}

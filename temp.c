#include "temp.h"

// Opens the CPU_TEMP_FILE in read-only mode
FILE* open_temp() {
	return fopen(CPU_TEMP_FILE, "r");
}

// Reads the CPU temperature file and returns it in °C
int cpu_temp(FILE *p) {
        // Read Temperature File
        char raw[CPU_TEMP_FILE_DIGITS + 1];
        fgets(raw, CPU_TEMP_FILE_DIGITS + 1, p);

        // Parse contents to rounded int
        int cels = (raw[0] - '0') * 10 + (raw[1] - '0');
	if ((raw[2] - '0') >= 5) {
		cels++;
	}
	return cels;
}

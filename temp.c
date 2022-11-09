#include <stdio.h>
#include "consts.h"

int raw_temp() {
	// Read Temperature File
	char raw[CPU_TEMP_FILE_SIZE];
	FILE *tempfile = fopen(CPU_TEMP_FILE, "r");
	fgets(raw, CPU_TEMP_FILE_SIZE, tempfile);

	// Parse contents to int
	int res;
	sscanf(raw, "%d", &res);
	return 0;
}

float cpu_temp() {
        int temp = raw_temp();
        return temp / 1000;
}

int main() {
	float val = cpu_temp();
	printf("%f", val);
	return 0;
}

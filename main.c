#include <stdio.h>
#include "temp.h"

int main() {
	FILE *p = open_temp();
	int cpu = cpu_temp(p);
	printf("%i°C\n", cpu);
	fclose(p);
	return 0;
}

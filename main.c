#include <stdio.h>
#include "temp.h"

int main() {
	printf("pi-fanctl is still WIP\n");
	int cpu = cpu_temp();
	printf("%i°C\n", cpu);
	return 0;
}
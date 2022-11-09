#include "temp.h"

// Reads the CPU_TEMP_FILE and casts the string to an int
int raw_temp() {
        // Read Temperature File
        char raw[CPU_TEMP_FILE_LENGTH + 1];
        FILE *tempfile = fopen(CPU_TEMP_FILE, "r");
        fgets(raw, CPU_TEMP_FILE_LENGTH + 1, tempfile);

        // Parse contents to int
        int res;
        sscanf(raw, "%d", &res);
        return res;
}

// Reads the CPU_TEMP_FILE and converts it to a decimal number in °C
float cpu_temp() {
        int temp = raw_temp();
        return temp / 1000;
}

// Gets the CPU temperature and rounds it to a integer in °C
int round_temp() {
        float temp = cpu_temp();
        return round(temp);
}
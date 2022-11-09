#ifndef CONSTS_H
#define CONSTS_H

// Application Name
#define APP_NAME "pi-fanctl"

// Runtime Directory
#define RUNTIME_DIR "/run/" APP_NAME
// PID File
#define PID_FILE "/run/" APP_NAME "/" APP_NAME ".pid"
// Socket File
#define SOCKET_FILE "/run/" APP_NAME "/" APP_NAME ".sock"

// CPU Temperature sysfs file
#define CPU_TEMP_FILE "/sys/class/thermal/thermal_zone0/temp"
// Temperature file digit length
#define CPU_TEMP_FILE_LENGTH 5

#endif
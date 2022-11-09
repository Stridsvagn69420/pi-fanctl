#include "run.h"

// Write PID file into the daemon run directory
void write_pid() {
    FILE *fp = fopen(PID_FILE, "w");
    fputs(getpid(), fp);
    fclose(fp);
}

// Create runtime directory in /run
int create_rundir() {
    return mkdir(RUNTIME_DIR, DIR_PERMS);
}
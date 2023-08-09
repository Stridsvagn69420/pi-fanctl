#include "run.h"

// Write PID file into the daemon run directory
void write_pid() {
    FILE *fp = fopen(PID_FILE, "w");
	if (fp != NULL) {
		char pidtxt[6];
		sprintf(pidtxt, "%d", getpid());
    	fputs(pidtxt, fp);
    }
	fclose(fp);
}

// Create runtime directory in /run
int create_rundir() {
    return mkdir(RUNTIME_DIR, DIR_PERMS);
}

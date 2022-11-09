#ifndef RUN_H
#define RUN_H

#define DIR_PERMS 0755

#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include "consts.h"

// Write PID file into the daemon run directory
void write_pid();

// Create runtime directory in /run
int create_rundir();

#endif
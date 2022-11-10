#!/bin/sh
set -e

# Build if missing
[ ! -f "build/pi-fanctl" ] && ./build.sh

# Copy binary
cp pi-fanctl /usr/local/bin/pi-fanctl

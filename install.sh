#!/bin/sh
set -e

# Build if missing
[ ! -f "pi-fanctl" ] && ./build.sh

# Copy binary
cp pi-fanctl /usr/local/bin/pi-fanctl
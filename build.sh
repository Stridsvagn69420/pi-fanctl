#!/bin/sh
set -e

# Create build dir
mkdir -p build
cd build

# Build pi-fanctl
cmake .. -DCMAKE_BUILD_TYPE=Release
make

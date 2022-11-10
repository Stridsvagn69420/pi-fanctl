cmake_minimum_required(VERSION 3.20)
project(pi-fanctl C)

add_executable(pi-fanctl main.c)
target_sources(pi-fanctl PRIVATE consts.h temp.c temp.h)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_C_FLAGS "-Wall -Wextra")
set(CMAKE_C_FLAGS_DEBUG "-g")
set(CMAKE_C_FLAGS_RELEASE "-O3 -s -w")

cmake_minimum_required(VERSION 3.20)
project(pi-fanctl C)
add_executable(pi-fanctl main.c)
target_sources(pi-fanctl PRIVATE consts.h temp.c temp.h)

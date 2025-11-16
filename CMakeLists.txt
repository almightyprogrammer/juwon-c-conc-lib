cmake_minimum_required(VERSION 4.0)
project(juwon_conc_lib C)

set(CMAKE_C_STANDARD 23)

add_library(juwon_conc_lib STATIC library.c
        JThread.h
        JThread.cpp)

cmake_minimum_required(VERSION 4.0)
project(juwon_conc_lib C)

set(CMAKE_C_STANDARD 23)

# Library target
add_library(juwon_conc_lib STATIC
        JThread.c
        JThread.h
        JThreadAttr.h
        JThreadAttr.c
)

# Test or demo executable
add_executable(main
        main.c
)

# Link the executable with the library
target_link_libraries(main PRIVATE juwon_conc_lib pthread)

cmake_minimum_required(VERSION 3.17)
project(laboratory_works_ASD C)

set(CMAKE_C_STANDARD 99)

set(SOURCES_1 lab_001/laboratory_01.c)
set(SOURCES_2 lab_002/laboratory_02.c)
set(SOURCES_3 lab_003/laboratory_03.c)

add_executable(laboratory_01 ${SOURCES_1})
add_executable(laboratory_02 ${SOURCES_2})
add_executable(laboratory_03 ${SOURCES_3})
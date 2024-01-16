cmake_minimum_required(VERSION 3.22)

project(GB_emulator)

file(GLOB_RECURSE SOURCE "src/*.c")

include_directories(src)

add_executable(${PROJECT_NAME}.elf ${SOURCE})


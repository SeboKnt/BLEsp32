cmake_minimum_required(VERSION 3.22)
set(BOARD esp32)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(BLEsp32)

FILE(GLOB app_sources src/*.c)
target_sources(app PRIVATE ${app_sources})

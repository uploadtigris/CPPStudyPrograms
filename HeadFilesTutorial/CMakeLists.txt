cmake_minimum_required(VERSION 3.19)
project(HeadFilesTutorial)

set(CMAKE_CXX_STANDARD 17)

add_executable(HeadFilesTutorial main.cpp header.h log.cpp common.h)
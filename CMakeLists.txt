cmake_minimum_required(VERSION 3.30)
project(libmi)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)

add_library(mi
        include/fs.h
        src/fs.cpp)

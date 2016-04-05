cmake_minimum_required(VERSION 3.4)
project(BigInt)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp bigint.cpp bigint.h debug.cpp debug.h general.cpp general.h
        iterstack.h libfns.cpp libfns.h relops.h scanner.cpp scanner.h ubigint.cpp ubigint.h)
add_executable(BigInt ${SOURCE_FILES})
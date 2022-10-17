cmake_minimum_required(VERSION 3.23)
project(test)

set(CMAKE_CXX_STANDARD 14)

include_directories(utils)

add_executable(test
        src/ran0.cpp
        src/ran1.cpp
        src/ran2.cpp
        src/ran3.cpp
        src/ran4.cpp
        src/psdes.cpp
        utils/nr.h
        utils/nrtypes.h
        utils/nrtypes_lib.h
        utils/nrtypes_nr.h
        utils/nrutil.h
        utils/nrutil_mtl.h
        utils/nrutil_nr.h
        utils/nrutil_tnt.h
        utils/nrutil_val.h
        utils/print_array.h
        main.cpp)

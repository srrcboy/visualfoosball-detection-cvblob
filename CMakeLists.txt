cmake_minimum_required (VERSION 2.6)

# If the user specifies -DCMAKE_BUILD_TYPE on the command line, take their
# definition and dump it in the cache along with proper documentation, otherwise
# set MAKE_BUILD_TYPE to Debug prior to calling PROJECT()
if (DEFINED CMAKE_BUILD_TYPE)
        if (NOT CMAKE_BUILD_TYPE MATCHES Debug)
                set (CMAKE_BUILD_TYPE Debug)
        endif ()
        set (CMAKE_BUILD_TYPE ${CMAKE_BUILD_TYPE} CACHE STRING "Choose the type of build, options are: None(CMAKE_CXX_FLAGS or CMAKE_C_FLAGS used) Debug Release RelWithDebInfo MinSizeRel.")
else()
        set (CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build, options are: None(CMAKE_CXX_FLAGS or CMAKE_C_FLAGS used) Debug Release RelWithDebInfo MinSizeRel.")
endif()

project (visualfoosball-detection-cvblob)

###############################################################################
# output directories
###############################################################################

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

###############################################################################
# compiler flags and definitions
###############################################################################

if (CMAKE_BUILD_TYPE MATCHES Debug)
  add_definitions (-D_DEBUG -DDEBUG)
endif ()

if (UNIX)
  add_definitions (-std=c++11 -pedantic)
endif (UNIX)

###############################################################################
# set up project
###############################################################################

add_subdirectory ("src")

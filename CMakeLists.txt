cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
set (CMAKE_CXX_STANDARD 11)
set(PROJECT_NAME J118)
message(STATUS "************  ${PROJECT_NAME} ************")
project(${PROJECT_NAME})

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)





set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    set(PORT_TYPE POSIX)
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	set(PORT_TYPE WIN)
	#add_definitions( /wd4996 )
endif()

file (GLOB SRCS "src/*.cpp" "src/Concurrency/*.cpp" "src/Sockets/*.cpp" "src/Graphics/*.cpp" "src/Math/*.cpp")
file (GLOB HDRS "include/${PROJECT_NAME}/*.h")
aux_source_directory(include/${PROJECT_NAME}/ J118_HEADERS)

include_directories(include)
include_directories($ENV{CMAKE_CROSS_COMPILE_TOOL_CHAIN}/include/)

#include_directories($ENV{CMAKE_CROSS_COMPILE_TOOL_CHAIN}/include/SDL2)


add_library(${PROJECT_NAME} ${HDRS} ${SRCS})
target_link_libraries(${PROJECT_NAME} SDL)

if(DEFINED ENV{CMAKE_CROSS_COMPILE_TOOL_CHAIN})
	message(STATUS "Cross Compile Tool Chain Set $ENV{CMAKE_CROSS_COMPILE_TOOL_CHAIN}")
	set(tools $ENV{CMAKE_CROSS_COMPILE_TOOL_CHAIN})
	set(CMAKE_C_COMPILER ${tools}/bin/arm-linux-gnueabihf-gcc)
	set(CMAKE_CXX_COMPILER ${tools}/bin/arm-linux-gnueabihf-g++)
	install(TARGETS ${PROJECT_NAME} DESTINATION $ENV{CMAKE_CROSS_COMPILE_TOOL_CHAIN}/lib)
	install(FILES ${HDRS} DESTINATION $ENV{CMAKE_CROSS_COMPILE_TOOL_CHAIN}/include/J118)
endif()

if(DEFINED ENV{J118_BUILD_OUPUT_DIRECTORY})
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY $ENV{J118_BUILD_OUPUT_DIRECTORY}/lib)
	message(STATUS "Saving binaries to $ENV{J118_BUILD_OUPUT_DIRECTORY}")
	file(INSTALL ${J118_HEADERS} DESTINATION "$ENV{J118_BUILD_OUPUT_DIRECTORY}/include/J118")
endif()






# Install script for directory: /home/joseph/Software/J118

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/joseph/Software/cross-pi-gcc-9.2.0-0/lib/libJ118.a")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/joseph/Software/cross-pi-gcc-9.2.0-0/lib" TYPE STATIC_LIBRARY FILES "/home/joseph/Software/J118/libJ118.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/ArgParse.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/Callback.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/Color.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/Exception.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/FontMap.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/IPCallback.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/IPServer.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/Matrix.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/Output.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/Packet.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/PeriodicThread.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/Thread.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/UDPServer.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/UtilityMacros.h;/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118/Vector2D.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/joseph/Software/cross-pi-gcc-9.2.0-0/include/J118" TYPE FILE FILES
    "/home/joseph/Software/J118/include/J118/ArgParse.h"
    "/home/joseph/Software/J118/include/J118/Callback.h"
    "/home/joseph/Software/J118/include/J118/Color.h"
    "/home/joseph/Software/J118/include/J118/Exception.h"
    "/home/joseph/Software/J118/include/J118/FontMap.h"
    "/home/joseph/Software/J118/include/J118/IPCallback.h"
    "/home/joseph/Software/J118/include/J118/IPServer.h"
    "/home/joseph/Software/J118/include/J118/Matrix.h"
    "/home/joseph/Software/J118/include/J118/Output.h"
    "/home/joseph/Software/J118/include/J118/Packet.h"
    "/home/joseph/Software/J118/include/J118/PeriodicThread.h"
    "/home/joseph/Software/J118/include/J118/Thread.h"
    "/home/joseph/Software/J118/include/J118/UDPServer.h"
    "/home/joseph/Software/J118/include/J118/UtilityMacros.h"
    "/home/joseph/Software/J118/include/J118/Vector2D.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/joseph/Software/J118/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

# Install script for directory: /home/pi/Software/J118

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
   "/usr/lib/libJ118.a")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib" TYPE STATIC_LIBRARY FILES "/home/pi/Software/J118/libJ118.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/J118/ArgParse.h;/usr/include/J118/Callback.h;/usr/include/J118/Canvas.h;/usr/include/J118/Color.h;/usr/include/J118/Exception.h;/usr/include/J118/FontMap.h;/usr/include/J118/IPCallback.h;/usr/include/J118/IPServer.h;/usr/include/J118/Matrix.h;/usr/include/J118/Output.h;/usr/include/J118/Packet.h;/usr/include/J118/PeriodicThread.h;/usr/include/J118/Point2D.h;/usr/include/J118/Thread.h;/usr/include/J118/UDPServer.h;/usr/include/J118/UtilityMacros.h;/usr/include/J118/Vector2D.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/include/J118" TYPE FILE FILES
    "/home/pi/Software/J118/include/J118/ArgParse.h"
    "/home/pi/Software/J118/include/J118/Callback.h"
    "/home/pi/Software/J118/include/J118/Canvas.h"
    "/home/pi/Software/J118/include/J118/Color.h"
    "/home/pi/Software/J118/include/J118/Exception.h"
    "/home/pi/Software/J118/include/J118/FontMap.h"
    "/home/pi/Software/J118/include/J118/IPCallback.h"
    "/home/pi/Software/J118/include/J118/IPServer.h"
    "/home/pi/Software/J118/include/J118/Matrix.h"
    "/home/pi/Software/J118/include/J118/Output.h"
    "/home/pi/Software/J118/include/J118/Packet.h"
    "/home/pi/Software/J118/include/J118/PeriodicThread.h"
    "/home/pi/Software/J118/include/J118/Point2D.h"
    "/home/pi/Software/J118/include/J118/Thread.h"
    "/home/pi/Software/J118/include/J118/UDPServer.h"
    "/home/pi/Software/J118/include/J118/UtilityMacros.h"
    "/home/pi/Software/J118/include/J118/Vector2D.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/pi/Software/J118/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

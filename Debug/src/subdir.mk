################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Exception.cpp \
../src/Matrix.cpp \
../src/Vector2D.cpp 

OBJS += \
./src/Exception.o \
./src/Matrix.o \
./src/Vector2D.o 

CPP_DEPS += \
./src/Exception.d \
./src/Matrix.d \
./src/Vector2D.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/joseph/software/J118/include -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/OvernightPackage.cpp \
../src/Package.cpp \
../src/RegularPackage.cpp \
../src/SE220Lab4_1.cpp \
../src/TwoDayPackage.cpp 

OBJS += \
./src/OvernightPackage.o \
./src/Package.o \
./src/RegularPackage.o \
./src/SE220Lab4_1.o \
./src/TwoDayPackage.o 

CPP_DEPS += \
./src/OvernightPackage.d \
./src/Package.d \
./src/RegularPackage.d \
./src/SE220Lab4_1.d \
./src/TwoDayPackage.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



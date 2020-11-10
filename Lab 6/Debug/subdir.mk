################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../InputFunction.cpp \
../PrintOptions.cpp \
../PrintSumAndAvg.cpp \
../SearchPerson.cpp \
../SumAndAverage.cpp \
../headerFunction.cpp \
../main.cpp \
../searchBalance.cpp 

OBJS += \
./InputFunction.o \
./PrintOptions.o \
./PrintSumAndAvg.o \
./SearchPerson.o \
./SumAndAverage.o \
./headerFunction.o \
./main.o \
./searchBalance.o 

CPP_DEPS += \
./InputFunction.d \
./PrintOptions.d \
./PrintSumAndAvg.d \
./SearchPerson.d \
./SumAndAverage.d \
./headerFunction.d \
./main.d \
./searchBalance.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



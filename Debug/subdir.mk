################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../array_strings.cpp \
../linkedlists.cpp \
../main.cpp \
../stacks_queues.cpp 

OBJS += \
./array_strings.o \
./linkedlists.o \
./main.o \
./stacks_queues.o 

CPP_DEPS += \
./array_strings.d \
./linkedlists.d \
./main.d \
./stacks_queues.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MyApp/MyApp.c 

OBJS += \
./MyApp/MyApp.o 

C_DEPS += \
./MyApp/MyApp.d 


# Each subdirectory must supply rules for building sources it contributes
MyApp/MyApp.o: ../MyApp/MyApp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I"/home/jorge/STM32CubeIDE/workspace/Example 01 - Blinking a LED with Delay/MyApp" -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"MyApp/MyApp.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"


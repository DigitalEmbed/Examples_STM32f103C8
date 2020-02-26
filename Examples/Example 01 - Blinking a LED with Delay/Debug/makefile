################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MyApp/subdir.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Example\ 01\ -\ Blinking\ a\ LED\ with\ Delay.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Example\ 01\ -\ Blinking\ a\ LED\ with\ Delay.list \

OBJCOPY_BIN += \
Example\ 01\ -\ Blinking\ a\ LED\ with\ Delay.bin \


# All Target
all: Example\ 01\ -\ Blinking\ a\ LED\ with\ Delay.elf secondary-outputs

# Tool invocations
Example\ 01\ -\ Blinking\ a\ LED\ with\ Delay.elf: $(OBJS) $(USER_OBJS) /home/jorge/STM32CubeIDE/workspace/Example\ 01\ -\ Blinking\ a\ LED\ with\ Delay/STM32F103C8TX_FLASH.ld
	arm-none-eabi-gcc -o "Example 01 - Blinking a LED with Delay.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"/home/jorge/STM32CubeIDE/workspace/Example 01 - Blinking a LED with Delay/STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Example 01 - Blinking a LED with Delay.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Example\ 01\ -\ Blinking\ a\ LED\ with\ Delay.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Example 01 - Blinking a LED with Delay.list"
	@echo 'Finished building: $@'
	@echo ' '

Example\ 01\ -\ Blinking\ a\ LED\ with\ Delay.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Example 01 - Blinking a LED with Delay.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

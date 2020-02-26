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
Example\ 02\ -\ Controlling\ a\ Blinking\ LED\ with\ a\ Button.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Example\ 02\ -\ Controlling\ a\ Blinking\ LED\ with\ a\ Button.list \

OBJCOPY_BIN += \
Example\ 02\ -\ Controlling\ a\ Blinking\ LED\ with\ a\ Button.bin \


# All Target
all: Example\ 02\ -\ Controlling\ a\ Blinking\ LED\ with\ a\ Button.elf secondary-outputs

# Tool invocations
Example\ 02\ -\ Controlling\ a\ Blinking\ LED\ with\ a\ Button.elf: $(OBJS) $(USER_OBJS) /home/jorge/STM32CubeIDE/workspace/Example\ 02\ -\ Reading\ and\ Writing\ GPIOs/STM32F103C8TX_FLASH.ld
	arm-none-eabi-gcc -o "Example 02 - Controlling a Blinking LED with a Button.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"/home/jorge/STM32CubeIDE/workspace/Example 02 - Reading and Writing GPIOs/STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Example 02 - Controlling a Blinking LED with a Button.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Example\ 02\ -\ Controlling\ a\ Blinking\ LED\ with\ a\ Button.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Example 02 - Controlling a Blinking LED with a Button.list"
	@echo 'Finished building: $@'
	@echo ' '

Example\ 02\ -\ Controlling\ a\ Blinking\ LED\ with\ a\ Button.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Example 02 - Controlling a Blinking LED with a Button.bin"
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

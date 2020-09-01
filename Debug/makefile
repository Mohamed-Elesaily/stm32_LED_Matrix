################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
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
ledMatix.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
ledMatix.list \

OBJCOPY_BIN += \
ledMatix.bin \


# All Target
all: ledMatix.elf secondary-outputs

# Tool invocations
ledMatix.elf: $(OBJS) $(USER_OBJS) /home/msm/STM32CubeIDE/workspace_1.3.0/ledMatix/STM32F103C8TX_FLASH.ld
	arm-none-eabi-gcc -o "ledMatix.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"/home/msm/STM32CubeIDE/workspace_1.3.0/ledMatix/STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="ledMatix.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

ledMatix.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "ledMatix.list"
	@echo 'Finished building: $@'
	@echo ' '

ledMatix.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "ledMatix.bin"
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

################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Middlewares/USBH_Library/Core/subdir.mk
-include Middlewares/USBH_Library/Config/subdir.mk
-include Middlewares/USBH_Library/Class/MSC/subdir.mk
-include Middlewares/STemWin/OS/subdir.mk
-include Middlewares/STemWin/Config/subdir.mk
-include Middlewares/FreeRTOS/Portable/subdir.mk
-include Middlewares/FreeRTOS/subdir.mk
-include Middlewares/FatFs/Options/subdir.mk
-include Middlewares/FatFs/Drivers/subdir.mk
-include Middlewares/FatFs/Core/subdir.mk
-include Drivers/STM32F4_HAL_Driver/subdir.mk
-include Drivers/CMSIS/subdir.mk
-include Drivers/BSP/STM32469I_DISCO/subdir.mk
-include Drivers/BSP/Component/subdir.mk
-include Application/User/Utilities/subdir.mk
-include Application/User/Startup/subdir.mk
-include Application/User/Modules/home_alarm/subdir.mk
-include Application/User/Modules/details_page/subdir.mk
-include Application/User/Modules/control_page/subdir.mk
-include Application/User/Modules/audio_recorder/subdir.mk
-include Application/User/Modules/VideoPlayer/subdir.mk
-include Application/User/Modules/Common/subdir.mk
-include Application/User/Modules/Audio/subdir.mk
-include Application/User/Core/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := STemWin
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
STemWin.elf \

MAP_FILES += \
STemWin.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
STemWin.list \

OBJCOPY_HEX += \
STemWin.hex \


# All Target
all: main-build

# Main-build Target
main-build: STemWin.elf secondary-outputs

# Tool invocations
STemWin.elf STemWin.map: $(OBJS) $(USER_OBJS) C:\Users\arunj\STM32CubeIDE\workspace_1.14.0\STemWin\STM32CubeIDE\STM32F469NIHX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "STemWin.elf" @"objects.list" $(USER_OBJS) -Wl,--start-group $(LIBS) -Wl,--end-group -mcpu=cortex-m4 -T"C:\Users\arunj\STM32CubeIDE\workspace_1.14.0\STemWin\STM32CubeIDE\STM32F469NIHX_FLASH.ld" --specs=nosys.specs -Wl,-Map="STemWin.map" -Wl,--gc-sections -static -L../../Middlewares/ST/STM32_Audio/Addons/PDM/Lib -L../../Middlewares/ST/STemWin/Lib -L../../Gui/STemWin_Addons --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

STemWin.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "STemWin.list"
	@echo 'Finished building: $@'
	@echo ' '

STemWin.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "STemWin.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) STemWin.elf STemWin.hex STemWin.list STemWin.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets

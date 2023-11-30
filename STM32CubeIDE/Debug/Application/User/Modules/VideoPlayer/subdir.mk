################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Gui/Core/videoplayer/video_player_win.c 

OBJS += \
./Application/User/Modules/VideoPlayer/video_player_win.o 

C_DEPS += \
./Application/User/Modules/VideoPlayer/video_player_win.d 


# Each subdirectory must supply rules for building sources it contributes
Application/User/Modules/VideoPlayer/video_player_win.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Gui/Core/videoplayer/video_player_win.c Application/User/Modules/VideoPlayer/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-User-2f-Modules-2f-VideoPlayer

clean-Application-2f-User-2f-Modules-2f-VideoPlayer:
	-$(RM) ./Application/User/Modules/VideoPlayer/video_player_win.cyclo ./Application/User/Modules/VideoPlayer/video_player_win.d ./Application/User/Modules/VideoPlayer/video_player_win.o ./Application/User/Modules/VideoPlayer/video_player_win.su

.PHONY: clean-Application-2f-User-2f-Modules-2f-VideoPlayer


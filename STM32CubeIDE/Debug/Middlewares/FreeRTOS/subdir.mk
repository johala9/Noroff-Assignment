################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/croutine.c \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/event_groups.c \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/list.c \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/queue.c \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/tasks.c \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/timers.c 

OBJS += \
./Middlewares/FreeRTOS/croutine.o \
./Middlewares/FreeRTOS/event_groups.o \
./Middlewares/FreeRTOS/list.o \
./Middlewares/FreeRTOS/queue.o \
./Middlewares/FreeRTOS/tasks.o \
./Middlewares/FreeRTOS/timers.o 

C_DEPS += \
./Middlewares/FreeRTOS/croutine.d \
./Middlewares/FreeRTOS/event_groups.d \
./Middlewares/FreeRTOS/list.d \
./Middlewares/FreeRTOS/queue.d \
./Middlewares/FreeRTOS/tasks.d \
./Middlewares/FreeRTOS/timers.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/FreeRTOS/croutine.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/croutine.c Middlewares/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/FreeRTOS/event_groups.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/event_groups.c Middlewares/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/FreeRTOS/list.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/list.c Middlewares/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/FreeRTOS/queue.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/queue.c Middlewares/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/FreeRTOS/tasks.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/tasks.c Middlewares/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/FreeRTOS/timers.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Middlewares/Third_Party/FreeRTOS/Source/timers.c Middlewares/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middlewares-2f-FreeRTOS

clean-Middlewares-2f-FreeRTOS:
	-$(RM) ./Middlewares/FreeRTOS/croutine.cyclo ./Middlewares/FreeRTOS/croutine.d ./Middlewares/FreeRTOS/croutine.o ./Middlewares/FreeRTOS/croutine.su ./Middlewares/FreeRTOS/event_groups.cyclo ./Middlewares/FreeRTOS/event_groups.d ./Middlewares/FreeRTOS/event_groups.o ./Middlewares/FreeRTOS/event_groups.su ./Middlewares/FreeRTOS/list.cyclo ./Middlewares/FreeRTOS/list.d ./Middlewares/FreeRTOS/list.o ./Middlewares/FreeRTOS/list.su ./Middlewares/FreeRTOS/queue.cyclo ./Middlewares/FreeRTOS/queue.d ./Middlewares/FreeRTOS/queue.o ./Middlewares/FreeRTOS/queue.su ./Middlewares/FreeRTOS/tasks.cyclo ./Middlewares/FreeRTOS/tasks.d ./Middlewares/FreeRTOS/tasks.o ./Middlewares/FreeRTOS/tasks.su ./Middlewares/FreeRTOS/timers.cyclo ./Middlewares/FreeRTOS/timers.d ./Middlewares/FreeRTOS/timers.o ./Middlewares/FreeRTOS/timers.su

.PHONY: clean-Middlewares-2f-FreeRTOS

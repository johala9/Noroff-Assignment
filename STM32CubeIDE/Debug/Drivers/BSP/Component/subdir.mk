################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Drivers/BSP/Components/cs43l22/cs43l22.c \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Drivers/BSP/Components/ft6x06/ft6x06.c \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Drivers/BSP/Components/nt35510/nt35510.c \
C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Drivers/BSP/Components/otm8009a/otm8009a.c 

OBJS += \
./Drivers/BSP/Component/cs43l22.o \
./Drivers/BSP/Component/ft6x06.o \
./Drivers/BSP/Component/nt35510.o \
./Drivers/BSP/Component/otm8009a.o 

C_DEPS += \
./Drivers/BSP/Component/cs43l22.d \
./Drivers/BSP/Component/ft6x06.d \
./Drivers/BSP/Component/nt35510.d \
./Drivers/BSP/Component/otm8009a.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Component/cs43l22.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Drivers/BSP/Components/cs43l22/cs43l22.c Drivers/BSP/Component/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Component/ft6x06.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Drivers/BSP/Components/ft6x06/ft6x06.c Drivers/BSP/Component/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Component/nt35510.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Drivers/BSP/Components/nt35510/nt35510.c Drivers/BSP/Component/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Component/otm8009a.o: C:/Users/arunj/STM32CubeIDE/workspace_1.14.0/STemWin/Drivers/BSP/Components/otm8009a/otm8009a.c Drivers/BSP/Component/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_USB_FS -DUSE_STM32469I_DISCOVERY -DUSE_HAL_DRIVER -DUSE_STM32469I_DISCO_REVC -DUSE_IOEXPANDER -DSTM32F469xx -c -I../../Config -I../../Gui/STemWin_Addons -I../../Gui/Target -I../../Core/Inc -I../../Utilities/CPU -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/BSP/STM32469I-Discovery -I../../Drivers/BSP/Components -I../../Drivers/BSP/Components/Common -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -I../../Middlewares/ST/STemWin/inc -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/Third_Party/FatFs/src/drivers -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Modules/audio_player -I../../Modules/audio_recorder -I../../Modules/Common -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Component

clean-Drivers-2f-BSP-2f-Component:
	-$(RM) ./Drivers/BSP/Component/cs43l22.cyclo ./Drivers/BSP/Component/cs43l22.d ./Drivers/BSP/Component/cs43l22.o ./Drivers/BSP/Component/cs43l22.su ./Drivers/BSP/Component/ft6x06.cyclo ./Drivers/BSP/Component/ft6x06.d ./Drivers/BSP/Component/ft6x06.o ./Drivers/BSP/Component/ft6x06.su ./Drivers/BSP/Component/nt35510.cyclo ./Drivers/BSP/Component/nt35510.d ./Drivers/BSP/Component/nt35510.o ./Drivers/BSP/Component/nt35510.su ./Drivers/BSP/Component/otm8009a.cyclo ./Drivers/BSP/Component/otm8009a.d ./Drivers/BSP/Component/otm8009a.o ./Drivers/BSP/Component/otm8009a.su

.PHONY: clean-Drivers-2f-BSP-2f-Component


/**
  @page STM32469I-DISCO Assignment Project demonstrating Smart Home capabilities for board. 
 
  @verbatim
  ******************************************************************************
  * @file    STemWin/readme.txt 
  * @author  Arun Johal
  * @brief   Description of STM32469I-DISCO Assignment Project
  ******************************************************************************
  * @attention
  * Special mention and credit to the MCD Application for providing adapted logic
  * from various public use demonstration componenets provided in STM32CubeIDE.
  * WARNING: Some unused modules are still present to enable future imlementation
  * if needs be.
  ******************************************************************************
   @endverbatim

@par Description

The project is based around the graphical library STemWin, and the FreeRTOS 
real time operating system and several Middleware components.

Features:
  + LCD
  + Touchscreen (utilises I2C)
  + Peripheral control
  + Timer
  + Threads

Module Overview:

 + Light Control
 -------------------
 The light control module provides a graphic interface for controlling LED pins and LCD power pin.
 
 + System Information
 --------------  
 Displays board information along with assignment version.


Unit Tests:

 + Located inside Modules/control_page/control_page.c
 -------------------
 Simple tests to check the functions are as expected behaviour. Due to function simpslicity, in demo
 they do not hold huge merit, however they demonstrate the basic theory behind tests and checks in embedded.
 
*/

/**
  ******************************************************************************
  * @file    gardening_control_res.c
  * @author  MCD Application Team
  * @brief   resources define for gardening control module
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include <stdlib.h>
#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/** @addtogroup GARDENING_CONTROL_MODULE
  * @{
  */

/** @defgroup GARDENING_CONTROL_RES
  * @brief gardening control resources
  * @{
  */

extern GUI_CONST_STORAGE GUI_BITMAP bmcontrol1;
extern GUI_CONST_STORAGE GUI_BITMAP bmcontrol2;
extern GUI_CONST_STORAGE GUI_BITMAP bmcontrol3;
extern GUI_CONST_STORAGE GUI_BITMAP bmcontrol4;
extern GUI_CONST_STORAGE GUI_BITMAP bmcontrol5;

extern GUI_CONST_STORAGE GUI_BITMAP bmdes_control_sub;
extern GUI_CONST_STORAGE GUI_BITMAP bmdes_water_sub;
extern GUI_CONST_STORAGE GUI_BITMAP bmdes_garden_sub;

#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _accontrol1[] = {};

GUI_CONST_STORAGE GUI_BITMAP bmcontrol1 = {
  100,                           /* xSize                    */
  100,                           /* ySize                    */
  200,                           /* BytesPerLine             */
  16,                            /* BitsPerPixel             */
  (unsigned char *)_accontrol1,  /* Pointer to picture data  */
  NULL,                          /* Pointer to palette       */
  GUI_DRAW_BMPM565
};

 
#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _accontrol2[] = {};
  
GUI_CONST_STORAGE GUI_BITMAP bmcontrol2 = {
  100,                           /* xSize                    */
  100,                           /* ySize                    */
  200,                           /* BytesPerLine             */
  16,                            /* BitsPerPixel             */
  (unsigned char *)_accontrol2,  /* Pointer to picture data  */
  NULL,                          /* Pointer to palette       */
  GUI_DRAW_BMPM565
};

 
#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _accontrol3[] = {};

GUI_CONST_STORAGE GUI_BITMAP bmcontrol3 = {
  100,                           /* xSize                    */
  100,                           /* ySize                    */
  200,                           /* BytesPerLine             */
  16,                            /* BitsPerPixel             */
  (unsigned char *)_accontrol3,  /* Pointer to picture data  */
  NULL,                          /* Pointer to palette       */
  GUI_DRAW_BMPM565
};

 
#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _accontrol4[] = {};

GUI_CONST_STORAGE GUI_BITMAP bmcontrol4 = {
  100,                           /* xSize                    */
  100,                           /* ySize                    */
  200,                           /* BytesPerLine             */
  16,                            /* BitsPerPixel             */
  (unsigned char *)_accontrol4,  /* Pointer to picture data  */
  NULL,                          /* Pointer to palette       */
  GUI_DRAW_BMPM565
};

 
#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _accontrol5[] = {};

GUI_CONST_STORAGE GUI_BITMAP bmcontrol5 = {
  100,                           /* xSize                    */
  100,                           /* ySize                    */
  200,                           /* BytesPerLine             */
  16,                            /* BitsPerPixel             */
  (unsigned char *)_accontrol5,  /* Pointer to picture data  */
  NULL,                          /* Pointer to palette       */
  GUI_DRAW_BMPM565
};

const GUI_BITMAP * open_controls[] = {
  &bmcontrol1,   &bmcontrol2,   &bmcontrol3,   &bmcontrol4, &bmcontrol5
};


extern GUI_CONST_STORAGE GUI_BITMAP bmcontrol_sub;
extern GUI_CONST_STORAGE GUI_BITMAP bmwater_sub;
extern GUI_CONST_STORAGE GUI_BITMAP bmgarden_sub;

#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _acgarden_sub[] = {};

GUI_CONST_STORAGE GUI_BITMAP bmgarden_sub = {
  173, 
  140, 
  346, 
  16, 
  (unsigned char *)_acgarden_sub,  
  NULL,  
  GUI_DRAW_BMPM565
};

const GUI_BITMAP * garden[] = {
  &bmgarden_sub
};

const GUI_BITMAP * water[] = {
  &bmwater_sub
};

const GUI_BITMAP * control_sub[] = {
  &bmcontrol_sub
};

#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _acdes_garden_sub[]  = {};

GUI_CONST_STORAGE GUI_BITMAP bmdes_garden_sub = {
  173,                                    /* xSize */
  140,                                    /* ySize */
  346,                                    /* BytesPerLine */
  16,                                     /* BitsPerPixel */
  (unsigned char *)_acdes_garden_sub,     /* Pointer to picture data */
  NULL,                                   /* Pointer to palette */
  GUI_DRAW_BMPM565
};
  
#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _acdes_control_sub[]  = {};

GUI_CONST_STORAGE GUI_BITMAP bmdes_control_sub = {
  173,                                 /* xSize */
  140,                                 /* ySize */
  346,                                 /* BytesPerLine */
  16,                                  /* BitsPerPixel */
  (unsigned char *)_acdes_control_sub, /* Pointer to picture data */ 
  NULL,                                /* Pointer to palette */
  GUI_DRAW_BMPM565
};

#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _acdes_water_sub[]  = {};

GUI_CONST_STORAGE GUI_BITMAP bmdes_water_sub = {
  173,                                /* xSize */
  140,                                /* ySize */
  346,                                /* BytesPerLine */
  16,                                 /* BitsPerPixel */
  (unsigned char *)_acdes_water_sub,  /* Pointer to picture data */
  NULL,                               /* Pointer to palette */
  GUI_DRAW_BMPM565
};  
  
#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _accontrol_sub[]  = {};

GUI_CONST_STORAGE GUI_BITMAP bmcontrol_sub = {
  173,                            /* xSize */
  140,                            /* ySize */
  346,                            /* BytesPerLine */
  16,                             /* BitsPerPixel */
  (unsigned char *)_accontrol_sub,/* Pointer to picture data */  
  NULL,                           /* Pointer to palette */
  GUI_DRAW_BMPM565
};

#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned short _acwater_sub[]  = {};
GUI_CONST_STORAGE GUI_BITMAP bmwater_sub = {
  173,                            /* xSize */
  140,                            /* ySize */
  346,                            /* BytesPerLine */
  16,                             /* BitsPerPixel */
  (unsigned char *)_acwater_sub,  /* Pointer to picture data */
  NULL,                           /* Pointer to palette */
  GUI_DRAW_BMPM565
};

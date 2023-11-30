/**
  ******************************************************************************
  * @file    k_menu.c
  * @author  MCD Application Team
  * @brief   This file provides the kernel menu functions 
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
#include "main.h"
#include "up.c"
#include "cancel.c"
#include "ok.c"

/** @addtogroup CORE
  * @{
  */

/** @defgroup KERNEL_MENU
  * @brief Kernel menu routines
  * @{
  */


/* External variables --------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/
/* Private defines -----------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

#define ID_ICONVIEW_MENU               (GUI_ID_USER + 0x00)
#define ID_FEATURES_FPU                (GUI_ID_USER + 0x44)
#define ID_FEATURES_IC                 (GUI_ID_USER + 0x45)
#define ID_FEATURES_DC                 (GUI_ID_USER + 0x46)
#define ID_FEATURES_CPU                (GUI_ID_USER + 0x47)
#define ID_FEATURES_FREQ               (GUI_ID_USER + 0x48)

uint32_t module_active = 0;
ICONVIEW_Handle hIcon ;
WM_HWIN         hCPULoad;
WM_HTIMER       hRefreshTimer; 
extern GUI_CONST_STORAGE GUI_BITMAP bmF4Logo;

/**
  * @brief  Callback routine of desktop window.
  * @param  pMsg: pointer to data structure of type WM_MESSAGE
  * @retval None
  */
static void _cbBk(WM_MESSAGE * pMsg) {

  uint32_t NCode, Id;
  static uint8_t sel;

  switch (pMsg->MsgId)
  {
  case WM_PAINT:
    GUI_SetBkColor(GUI_WHITE);
    GUI_Clear();
    break;


  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;

    switch (NCode)
    {

    case WM_NOTIFICATION_RELEASED:
      if (Id == ID_ICONVIEW_MENU)
      {
        sel = ST_AnimatedIconView_GetSel(pMsg->hWinSrc);

        if(sel < k_ModuleGetNumber())
        {
          ST_AnimatedIconView_SetSel(pMsg->hWinSrc, -1);
          if(module_prop[sel].in_use == 0)
          {
            module_prop[sel].module->startup(pMsg->hWin, 0, 0);
            module_prop[sel].in_use = 1;
          }

          else if(module_prop[sel].win_state == 1)
          {
            module_prop[sel].module->startup(pMsg->hWin, 0, 0);
          }
        }
        else
        {
          WM_InvalidateWindow (pMsg->hWinSrc);
        }
      }
      break;

    case WM_NOTIFICATION_CHILD_DELETED:
        module_prop[sel].in_use = 0;
        module_prop[sel].win_state = 0;
        break;

    default:
      break;
    }
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/**
  * @brief  set the GUI profile
  * @param  None.
  * @retval None.
  */
void GUI_SetProfile(void)
{
  BUTTON_SetDefaultSkin(BUTTON_SKIN_FLEX);
  DROPDOWN_SetDefaultSkin(DROPDOWN_SKIN_FLEX);
  
  FRAMEWIN_SetDefaultTextColor(0, GUI_WHITE);
  FRAMEWIN_SetDefaultTextColor(1, GUI_WHITE);      
  
  FRAMEWIN_SetDefaultBarColor(0, GUI_STCOLOR_LIGHTBLUE);
  FRAMEWIN_SetDefaultBarColor(1, GUI_STCOLOR_LIGHTBLUE);
  
  FRAMEWIN_SetDefaultFont(&GUI_FontLubalGraph32B);
  
  FRAMEWIN_SetDefaultClientColor(GUI_WHITE);  
  FRAMEWIN_SetDefaultTitleHeight(35);
  
  
  WINDOW_SetDefaultBkColor(GUI_WHITE);
  
  LISTVIEW_SetDefaultGridColor(GUI_WHITE);
  LISTVIEW_SetDefaultBkColor(LISTVIEW_CI_SEL, GUI_STCOLOR_LIGHTBLUE);
  DROPDOWN_SetDefaultColor(DROPDOWN_CI_SEL, GUI_STCOLOR_LIGHTBLUE);
  LISTVIEW_SetDefaultBkColor(LISTVIEW_CI_SELFOCUS, GUI_STCOLOR_DARKBLUE);
  LISTVIEW_SetDefaultTextColor(LISTVIEW_CI_UNSEL, GUI_STCOLOR_LIGHTBLUE);
  DROPDOWN_SetDefaultColor(DROPDOWN_CI_SELFOCUS, GUI_STCOLOR_LIGHTBLUE);
  SCROLLBAR_SetDefaultWidth(24);
  SCROLLBAR_SetDefaultSTSkin();
  
  HEADER_SetDefaultBkColor(GUI_STCOLOR_LIGHTBLUE);
  HEADER_SetDefaultTextColor(GUI_WHITE);
  HEADER_SetDefaultFont(&GUI_FontLubalGraph32B);
  DROPDOWN_SetDefaultFont(&GUI_FontLubalGraph32B);
  LISTVIEW_SetDefaultFont(&GUI_FontLubalGraph32B);
  HEADER_SetDefaultSTSkin();
  SCROLLBAR_SetDefaultColor(GUI_STCOLOR_LIGHTBLUE, SCROLLBAR_CI_THUMB);  
  SCROLLBAR_SetDefaultColor(GUI_STCOLOR_LIGHTBLUE, SCROLLBAR_CI_SHAFT);  
  SCROLLBAR_SetDefaultColor(GUI_STCOLOR_LIGHTBLUE, SCROLLBAR_CI_ARROW);    
  ST_CHOOSEFILE_SetDelim('/');
  ST_CHOOSEFILE_SetButtonSize(60, 40);
  
  ST_CHOOSEFILE_SetButtonBitmaps (2, 
                                  &bmup, 
                                  NULL);
                                 
  ST_CHOOSEFILE_SetButtonBitmaps (1, 
                                  &bmok, 
                                  &bmOK_disabled);
                                 
  ST_CHOOSEFILE_SetButtonBitmaps (0, 
                                  &bm_fccancel, 
                                   NULL);
  
  
  
  
  GUI_SetDefaultFont(&GUI_FontLubalGraph32B);
  
  TEXT_SetDefaultTextColor(GUI_STCOLOR_LIGHTBLUE);
  TEXT_SetDefaultFont(&GUI_FontLubalGraph32B);
}

/**
  * @brief  Initializes the menu.
  * @param  None.
  * @retval None.
  */
void GUI_Init_MainMenu(void)
{
  uint8_t i = 0;
  
  WM_SetCallback(WM_GetDesktopWindowEx(0), _cbBk);
  
  
  hIcon = ST_AnimatedIconView_CreateEx(0, 
                                       0, 
                                       LCD_GetXSize() - 155, 
                                       LCD_GetYSize() - 50, 
                                       WM_GetDesktopWindowEx(0), 
                                       WM_CF_SHOW | WM_CF_HASTRANS | WM_CF_LATE_CLIP,
                                       0,
                                       ID_ICONVIEW_MENU, 
                                       150, 
                                       180, 20, 5); 
  
  ST_AnimatedIconView_SetDualFont(hIcon, &GUI_FontLubalGraph32B, &GUI_FontLubalGraph32B);
  
  ST_AnimatedIconView_SetSpace(hIcon, GUI_COORD_Y, 5);
  ST_AnimatedIconView_SetSpace(hIcon, GUI_COORD_X, 5);
  ST_AnimatedIconView_SetFrame(hIcon, GUI_COORD_Y, 30);
  ST_AnimatedIconView_SetFrame(hIcon, GUI_COORD_X, 10);
  
  ST_AnimatedIconView_SetTextColor(hIcon, ICONVIEW_CI_UNSEL, GUI_STCOLOR_LIGHTBLUE);
  ST_AnimatedIconView_SetBkColor(hIcon, ICONVIEW_CI_UNSEL, GUI_WHITE);
  ST_AnimatedIconView_SetBkColor(hIcon, ICONVIEW_CI_SEL, GUI_WHITE);
  ST_AnimatedIconView_SetSel(hIcon, -1);
  ST_AnimatedIconView_SetDualTextColor(hIcon, ICONVIEW_CI_SEL, GUI_STCOLOR_LIGHTBLUE, GUI_STCOLOR_DARKBLUE);  
  
  for (i = 0; i < k_ModuleGetNumber(); i++)
  {
    ST_AnimatedIconView_AddIcon(hIcon, module_prop[i].module->open_icon, module_prop[i].module->close_icon, (char *)module_prop[i].module->name);
  }
  
  hRefreshTimer = WM_CreateTimer(WM_GetDesktopWindowEx(0), 0, 900, 0);    
}

/**
  * @}
  */

/**
  * @}
  */

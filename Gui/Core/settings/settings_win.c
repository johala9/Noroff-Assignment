/**
  ******************************************************************************
  * @file    details_page.c
  * @author  Arun Johal
  * @brief   View device details for smart hub
  ******************************************************************************
  * @attention
  *
  *
  * Original version developed by MCD Application Team and developed further to
  * achieve specific functionality.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "details_res.c"
  
/* Function Prototypes -------------------------------------------------------*/
static void Startup(WM_HWIN hWin, uint16_t xpos, uint16_t ypos);

/* Private typedef -----------------------------------------------------------*/
K_ModuleItem_Typedef details_board =
{
  8,
  "Details",
  details,
  0,
  Startup,
  NULL,
};

/* Private define(s) -----------------------------------------------------------*/
#define ID_WINDOW_0 (GUI_ID_USER + 0x00) // window
#define ID_TEXT_BOARD (GUI_ID_USER + 0x02)
#define ID_TEXT_CPU (GUI_ID_USER + 0x04)
#define ID_TEXT_VERSION (GUI_ID_USER + 0x05)
#define ID_TEXT_BOARD_1 (GUI_ID_USER + 0x07)
#define ID_TEXT_CPU_1 (GUI_ID_USER + 0x09)
#define ID_TEXT_VERSION_1 (GUI_ID_USER + 0x0A)
#define ID_TEXT_TITLE (GUI_ID_USER + 0x0B)
#define ID_BUTTON_BACK (GUI_ID_USER + 0x20) // back

/* define layout ---------------------------------------------------------------*/
static const GUI_WIDGET_CREATE_INFO _aDialog[] = 
{
		{
		  WINDOW_CreateIndirect, "", ID_WINDOW_0, 0, 0, 800, 480, 0, 0x64, 0
		},
		{
		  TEXT_CreateIndirect, "Hub Info", ID_TEXT_TITLE, 65, 30, 300, 40, 0, 0x0, 0
		},
		{
		  TEXT_CreateIndirect, "Board", ID_TEXT_BOARD, 160, 155, 80, 30, 0, 0x0, 0
		},
		{
		  TEXT_CreateIndirect, "Clock", ID_TEXT_CPU, 355, 155, 100, 30, 0, 0x0, 0
		},
		{
		  TEXT_CreateIndirect, "Version", ID_TEXT_VERSION, 550, 155, 95, 30, 0, 0x0, 0
		},
		{
		  TEXT_CreateIndirect, "STM32...", ID_TEXT_BOARD_1, 160, 200, 120, 30, 0, 0x0, 0
		},
		{
		  TEXT_CreateIndirect, "180MHz", ID_TEXT_CPU_1, 355, 200, 100, 30, 0, 0x0, 0
		},
		{
		  TEXT_CreateIndirect, "Beta 1.0", ID_TEXT_VERSION_1, 550, 200, 100, 30, 0, 0x0, 0
		}
};

/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Paints back button
  * @param  hObj: button handle
  * @retval None
  */
static void _OnPaint_back(BUTTON_Handle hObj) {
  GUI_SetBkColor(FRAMEWIN_GetDefaultClientColor());
  GUI_Clear();
  GUI_SetColor(GUI_ORANGE);
  GUI_AA_FillCircle(0, 0, 300);
  GUI_SetBkColor(GUI_ORANGE);
  GUI_SetColor(GUI_WHITE);
  GUI_SetFont(&GUI_FontLubalGraph32B);
  GUI_DispStringAt("back", 20, 20);
}

/**
  * @brief  callback for BACK button
  * @param  pMsg: pointer to data structure of type WM_MESSAGE
  * @retval None
  */
static void _cbButton_back(WM_MESSAGE * pMsg) {
  switch (pMsg->MsgId) {
    case WM_PAINT:
      _OnPaint_back(pMsg->hWin);
      break;
    default:
      /* The original callback */
      BUTTON_Callback(pMsg);
      break;
  }
}

static WM_HTIMER hTimer;
uint32_t frame = 0;

/**
  * @brief  Callback routine of the main dialog
  * @param  pMsg: pointer to data structure of type WM_MESSAGE
  * @retval None
  */
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int Id, NCode;

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    
    frame = 0;
    hTimer = WM_CreateTimer(pMsg->hWin, 0, 50, 0);

    hItem = BUTTON_CreateEx(700, 0, 100, 100, pMsg->hWin, WM_CF_SHOW, 0, ID_BUTTON_BACK);
    WM_SetCallback(hItem, _cbButton_back);
    
    /* Initialization of 'Board*/
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_BOARD);
    TEXT_SetFont(hItem, &GUI_FontLubalGraph32B);
    TEXT_SetTextColor(hItem, GUI_STCOLOR_DARKBLUE);

    /* Initialization of 'CPU Speed : 180MHz' */
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_CPU);
    TEXT_SetFont(hItem, &GUI_FontLubalGraph32B);
    TEXT_SetTextColor(hItem, GUI_STCOLOR_DARKBLUE);

    /* Initialization of 'Firmware Version*/
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_VERSION);
    TEXT_SetFont(hItem, &GUI_FontLubalGraph32B);
    TEXT_SetTextColor(hItem, GUI_STCOLOR_DARKBLUE); 

    /* Initialization of 'Board*/
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_BOARD_1);
    TEXT_SetFont(hItem, &GUI_FontLubalGraph32B);
    TEXT_SetTextColor(hItem, GUI_STCOLOR_LIGHTBLUE);
    

    /* Initialization of 'CPU Speed : 180MHz' */
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_CPU_1);
    TEXT_SetFont(hItem, &GUI_FontLubalGraph32B);
    TEXT_SetTextColor(hItem, GUI_STCOLOR_LIGHTBLUE);

    /* Initialization of 'Firmware Version*/
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_VERSION_1);
    TEXT_SetFont(hItem, &GUI_FontLubalGraph32B);
    TEXT_SetTextColor(hItem, GUI_STCOLOR_LIGHTBLUE); 
    

    break;     


  case WM_TIMER:
    if(frame < 4)
    {
      WM_InvalidateWindow(pMsg->hWin);
      WM_RestartTimer(pMsg->Data.v, 50);
      frame++;
    }
    else
    {
      if(hTimer != 0)
      {
        WM_DeleteTimer(hTimer);
        hTimer = 0;
      }
    }
    break;
       
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);    /* Id of widget */
    NCode = pMsg->Data.v;               /* Notification code */
       
    switch(Id) {
    case ID_BUTTON_BACK:
      switch(NCode) {
      case WM_NOTIFICATION_RELEASED:
        if(hTimer != 0)
        {
          WM_DeleteTimer(hTimer);
          hTimer = 0;
        }
        GUI_EndDialog(pMsg->hWin, 0);

        break;
      }
      break;
    }
    break;
  default:
    WM_DefaultProc(pMsg);
    break;
  }    
}

/**
  * @brief  controls window Startup
  * @param  hWin: pointer to the parent handle.
  * @param  xpos: X position 
  * @param  ypos: Y position
  * @retval None
  */
static void Startup(WM_HWIN hWin, uint16_t xpos, uint16_t ypos)
{
  GUI_CreateDialogBox(_aDialog, GUI_COUNTOF(_aDialog), _cbDialog, hWin, xpos, ypos);
}

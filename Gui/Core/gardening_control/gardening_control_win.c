/**
  ******************************************************************************
  * @file    control_page.c
  * @author  Arun Johal
  * @brief   Control lights (and LCD of device)
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
#include "control_res.c"
  
/* Function Prototypes -------------------------------------------------------*/
static void Startup(WM_HWIN hWin, uint16_t xpos, uint16_t ypos);

/* Private typedef -----------------------------------------------------------*/
K_ModuleItem_Typedef control_board =
{
  5,
  "Controls",
  open_controls,
  0,
  Startup,
  NULL,
};

/* Private define(s) -----------------------------------------------------------*/
#define ID_WINDOW_0 (GUI_ID_USER + 0x00) // define screen size
#define ID_BUTTON_UPSTAIRS (GUI_ID_USER + 0x05) // define button
#define ID_BUTTON_DOWNSTAIRS (GUI_ID_USER + 0x06) // define button
#define ID_BUTTON_LCD (GUI_ID_USER + 0x07) // define button
#define ID_TEXT_UPSTAIRS (GUI_ID_USER + 0x09) // define caption
#define ID_TEXT_DOWNSTAIRS (GUI_ID_USER + 0x0C) // define caption
#define ID_TEXT_LCD (GUI_ID_USER + 0x0D) // define caption
#define ID_TEXT_TITLE (GUI_ID_USER + 0x0B) // define caption
#define ID_BUTTON_EXIT (GUI_ID_USER + 0x08) // define caption (back btn)

/* DEFINE LAYOUT ---------------------------------------------------------------*/
static const GUI_WIDGET_CREATE_INFO _aDialog[] = 
{
  { WINDOW_CreateIndirect, "", ID_WINDOW_0, 0, 0, 800, 480, 0, 0x64, 0 }, // window init
  { TEXT_CreateIndirect, "Light Controls", ID_TEXT_TITLE, 65, 30, 300, 40, 0, 0x0, 0}, // title text
  { TEXT_CreateIndirect, "Upstairs", ID_TEXT_UPSTAIRS, 75,  325,  100,  35,  0, 0x0,  0 },  // light text
  { TEXT_CreateIndirect, "Downstairs", ID_TEXT_DOWNSTAIRS, 325,  325,  150,  30,  0, 0x0,  0 },  // light text
  { TEXT_CreateIndirect, "LCD off", ID_TEXT_LCD, 605,  325,  100,  30,  0, 0x0,  0 }, // light text
};

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Paints back button
  * @param  hObj: button handle
  * @retval None
  */
static void _OnPaint_exit(BUTTON_Handle hObj) {
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
  * @brief  callback for back button
  * @param  pMsg: pointer to data structure of type WM_MESSAGE
  * @retval None
  */
static void _cbButton_exit(WM_MESSAGE * pMsg) {
  switch (pMsg->MsgId) {
    case WM_PAINT:
      _OnPaint_exit(pMsg->hWin);
      break;
    default:
      /* The original callback */
      BUTTON_Callback(pMsg);
      break;
  }
}

/**
  * @brief  Paints upstairs button
  * @param  hObj: button handle
  * @retval None
  */
static void _OnPaint_upstairs(BUTTON_Handle hObj) {
  int Index;

  GUI_SetBkColor(FRAMEWIN_GetDefaultClientColor());
  GUI_Clear();

  Index = (WIDGET_GetState(hObj) & BUTTON_STATE_PRESSED) ? 1 : 0;
  
  if(Index)
  {
    GUI_DrawBitmap(&bmdes_control_sub, 0, 10);
    Upstairs_with_UT();
  }
  else
  {
    GUI_DrawBitmap(&bmcontrol_sub, 0, -10);
  }
}

/**
  * @brief  callback for upstairs button
  * @param  pMsg: pointer to data structure of type WM_MESSAGE
  * @retval None
  */
static void _cbButton_upstairs(WM_MESSAGE * pMsg) {
  switch (pMsg->MsgId) {
    case WM_PAINT:
      _OnPaint_upstairs(pMsg->hWin);
      break;
    default:
      /* The original callback */
      BUTTON_Callback(pMsg);
      break;
  }
}

/**
  * @brief  Paints downstairs button
  * @param  hObj: button handle
  * @retval None
  */
static void _OnPaint_downstairs(BUTTON_Handle hObj) {
  int Index;

  GUI_SetBkColor(FRAMEWIN_GetDefaultClientColor());
  GUI_Clear();

  Index = (WIDGET_GetState(hObj) & BUTTON_STATE_PRESSED) ? 1 : 0;
  
  if(Index)
  {
    GUI_DrawBitmap(&bmdes_garden_sub, 0, 10);
    Downstairs_with_UT();

  }
  else
  {
    GUI_DrawBitmap(&bmgarden_sub, 0, -10);
  }
}

/**
  * @brief  callback for downstairs button
  * @param  pMsg: pointer to data structure of type WM_MESSAGE
  * @retval None
  */
static void _cbButton_downstairs(WM_MESSAGE * pMsg) {
  switch (pMsg->MsgId) {
    case WM_PAINT:
      _OnPaint_downstairs(pMsg->hWin);
      break;
    default:
      /* The original callback */
      BUTTON_Callback(pMsg);
      break;
  }
}

/**
  * @brief  Paints lcd button
  * @param  hObj: button handle
  * @retval None
  */
static void _OnPaint_lcd(BUTTON_Handle hObj) {
  int Index;

  GUI_SetBkColor(FRAMEWIN_GetDefaultClientColor());
  GUI_Clear();

  Index = (WIDGET_GetState(hObj) & BUTTON_STATE_PRESSED) ? 1 : 0;

  if(Index)
  {
    GUI_DrawBitmap(&bmdes_water_sub, 0, 10);
    TurnLCDOff_with_UT();
  }
  else
  {
    GUI_DrawBitmap(&bmwater_sub, 0, -10);
  }
}

/**
  * @brief  callback for lcd button
  * @param  pMsg: pointer to data structure of type WM_MESSAGE
  * @retval None
  */
static void _cbButton_lcd(WM_MESSAGE * pMsg) {
  switch (pMsg->MsgId) {
    case WM_PAINT:
      _OnPaint_lcd(pMsg->hWin);
      break;
    default:
      /* The original callback */
      BUTTON_Callback(pMsg);
      break;
  }
}

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
    
    hItem = BUTTON_CreateEx(700, 0, 100,100, pMsg->hWin, WM_CF_SHOW, 0, ID_BUTTON_EXIT);
    WM_SetCallback(hItem, _cbButton_exit);

    hItem = BUTTON_CreateEx(50,  150, 180, 180, pMsg->hWin, WM_CF_SHOW, 0, ID_BUTTON_UPSTAIRS);
    WM_SetCallback(hItem, _cbButton_upstairs);
      
    hItem = BUTTON_CreateEx(310, 140, 180, 180, pMsg->hWin, WM_CF_SHOW, 0, ID_BUTTON_DOWNSTAIRS);
    WM_SetCallback(hItem, _cbButton_downstairs);

    hItem = BUTTON_CreateEx(570, 140, 180,  180, pMsg->hWin, WM_CF_SHOW, 0, ID_BUTTON_LCD);
    WM_SetCallback(hItem, _cbButton_lcd);


    break;     
    
  case WM_PAINT:
    
    break;     
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);    /* Id of widget */
    NCode = pMsg->Data.v;               /* Notification code */
    
    
    switch(Id) {
    case ID_BUTTON_EXIT: 
      switch(NCode) {
      case WM_NOTIFICATION_RELEASED:
        
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
  * @brief  light controls window Startup
  * @param  hWin: pointer to the parent handle.
  * @param  xpos: X position 
  * @param  ypos: Y position
  * @retval None
  */
static void Startup(WM_HWIN hWin, uint16_t xpos, uint16_t ypos)
{

  GUI_CreateDialogBox(_aDialog, GUI_COUNTOF(_aDialog), _cbDialog, hWin, xpos, ypos);

}

/**
  * @brief  Toggle LCD power
  * @param  None
  * @retval None
  */
int TurnLCDOff(void)
{
	HAL_GPIO_WritePin( GPIOH, GPIO_PIN_7, GPIO_PIN_RESET );

	return 1;
}

/**
  * @brief  Toggle upstairs light
  * @param  None
  * @retval None
  */
int Upstairs(void){
	HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
	HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
	return 1;
}

/**
  * @brief  Toggle downstairs light
  * @param  None
  * @retval None
  */
int Downstairs(void){
	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
	HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
	return 1;
}

/**
  * @brief  Extra layer to ensure func executing desired path.
  * @param  None
  * @retval None
  */
void TurnLCDOff_with_UT(void) {
    // Call the function to be tested
    int unitTestFlag = TurnLCDOff();
    // IF FUNC DIDNT WORK PROPERLY
    if (unitTestFlag != 1) {
    	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
    }
}

/**
  * @brief  Extra layer to ensure func executing desired path.
  * @param  None
  * @retval None
  */
void Upstairs_with_UT(void) {
    // Call the function to be tested
    int unitTestFlag = Upstairs();
    // IF FUNC DIDNT WORK PROPERLY
    if (unitTestFlag != 1) {
    	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
    }
}


/**
  * @brief  Extra layer to ensure func executing desired path.
  * @param  None
  * @retval None
  */
void Downstairs_with_UT(void) {
    // Call the function to be tested
    int unitTestFlag = Downstairs();
    // IF FUNC DIDNT WORK PROPERLY
    if (unitTestFlag != 1) {
    	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
    }
}

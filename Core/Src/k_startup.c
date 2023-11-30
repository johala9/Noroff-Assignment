#include "main.h"

/**
  * @brief  Startup Animation
  * @param  None
  * @retval None
  */
void Startup_Display_Seq(void)
{
  uint32_t XPos = 170, XOffset = 10;
  const char ST_Slogan[] = "Arun's Smart Hub";
  const char *pointerToSlogan = ST_Slogan;

  GUI_SetBkColor(GUI_ORANGE);
  GUI_Clear();
  GUI_SetFont(&GUI_FontAvantGarde32);
  GUI_SetColor(GUI_BLACK);
  do{
    GUI_DispCharAt(*pointerToSlogan, XPos , 100);
    XPos += GUI_GetCharDistX(*pointerToSlogan++) + XOffset + 1;
    GUI_Delay(100);
  }
  while (*pointerToSlogan != 0);
}

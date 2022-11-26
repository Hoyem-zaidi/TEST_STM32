/**
  ******************************************************************************
  * @file    main.c
  * @author  Hoyem Zaidi
  * @brief   Memory management 
  * @version V1.0.0
  * @date    26-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
#include "led.h"

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  InputOutputConfig(GPIOA, GPIOA, PIN0,INPUT);
  GPIO_Write_Pin(GPIOA, PIN15, SET); 
  GPIO_Write_Pin(GPIOA, PIN12, SET);
  GPIO_Write_Pin(GPIOA, PIN0, SET);
  
  while (1)
  {}
}

/**************************************END OF FILE**************************************/

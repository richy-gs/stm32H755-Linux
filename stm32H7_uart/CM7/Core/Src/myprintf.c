/*
 * myprintf.c
 *
 *  Created on: Nov 7, 2024
 *      Author: roli_005
 */

#include "main.h"
#include "myprintf.h"
extern UART_HandleTypeDef huart2;
/**
  * @brief  Retargets the C library printf function to the USART.
  * @param  None
  * @retval None
  */
PUTCHAR_PROTOTYPE {
  /* write a character to the USART3 and Loop until the end of transmission*/
  HAL_UART_Transmit(&huart2, (uint8_t *)&ch, 1, HAL_MAX_DELAY);
  return ch;
}

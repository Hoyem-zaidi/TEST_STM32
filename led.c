#include "gpio.h"
#include "led.h"

void Button(uint32_t *GPIOx, uint8_t Pin)
{
  EMB_ASSERT(GPIOx == GPIOA || GPIOx == GPIOB || GPIOx == GPIOC  || GPIOx == GPIOD );
  EMB_ASSERT(Pin >= PIN0 && Pin <= PIN15);
  
  if (GPIOx == GPIOA && Pin0 == 1 )
  {
    *(GPIOx + OFFSET_ODR) |=  (PinValue<<Pin);
    else
    *(GPIOx + OFFSET_ODR) &= ~(1<<Pin);
  }
}


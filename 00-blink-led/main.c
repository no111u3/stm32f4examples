/**----------------------------------------------------------------------------
 * Author: Boris Vinogradov(nis) : no111u3@gmail.com
 * File: main.c
 * Type: C code file
 * 2012
 ----------------------------------------------------------------------------*/
#include "main.h"
/* Simple delay function */
void delay_ms(unsigned int delay) {
    volatile unsigned int delay_tick = delay * 2000;
    while (delay_tick--);
}
/* Main function */
void main(void) {
    /* enable i/o port D clocking */
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
    /* setup i/o port D to output - push/pull mode */
    LED_PORT->MODER |= GPIO_MODER_MODER12_0 | GPIO_MODER_MODER13_0 |
        GPIO_MODER_MODER14_0 | GPIO_MODER_MODER15_0;
    /* enable leds on D port */
    LED_PORT->ODR |= ALL_LEDS;
    /* infinity loop */
    while (1) {
        delay_ms(500);
        LED_PORT->ODR ^= ALL_LEDS;
    }
}
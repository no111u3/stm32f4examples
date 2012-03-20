/**----------------------------------------------------------------------------
 * Author: Boris Vinogradov(nis) : no111u3@gmail.com
 * File: main.h
 * Type: C header file
 * 2012
 ----------------------------------------------------------------------------*/
#include "stm32f4xx.h"
/* defines */
/** define led port */
#define LED_PORT GPIOD
/** define led pins */
#define LED_GREEN (1 << 12) /* port D, pin 12 */
#define LED_ORANGE (1 << 13) /* port D, pin 13 */
#define LED_RED (1 << 14) /* port D, pin 14 */
#define LED_BLUE (1 << 15) /* port D, pin 15 */
#define ALL_LEDS (LED_GREEN | LED_ORANGE | LED_BLUE | LED_RED)

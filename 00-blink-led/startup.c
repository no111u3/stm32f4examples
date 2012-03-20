/**----------------------------------------------------------------------------
 * Author: Boris Vinogradov(nis) : no111u3@gmail.com
 * File: startup.c
 * Type: C code file
 * 2012
 ----------------------------------------------------------------------------*/
#include "stm32f4xx.h"
/* external vars */
extern unsigned long _estack;
/* prototypes of functions */
main();
/* reset handler */
void reset_handler(void) {
    main();
}
/* table of Cortex vectors */
void *vector_table[] __attribute__ ((section(".vectors"))) = {
    &_estack,
    reset_handler,
};
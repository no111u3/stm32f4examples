/**----------------------------------------------------------------------------
 * Author: Boris Vinogradov(nis) : no111u3@gmail.com
 * File: stm32fxxxg_flash.ld
 * Type: linker map file
 * 2012
 ----------------------------------------------------------------------------*/

ENTRY(reset_handler)

MEMORY
{
    FLASH (rx)          : ORIGIN = 0x08000000, LENGTH = 1024K
    RAM (rxw)           : ORIGIN = 0x10000000, LENGTH = 64K
}

INCLUDE generic_sections_flash.ld
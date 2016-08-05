#include <lpc17xx.h>
#include "uart.h"

int k_uart0_puts(char *str, uint32_t len)
{
	//
}

int unart0_init(void)
{
	// Uart initilization from Usermanual page 307
	
	// Step 1: enable power to uarts, done at reset BIT 3 for uart 0
	//*PCOMP |= (*PCOMP) | (1<<3);
	
	// Step 2: Set up clock rate... I don't really care so default of CLCK/4 is fine
	
	// Step 3: Enable Divisor latches to get access to baud rate settings
	
	// Step 4: Set the baud rate... 
	
	// Step 5: Set the pin selection to TX/RX that uart 0 needs
}
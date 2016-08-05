#ifndef UART_H
#define UART_H

#include <lpc17xx.h>
#include <stdint.h>

int unart0_init(void);

int k_uart0_puts(char *str, uint32_t len);

#endif
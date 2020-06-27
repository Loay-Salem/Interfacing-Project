/*
 * Smart_home master.c
 *
 * Created: 26/06/2020 04:09:23 ص
 * Author : dell
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include "UART.h"
#include "SPI.h"
#include "STD_Types.h"
#include "CTRL.h"
int main(void)
{
	SPI_Init();
	UART_init();

    /* Replace with your application code */
    while (1) 
    {
		CTRL();
    }
}


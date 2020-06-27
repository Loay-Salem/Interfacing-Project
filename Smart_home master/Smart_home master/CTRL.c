/*
 * CTRL.c
 *
 * Created: 27/06/2020 02:03:13 ص
 *  Author: dell
 */ 
#include "STD_Types.h"
#include "UART.h"
#include "SPI.h"
volatile uint8 x;
uint8 y;
void CTRL(){
	y=UART_Rec();
	switch(y){
		case '1':
		x=SPI_Trans('1');
		UART_Str("\r\nLed 1 on\r\n");
		break;
		case '2':
		x=SPI_Trans('2');
		UART_Str("\r\nLed 2 on\r\n");
		break;
		case '3':
		x=SPI_Trans('3');
		UART_Str("\r\nLed 3 on\r\n");
		break;
		case 'a':
		x=SPI_Trans('a');
		UART_Str("\r\nLed 1 off\r\n");
		break;
		case 'b':
		x=SPI_Trans('b');
		UART_Str("\r\nLed 2 off\r\n");
		break;
		case 'c':
		x=SPI_Trans('c');
		UART_Str("\r\nLed 3 off\r\n");
		break;
		case '4':
		x=SPI_Trans('4');
		UART_Str("\r\nLamp on\r\n");
		break;
		case 'd':
		x=SPI_Trans('d');
		UART_Str("\r\nLamp off\r\n");
		break;
	}
}
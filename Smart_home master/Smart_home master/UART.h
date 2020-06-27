/*
 * UART.h
 *
 * Created: 26/06/2020 05:13:36 ص
 *  Author: dell
 */ 


#ifndef UART_H_
#define UART_H_
#include "STD_Types.h"
void UART_init();
unsigned char UART_Rec();
void UART_Send(uint8 data);
void UART_Str(char * Str);




#endif /* UART_H_ */
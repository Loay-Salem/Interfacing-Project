/*
 * UART.c
 *
 * Created: 26/06/2020 05:12:49 ص
 *  Author: dell
 */ 
#include <avr/io.h>
#include "UART.h"
#include "DIO_HW.h"
void UART_init(){
	DDRD_REG|=(1<<1);
	UBRRL_REG=103;
	UCSRB_REG=(1<<RXEN)|(1<<TXEN);
	UCSRC=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
}
unsigned char UART_Rec(){
	while(!(UCSRA_REG&(1<<RXC)));
	return UDR_REG;
}
void UART_Send(uint8 data){
	while(!(UCSRA_REG&(1<<UDRE)));
	UDR_REG=data;
}
void UART_Str(char * Str){
	uint16 i=0;
	while (Str[i]!='\0'){
		UART_Send(Str[i]);
		i++;
	}
}
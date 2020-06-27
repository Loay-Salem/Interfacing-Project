/*
 * CTRL_Response.c
 *
 * Created: 27/06/2020 02:09:14 ص
 *  Author: dell
 */ 
#include "STD_Types.h"
#include "DIO_HW.h"
#include "SPI.h"
   uint8 x=0;
void CTRL_Response(){
			x=SPI_Trans(0x55);
			switch (x){
				case '1':
				PORTC_REG|=(1<<0);
				break;
				case '2':
				PORTC_REG|=(1<<4);
				break;
				case '3':
				PORTC_REG|=(1<<7);
				break;
				case 'a':
				PORTC_REG&=~(1<<0);
				break;
				case 'b':
				PORTC_REG&=~(1<<4);
				break;
				case 'c':
				PORTC_REG&=~(1<<7);
				break;
				break;
				case '4':
				PORTD_REG|=(1<<2);
				break;
				case 'd':
				PORTD_REG&=~(1<<2);
				break;
			}
}
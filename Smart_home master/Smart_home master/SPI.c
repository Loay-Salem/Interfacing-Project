/*
 * SPI.c
 *
 * Created: 26/06/2020 05:14:49 ص
 *  Author: dell
 */ 
#include <avr/io.h>
#include "STD_Types.h"
#include "DIO_HW.h"
void SPI_Init(){
	DDRC_REG|=(1<<0);
	DDRB_REG=(1<<5)|(1<<7);
	SPCR_REG=(1<<SPE)|(1<<MSTR)|(1<<SPR0);
}
unsigned char SPI_Trans(uint8 data){
	PORTC_REG&=~(1<<0);
	SPDR_REG=data;
	while(!(SPSR_REG&(1<<SPIF)));
	PORTC_REG|=(1<<0);
	return SPDR_REG;
}
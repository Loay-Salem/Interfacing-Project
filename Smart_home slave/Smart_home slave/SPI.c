/*
 * SPI.c
 *
 * Created: 26/06/2020 05:10:42 ص
 *  Author: dell
 */ 
#include <avr/io.h>
#include "DIO_HW.h"
#include "STD_Types.h"
void SPI_Init(){
	DDRB_REG=(1<<6);
	SPCR_REG=(1<<SPE);
}
unsigned char SPI_Trans(uint8 data){

	SPDR_REG=data;
	while(!(SPSR_REG&(1<<SPIF)));
	return SPDR_REG;

}
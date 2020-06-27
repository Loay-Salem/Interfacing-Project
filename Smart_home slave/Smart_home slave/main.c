/*
 * Smart_home slave.c
 *
 * Created: 26/06/2020 04:36:21 ص
 * Author : dell
 */ 
#define  F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include "SPI.h"
#include "DIO_HW.h"
#include "STD_Types.h"
#include "CTRL_Response.h"
int main(void)
{
	SPI_Init();
    DDRC_REG=(1<<0)|(1<<4)|(1<<7);
	DDRD_REG|=(1<<2);
	while (1) 
    {
		CTRL_Response();
	}
}


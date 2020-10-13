/*	Author: hao
 *  Partner(s) Name: Yihua Hao
 *	Lab Section: 023
 *	Assignment: Lab 2  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRB = 0xFF;
        DDRA = 0x00;
        PORTA = 0xFF;
	PORTB = 0x00;
        unsigned char temp_input = 0x00;
    /* Insert your solution below */
    while (1) {
	temp_input = PINA;
         PORTB = temp_input;
    }
    return 1;
}

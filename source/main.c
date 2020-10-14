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
        unsigned char tmpB = 0x00;
	unsigned char tmpA = 0x00;
    /* Insert your solution below */
    while (1) {
// 1) Read input
		tmpA = PINA & 0x01;
 		// 2) Perform computation
 		//if PA0 is 1, set PB1PB0 = 01, else = 10
 		if (tmpA == 0x01) { // True if PA0 is 1
			tmpB = (tmpB & 0xFC) | 0x01; // Sets tmpB to bbbbbb01
						// (clear rightmost 2 bits, then set to 01)
		 } else {												 					tmpB = (tmpB & 0xFC) | 0x02; // Sets tmpB to bbbbbb10					 												 // (clear rightmost 2 bits, then set to 10)
	 	}		 												 			// 3) Write output
		PORTB = tmpB;	
		}
		return 0;
	}

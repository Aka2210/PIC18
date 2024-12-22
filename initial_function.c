/*
 * File:   initial_function.c
 * Author: qoo09
 *
 * Created on 2024?12?22?, ?? 9:12
 */


#include <xc.h>

void init(void) {
    interrupt_init();
    pwm_init();
    timer_init();
}

void interrupt_init(void) {
    TRISBbits.RB0 = 1;
    RCONbits.IPEN = 1; //INT priority enable
    INTCONbits.GIE = 1; //General INT enable
    INTCONbits.PEIE = 1;
    INTCONbits.INT0IF = 0; //Clear INT0 flag
    INTCONbits.INT0IE = 1; //Enable INT0 INT
    INTCON2bits.INTEDG0 = 0; //Falling edge trigger for INT0
}

void pwm_init(void) {
    
}

void timer_init(void) {
    
}

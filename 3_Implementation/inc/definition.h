/**
 * @file definition.h
 * @author Sudhan
 * @brief 
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef DEFINITION_H_
    #define DEFINITION_H_
#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#define R1 PB0
#define Y1 PB1
#define G1 PB2

#define R2 PB3
#define Y2 PB4
#define G2 PB5

#define R3 PD5
#define Y3 PD4
#define G3 PD3

#define R4 PD2
#define Y4 PD1
#define G4 PD0
#endif
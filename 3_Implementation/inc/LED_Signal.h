#ifndef LED_Signal_H_
#define LED_Signal_H_

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
/**
 * @file LED_Signal.h
 * @author Sudhan
 * @brief 
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)   
#define LED_PIN  (PORTB1)  

#include <avr/io.h>

#endif 
/*
 * main.cpp
 *
 *  Created on: Feb 16, 2023
 *      Author: david
 */

#include "main.h"
#include "stdint.h"
#include "WS2812/WS2812.h"

uint32_t sysTickCntr = 0;
WS2812 led;

int maincpp(){
	LL_SYSTICK_EnableIT();

	led.start();

	while(true){

	}
}





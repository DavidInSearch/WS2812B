/*
 * WS2812.cpp
 *
 *  Created on: Feb 16, 2023
 *      Author: david
 */

#include "WS2812.h"
#include "string.h"
#include "stdlib.h"
#include "stdint.h"

WS2812::WS2812(){}
WS2812::~WS2812(){}

void WS2812::init(){
}

void WS2812::start(){
	buffer[0] = buffer[1] = buffer[2] = 26;
	HAL_TIM_PWM_Start_DMA(&htim2, TIM_CHANNEL_1, (uint32_t*)buffer, 1);
}

/*
 * WS2812.h
 *
 *  Created on: Feb 16, 2023
 *      Author: david
 */

#ifndef WS2812_WS2812_H_
#define WS2812_WS2812_H_

#include "main.h"
#include "string.h"
#include "stdlib.h"
#include "stdint.h"


#define DELAY_LEN	48
#define LED_COUNT 	144
#define ARRAY_LEN DELAY_LEN + LED_COUNT*24

class WS2812 {
private:
	uint16_t buffer[ARRAY_LEN] = {0};
public:
	WS2812();
	~WS2812();

	void init();
	void start();
};



#endif /* WS2812_WS2812_H_ */

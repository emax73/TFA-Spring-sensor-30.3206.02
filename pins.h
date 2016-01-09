#ifndef __PINS_H
#define __PINS_H

#include "stdint.h"
#include "stm32f4xx.h"

typedef const struct {
	GPIO_TypeDef* port;
	uint16_t pin;
} pin_t;

#define pinSet(p) ((p).port->BSRR = (p).pin)			
#define pinReset(p) ((p).port->BSRR = (p).pin << 16)			
#define pinToggle(p) ((p).port->ODR ^= (p).pin)			
#define pinRead(p) (((p).port->IDR & (p).pin) != 0)
#define pinWrite(p, x) ((x)?((p).port->BSRR = (p).pin):((p).port->BSRR = (p).pin << 16))

#endif

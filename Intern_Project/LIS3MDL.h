#include "stm32l053xx.h"

#ifndef LIS3MDL_H
#define LIS3MDL_H

extern uint8_t LIS3MDL_Init(void);
extern void LIS3MDL_Configuration(void);
extern float LIS2MDL_X_Read(void);
extern float LIS2MDL_Y_Read(void);
extern float LIS2MDL_Z_Read(void);

#endif
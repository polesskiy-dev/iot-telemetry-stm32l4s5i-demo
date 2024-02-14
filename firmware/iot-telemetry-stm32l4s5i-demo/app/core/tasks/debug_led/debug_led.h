#ifndef DEBUG_LED_H
#define DEBUG_LED_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cmsis_os2.h"
#include "FreeRTOS.h"
#include "main.h"
#include "stm32l4xx_hal.h"

void debugLedTask(void *argument);

#ifdef __cplusplus
}
#endif

#endif //DEBUG_LED_H

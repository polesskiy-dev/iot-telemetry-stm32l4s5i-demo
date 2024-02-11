#include "debug_led.h"

#define BLINK_PERIOD_MS 1000

void debugLedTask(void *argument) {
  (void)argument; // Avoid unused parameter warning

  /* init functions call here */
  HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);

  for (;;) {
    // Toggle LED
    HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);

    // Delay for a period
//    vTaskDelay(pdMS_TO_TICKS(BLINK_PERIOD_MS));
    vTaskDelay(BLINK_PERIOD_MS);
  }
};

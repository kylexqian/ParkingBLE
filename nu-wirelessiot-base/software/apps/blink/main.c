// Blink app
//
// Blinks an LED

#include <stdbool.h>
#include <stdint.h>
#include "nrf.h"
#include "nrf_delay.h"
#include "nrf_gpio.h"

// Pin configurations
#include "nrf52840dk.h"

int main(void) {

  // Initialize.
  nrf_gpio_cfg_output(LED1);

  // Enter main loop.
  while (1) {
    nrf_gpio_pin_toggle(LED1);
    nrf_delay_ms(500);
  }
}


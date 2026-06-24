
#include "hardware/watchdog.h"
#include "pico/stdlib.h"

int main() {
  gpio_init(12);
  gpio_set_dir(12, GPIO_OUT);

  // Blink LED 10 times
  for (int i = 0; i < 25; i++) {
    gpio_put(12, 1);
    sleep_ms(50);
    gpio_put(12, 0);
    sleep_ms(50);
  }

  // // Example to enter picoboot3 from your application without holding BOOTSEL3 pin
  // watchdog_hw->scratch[0] = 1;  // Notify picoboot3 to enter bootloader mode
  // watchdog_reboot(0, 0, 10);    // Reoot by watchdog timeout
  // while (1) {
  //   continue;
  // }
}
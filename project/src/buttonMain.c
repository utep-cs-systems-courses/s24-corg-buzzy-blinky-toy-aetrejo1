#inlcude <msp430.h>
#include "libTimer.h"
#include "led.h"
#inlcude "switches.h"
#include "buzzer.h"


void main (void) {
  configureClocks();
  switch_init();
  led_init();
  buzzer_init();

  or_sr(0x18);
}

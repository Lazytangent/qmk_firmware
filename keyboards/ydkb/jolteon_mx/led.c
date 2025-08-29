/*
Copyright 2023 YANG

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "hal.h"
#include "ch.h"
#include "led.h"
#include "rgblight.h"

#include "print.h"
#include "stdint.h"
#include "quantum.h"

#define RGBLED_NUM RGBLIGHT_LED_COUNT

static LED_TYPE INDICATOR_COLOR_LED1 = {.r = 64, .g = 0,   .b = 64 };
static LED_TYPE RGBLIGHT_COLOR_OFF   = {.r = 0, .g = 0,   .b = 0   };
uint8_t indicator_state = 0;

#define INDICATOR_NUM 1
LED_TYPE rgbled[INDICATOR_NUM+RGBLED_NUM];

void rgblight_call_driver(LED_TYPE *start_led, uint8_t num_leds) {
    // keep indicator color
    if (indicator_state) {
        rgbled[0] = INDICATOR_COLOR_LED1;
    } else {
        rgbled[0] = RGBLIGHT_COLOR_OFF;
    }
    memcpy(&rgbled[INDICATOR_NUM], start_led, RGBLED_NUM*3);
}

void led_set_user(uint8_t usb_led)
{
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        indicator_state = 1;
    } else {
        indicator_state = 0;
    }
    rgblight_set();
}

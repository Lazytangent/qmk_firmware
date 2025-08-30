/*
Copyright 2023 YANG <drk@live.com>

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

#ifndef DEBOUNCE_PK_H
#define DEBOUNCE_PK_H

#include <stdbool.h>
#include "print.h"
#ifdef __AVR__
#include "avr_config.h"
#endif

#ifndef DEBOUNCE_DN
#define DEBOUNCE_DN 5
#endif

#ifndef DEBOUNCE_NK
#define DEBOUNCE_NK 1
#endif

#ifndef DEBOUNCE_UP
#define DEBOUNCE_UP 5
#endif

#ifndef DOUBLE_CLICK_FIX_DELAY //default 10
#define DOUBLE_CLICK_FIX_DELAY 10
#endif

#if (DEBOUNCE_DN < 8) && (DEBOUNCE_NK < 8) && (DEBOUNCE_UP < 8)
#define DEBOUNCE_DN_MASK (uint8_t)(~(0x80 >> DEBOUNCE_DN))
#define DEBOUNCE_NK_MASK (uint8_t)(~(0x80 >> DEBOUNCE_NK))
#define DEBOUNCE_UP_MASK (uint8_t)(0x80 >> DEBOUNCE_UP)
#else
#error "DEBOUNCE VALUE must not exceed 7"
#endif
/*
#ifndef DEBOUNCE16_DN
#define DEBOUNCE16_DN DEBOUNCE_DN
#endif

#ifndef DEBOUNCE16_NK
#define DEBOUNCE16_NK DEBOUNCE_NK
#endif

#ifndef DEBOUNCE16_UP
#define DEBOUNCE16_UP DEBOUNCE_UP
#endif

#if (DEBOUNCE16_DN < 16) && (DEBOUNCE16_NK < 16) && (DEBOUNCE16_UP < 16)
#define DEBOUNCE16_DN_MASK (uint16_t)(~(0x8000 >> DEBOUNCE16_DN))
#define DEBOUNCE16_NK_MASK (uint16_t)(~(0x8000 >> DEBOUNCE16_NK))
#define DEBOUNCE16_UP_MASK (uint16_t)(0x8000 >> DEBOUNCE16_UP)
#else
#error "DEBOUNCE16 VALUE must not exceed 15"
#endif
*/

#endif

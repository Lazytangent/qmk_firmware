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
#pragma once

#include <stdint.h>
#include <stdbool.h>

extern uint8_t ec_actuation_point[MATRIX_ROWS][MATRIX_COLS];
extern uint8_t ec_key_value[MATRIX_ROWS][MATRIX_COLS];
extern uint8_t keys_down_row[MATRIX_ROWS];

void ec_matrix_init(void);
void ec_matrix_print(void);
void ec_select_col(uint8_t col);
uint8_t ec_get_key(uint8_t row, uint8_t col);

#ifndef VALID_EC_CHECK_MIN
#define VALID_EC_CHECK_MIN 5
#endif
#ifndef VALID_EC_INIT_MIN
#define VALID_EC_INIT_MIN 16
#endif
#ifndef VALID_EC_INIT_MAX
#define VALID_EC_INIT_MAX 60
#endif

#ifndef EC_ACTIVE_OFFSET
#define EC_ACTIVE_OFFSET 25
#endif
#ifndef EC_RESET_OFFSET
#define EC_RESET_OFFSET 5
#endif

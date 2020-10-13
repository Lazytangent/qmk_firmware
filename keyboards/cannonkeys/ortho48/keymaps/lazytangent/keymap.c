/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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
#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _DVORAK 1
#define _COLEMAK 2
#define _LOWER 3
#define _RAISE 4
#define _NUM 5
#define _CHEESE 6

/* enum layers {                Unable to use enum for layers on cannonkeys/ortho48 because of size restrictions
  _BASE = SAFE_RANGE,1
  _LOWER,
  _RAISE,
  _NUM,
  _CHEESE
}; */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Alt | GUI  | Num  |Lower |Space | Bksp |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,    KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,    KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,    KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LALT, KC_LGUI, MO(5),   MO(3), KC_SPC, KC_BSPC, MO(4), KC_BSPC, KC_DEL,  KC_UP,   KC_ENT
),

/* DVORAK
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   '  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Bspc |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  -   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Num  | Ctrl | Alt  | GUI  |Lower |Space | Bksp |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_ortho_4x12(
    KC_ESC,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,  KC_Y,   KC_F,    KC_G,  KC_C,    KC_R,    KC_L,  KC_BSPC,
    KC_TAB,  KC_A,    KC_O,    KC_E,    KC_U,  KC_I,   KC_D,    KC_H,  KC_T,    KC_N,    KC_S,  KC_MINS,
    KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,  KC_X,   KC_B,    KC_M,  KC_W,    KC_V,    KC_Z,  KC_ENT,
    MO(5),   KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_BSPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
),

/* COLEMAK
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Bspc |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Num  | Ctrl | Alt  | GUI  |Lower |Space | Bksp |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_ortho_4x12(
    KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,  KC_G,   KC_J,    KC_L,  KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
    KC_TAB,  KC_A,    KC_R,    KC_S,    KC_T,  KC_D,   KC_H,    KC_N,  KC_E,    KC_I,    KC_O,    KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_K,    KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    MO(5),   KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_BSPC, MO(4), KC_BSPC, KC_DEL,  KC_UP,   KC_ENT
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |      |      |      |  (   |   )  |   _  |   -  |   =  |   +  |   \  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |  {   |   }  |  [   |   ]  |   <  |   >  |   ?  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |AltF4 |Gui(D)|      |             |      | Home | PgDn | PgUp | End  |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_4x12(
    KC_GRV,  KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_TAB,  _______, _______,  _______, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_BSLS, KC_PIPE,
    _______, _______, _______,  _______, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_LT,   KC_GT,   KC_QUES, KC_ENT,
    _______, _______, A(KC_F4), G(KC_D), _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bspc |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |      |      |      |      |      |      | Left | Down |  Up  | Right|      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | Home | PgDn | PgUp | End  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |BriDn |BriUp |Cheese|
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_4x12(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    KC_DEL,  _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_ENT,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BRID, KC_BRIU, MO(_CHEESE)
),

/* Num -- Numpad Layer
 * ,-----------------------------------------------------------------------------------.
 * |      |QWERTY|DVORAK|COLEMK|      |      |NUM_7 |NUM_8 |NUM_9 |NUM_/ |NUM_- | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |NUM_4 |NUM_5 |NUM_6 |NUM_* |NUM_+ |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |NUM_0 |NUM_1 |NUM_2 |NUM_3 |NUM_. |NUM_= |nEnter|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |Dsk_Dn|Dsk_Up|      |
 * `-----------------------------------------------------------------------------------'
 */
[_NUM] = LAYOUT_ortho_4x12(
    _______, DF(0),   DF(1),   DF(2),   _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_PMNS, KC_BSPC,
    _______, _______, _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_PPLS, _______,
    _______, _______, _______, _______, _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_PEQL, KC_PENT,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, LCA(KC_DOWN), LCA(KC_UP), _______
),

/* Cheese --
 * ,-----------------------------------------------------------------------------------.
 * |      | F1   | F2   | F3   | F4   |      |      | F13  | F14  | F15  | F16  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      | F5   | F6   | F7   | F8   |      |      | F17  | F18  | F19  | F20  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | F9   | F10  | F11  | F12  |      |      | F21  | F22  | F23  | F24  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_CHEESE] = LAYOUT_ortho_4x12(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, _______, KC_F13,  KC_F14,  KC_F15,  KC_F16,  _______,
    _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, _______, KC_F17,  KC_F18,  KC_F19,  KC_F20,  _______,
    _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_F21,  KC_F22,  KC_F23,  KC_F24,  _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),
};

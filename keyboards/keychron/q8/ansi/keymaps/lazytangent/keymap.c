/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ansi_69(
        KC_GRV,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_ESC,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_LCTL, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LOPT,  KC_LCMD,           MO(2),            KC_SPC,   MO(3),            KC_BSPC,           KC_RCMD,            KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT_ansi_69(
        KC_GRV,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_ESC,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_LCTL, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN,  KC_LALT,           MO(2),            KC_SPC,   MO(3),            KC_BSPC,           KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [2] = LAYOUT_ansi_69(
        KC_GRV,  KC_EXLM,  KC_AT,    KC_HASH, KC_DLR,  KC_PERC, KC_CIRC,  KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_UNDS,  KC_PLUS,  _______,          QK_BOOT,
        _______, KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     _______,  _______,  _______,          _______,
        _______, KC_GRV,   KC_TILD,  KC_BSLS, KC_LPRN, KC_RPRN,           KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS,  KC_COLN,  KC_DQUO,  _______,          _______,
        _______,           _______,  _______, KC_PIPE, KC_LCBR, KC_RCBR,  _______, KC_LBRC, KC_RBRC, KC_LT,    KC_GT,    _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  MO(4),            _______,           _______,            _______, _______, _______
    ),

    [3] = LAYOUT_ansi_69(
        KC_GRV,  KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,          _______,
        _______, KC_EXLM,  KC_AT,    KC_HASH, KC_DLR,  KC_PERC, KC_CIRC,  KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_UNDS,  KC_PLUS,  _______,          _______,
        _______, RGB_RMOD, RGB_VAD,  RGB_HUD, RGB_SAD, RGB_SPD,           KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           MO(4),            _______,  _______,          _______,           _______,            _______, _______, _______
    ),

    [4] = LAYOUT_ansi_69(
        KC_TILD, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,          _______,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RGB_RMOD, RGB_VAD,  RGB_HUD, RGB_SAD, RGB_SPD,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______
    )
};

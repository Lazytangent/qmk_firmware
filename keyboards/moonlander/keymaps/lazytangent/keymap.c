/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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
#include "version.h"

enum custom_keycodes {
    VRSN = ML_SAFE_RANGE,
    KC_MC, // Misson Control
    KC_LP, // Launchpad
    KC_ULT, // Super + Opt + Ctrl

    LEFT, // Ctrl + Opt + Left
    DOWN, // Ctrl + Opt + Down
    UP, // Ctrl + Opt + Up
    RIGHT, // Ctrl + Opt + Right

    U_LEFT, // Super + Opt + Ctrl + Left
    U_DOWN, // Super + Opt + Ctrl + Down
    U_UP, // Super + Opt + Ctrl + Up
    U_RIGHT, // Super + Opt + Ctrl + Right

    QUAD_U,
    QUAD_I,
    QUAD_J,
    QUAD_K,

    MAX,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_ESC,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_BSLS,           KC_DEL,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,           KC_RBRC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LALT, KC_MEH,A(KC_LCTL),KC_LGUI, MO(1),           G(KC_SPC),          KC_ESC,           MO(2),   MO(1),   KC_MEH,  KC_ULT,  KC_RALT,
                                            KC_SPC,  MO(2),   KC_MC,             KC_MC,   KC_ENT,  KC_BSPC
    ),

    [1] = LAYOUT_moonlander(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______,           _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_PIPE,           _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, KC_GRV,  KC_TILD, KC_BSLS, KC_LPRN, KC_RPRN, KC_LCBR,           KC_RCBR, KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_COLN, KC_DQUO,
        KC_MEH,  _______, _______, KC_PIPE, KC_LCBR, KC_RCBR,                             KC_LBRC, KC_RBRC, KC_LT,   KC_GT,   KC_QUES, _______,
        TG(4),   _______, _______, _______, _______,          _______,           _______,          MO(3),   _______, _______, _______, _______,
                                            _______, MO(3),   KC_LP,             _______, _______, KC_DEL
    ),

    [2] = LAYOUT_moonlander(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,             KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  RESET,
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______,           _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        MO(4),   KC_GRV,  KC_TILD, KC_BSLS, _______, _______, _______,           _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, LEFT,    DOWN,    UP,      RIGHT,   MAX,                                 LEFT,    DOWN,    UP,      RIGHT,   _______, _______,
        _______, _______, _______, _______, MO(3),            _______,           _______,          _______, MO(3),   _______, _______, _______,
                                            _______, _______, _______,           _______, _______, _______
    ),

    [3] = LAYOUT_moonlander(
        LED_LEVEL,KC_F13, KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,            KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  RESET,
        VRSN,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,             KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD, RGB_SPI, _______,           _______, U_LEFT,  U_DOWN,  U_UP,    U_RIGHT, _______, _______,
        _______, RGB_HUD, RGB_SAD, RGB_VAD,RGB_RMOD, RGB_SPD,                             _______, _______, _______, _______, _______, _______,
        EEP_RST, _______, _______, _______, _______,          _______,           MO(4),            _______, _______, _______, _______, _______,
                                            _______, _______, _______,           _______, _______, _______
    ),

    [4] = LAYOUT_moonlander(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_ESC,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC,
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_BSLS,           KC_DEL,  KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
        KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_LBRC,           KC_RBRC, KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,
        KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,                                KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,
        KC_LALT, KC_MEH,A(KC_LCTL),KC_LGUI, MO(1),           G(KC_SPC),          KC_ESC,           MO(2),   MO(1),   KC_MEH,  KC_ULT,  KC_RALT,
                                            KC_SPC,  MO(2),   KC_MC,             KC_MC,   KC_ENT,  KC_BSPC
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case VRSN:
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
                return false;
            case KC_MC:
                host_consumer_send(0x29F);
                return false;
            case KC_LP:
                host_consumer_send(0x2A0);
                return false;
            case KC_ULT:
                register_code(KC_LCTL);
                register_code(KC_LALT);
                register_code(KC_LGUI);
                return false;
            case LEFT:
                register_code16(LCA(KC_LEFT));
                return false;
            case DOWN:
                register_code16(LCA(KC_DOWN));
                return false;
            case UP:
                register_code16(LCA(KC_UP));
                return false;
            case RIGHT:
                register_code16(LCA(KC_RIGHT));
                return false;
            case U_LEFT:
                register_code16(LCAG(KC_LEFT));
                return false;
            case U_DOWN:
                register_code16(LCAG(KC_DOWN));
                return false;
            case U_UP:
                register_code16(LCAG(KC_UP));
                return false;
            case U_RIGHT:
                register_code16(LCAG(KC_RIGHT));
                return false;
            case QUAD_U:
                register_code16(LCA(KC_U));
                return false;
            case QUAD_I:
                register_code16(LCA(KC_I));
                return false;
            case QUAD_J:
                register_code16(LCA(KC_J));
                return false;
            case QUAD_K:
                register_code16(LCA(KC_K));
                return false;
            case MAX:
                register_code16(LCA(KC_ENT));
                return false;
        }
    } else {
        switch (keycode) {
            case KC_MC:
                host_consumer_send(0);
                return false;
            case KC_LP:
                host_consumer_send(0);
                return false;
            case KC_ULT:
                unregister_code(KC_LGUI);
                unregister_code(KC_LALT);
                unregister_code(KC_LCTL);
                return false;
            case LEFT:
                unregister_code16(LCA(KC_LEFT));
                return false;
            case DOWN:
                unregister_code16(LCA(KC_DOWN));
                return false;
            case UP:
                unregister_code16(LCA(KC_UP));
                return false;
            case RIGHT:
                unregister_code16(LCA(KC_RIGHT));
                return false;
            case U_LEFT:
                unregister_code16(LCAG(KC_LEFT));
                return false;
            case U_DOWN:
                unregister_code16(LCAG(KC_DOWN));
                return false;
            case U_UP:
                unregister_code16(LCAG(KC_UP));
                return false;
            case U_RIGHT:
                unregister_code16(LCAG(KC_RIGHT));
                return false;
            case QUAD_U:
                unregister_code16(LCA(KC_U));
                return false;
            case QUAD_I:
                unregister_code16(LCA(KC_I));
                return false;
            case QUAD_J:
                unregister_code16(LCA(KC_J));
                return false;
            case QUAD_K:
                unregister_code16(LCA(KC_K));
                return false;
            case MAX:
                unregister_code16(LCA(KC_ENT));
                return false;
        }
    }
    return true;
}

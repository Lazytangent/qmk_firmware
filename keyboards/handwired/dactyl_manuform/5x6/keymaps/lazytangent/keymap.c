#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_5x6(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                          KC_LBRC, KC_RBRC,                                                        KC_MINS, KC_EQL,
                                                     MO(1),   KC_SPC,   KC_ENT,  MO(2),
                                                     KC_TAB,  KC_ESC,   KC_BSPC, KC_DEL,
                                                     KC_LGUI, KC_LALT,  KC_LGUI, KC_LALT
    ),

    [1] = LAYOUT_5x6(
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, KC_GRV,  KC_TILD, KC_BSLS, KC_LPRN, KC_RPRN,                    KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_COLN, KC_DQUO,
        _______, _______, _______, KC_PIPE, KC_LCBR, KC_RCBR,                    KC_LBCR, KC_RBRC, KC_LT,   KC_GT,   KC_QUES, _______,
                          _______, _______,                                                        _______, _______,
                                                     _______, _______,  _______, _______,
                                                     _______, _______,  _______, _______,
                                                     _______, _______,  _______, _______

    ),

    [2] = LAYOUT_5x6(
        KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______, _______, _______, _______, _______, KC_LBRC,                    _______, _______, _______, _______, _______, _______,
        _______, KC_LEFT, KC_UP  , KC_DOWN, KC_RGHT, KC_LPRN,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
                          _______, _______,                                                        _______, _______,
                                                     _______, _______,  _______, _______,
                                                     _______, _______,  _______, _______,
                                                     _______, _______,  _______, _______
    )
};

/* [n] = LAYOUT_5x6( */
/*     _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, */
/*     _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, */
/*     _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, */
/*     _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, */
/*                       _______, _______,                                                        _______, _______, */
/*                                                  _______, _______,  _______, _______, */
/*                                                  _______, _______,  _______, _______, */
/*                                                  _______, _______,  _______, _______ */
/* ) */

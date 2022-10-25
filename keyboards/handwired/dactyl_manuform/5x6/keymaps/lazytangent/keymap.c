#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_5x6(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                          KC_LBRC, KC_RBRC,                                                        KC_MINS, KC_EQL,
                                                     KC_LBRC, MO(2),    MO(3),   KC_RBRC,
                                                     KC_LCTL, KC_SPC,   KC_ENT,  KC_BSPC,
                                                     KC_LALT, KC_LGUI,  KC_LCTL, KC_RGUI
    ),

    [1] = LAYOUT_5x6(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                       KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
        KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                       KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,
        KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,                       KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,
                          KC_LBRC, KC_RBRC,                                                        KC_EQL,  KC_BSLS,
                                                     KC_LBRC, MO(2),    MO(3),   KC_RBRC,
                                                     KC_LCTL, KC_SPC,   KC_ENT,  KC_BSPC,
                                                     KC_LALT, KC_LGUI,  KC_LCTL, KC_RGUI
    ),

    [2] = LAYOUT_5x6(
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_ESC,
        _______, KC_GRV,  KC_TILD, KC_BSLS, KC_LPRN, KC_RPRN,                    KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_COLN, KC_DQUO,
        TG(1),   _______, _______, KC_PIPE, KC_LCBR, KC_RCBR,                    KC_LCBR, KC_RBRC, KC_LT,   KC_GT,   KC_QUES, _______,
                          _______, MO(4),                                                          KC_BSLS, KC_PIPE,
                                                     _______, _______,  _______, _______,
                                                     _______, _______,  _______, _______,
                                                     _______, _______,  _______, _______

    ),

    [3] = LAYOUT_5x6(
        KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______, KC_GRV,  KC_TILD, KC_BSLS, KC_LPRN, KC_RPRN,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, _______, KC_PIPE, KC_LCBR, KC_RCBR,                    _______, _______, _______, _______, _______, _______,
                          _______, _______,                                                        _______, _______,
                                                     _______, _______,  _______, _______,
                                                     _______, KC_LEAD,  _______, _______,
                                                     _______, _______,  _______, _______
    ),

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

LEADER_EXTERNS();

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
        leading = false;
        leader_end();

        SEQ_ONE_KEY(KC_T) {
            SEND_STRING(SS_TAP(X_F19));
        }
        SEQ_ONE_KEY(KC_R) {
            SEND_STRING(SS_TAP(X_F18));
        }
        SEQ_ONE_KEY(KC_A) {
            SEND_STRING(SS_TAP(X_F17));
        }

        SEQ_ONE_KEY(KC_LEFT) {
            SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)));
        }
        SEQ_ONE_KEY(KC_RGHT) {
            SEND_STRING(SS_LCTL(SS_TAP(X_RGHT)));
        }

        SEQ_ONE_KEY(KC_H) {
            SEND_STRING(SS_LALT("h"));
        }
        SEQ_ONE_KEY(KC_J) {
            SEND_STRING(SS_LALT("j"));
        }
        SEQ_ONE_KEY(KC_K) {
            SEND_STRING(SS_LALT("k"));
        }
        SEQ_ONE_KEY(KC_L) {
            SEND_STRING(SS_LALT("l"));
        }
    }
}

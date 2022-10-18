#include QMK_KEYBOARD_H
#include "keymap.h"
#include "leader.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

  [0] = LAYOUT(
    KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    KC_LCTRL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_LBRC,  KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                               KC_LALT, KC_LGUI, MO(2), KC_SPC,   KC_ENT,  MO(3),   KC_BSPC, KC_RGUI
  ),

  [1] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                      KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
    KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                      KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,
    KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_LBRC, KC_RBRC, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,
                               KC_LALT, KC_LGUI, MO(2),   KC_SPC,  KC_ENT,  MO(3),   KC_BSPC, KC_RGUI
  ),

  [2] = LAYOUT(
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PIPE,
    KC_ESC,  KC_GRV,  KC_TILD, KC_BSLS, KC_LPRN, KC_RPRN,                   KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_COLN, KC_DQUO,
    _______, _______, _______, KC_PIPE, KC_LCBR, KC_RCBR, _______, _______, KC_LBRC, KC_RBRC, KC_LT,   KC_GT,   KC_QUES, _______,
                               TG(1),   _______, _______, _______, _______, _______, KC_DEL,  _______
  ),

  [3] = LAYOUT(
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
  KC_LCTL, KC_GRV,  KC_TILD, _______, _______, _______,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, KC_DQUO,
  KC_LSFT, KC_F19,  _______, _______, _______, _______,  _______, _______,  _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______,
                             _______, _______, _______,  KC_LEAD, _______,  _______, KC_DEL,  _______
  ),
};

 /* [n] = LAYOUT( */
 /*  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, */
 /*  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, */
 /*  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, */
 /*  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, */
 /*                             _______, _______, _______, _______, _______, _______, _______, _______ */
/* ), */

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}

void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_keyboard=true;
}

// vim: sts=2 tw=2

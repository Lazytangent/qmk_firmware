#include QMK_KEYBOARD_H

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

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

const char *read_leader_state(void);
void set_leader_state(bool leader_state);
char wpm_str[10];

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_set_cursor(0,0); {
      oled_write_ln("lazytangent", false);
    }
    oled_set_cursor(0,1); {
      oled_write_ln(read_layer_state(), false);
    }
    oled_set_cursor(0,2); {
      oled_write_ln(read_keylog(), false);
    }
    oled_set_cursor(0,3); {
      oled_write_ln(read_leader_state(), false);
    }
  } else {
    oled_set_cursor(0,0); {
      sprintf(wpm_str, "WPM: %03d", get_current_wpm());
      oled_write(wpm_str, false);
    }
  }
  return false;
}
#endif // OLED_ENABLE

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

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leader_start();
    leading = false;

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

    SEQ_ONE_KEY(KC_TAB) {
      SEND_STRING(SS_LCTL(SS_TAP(X_TAB)));
    }

    leader_end();
  }
}

#ifdef OLED_ENABLE
void leader_start(void) {
  set_leader_state(true);
}

void leader_end(void) {
  set_leader_state(false);
}
#endif

// vim: sts=2 tw=2

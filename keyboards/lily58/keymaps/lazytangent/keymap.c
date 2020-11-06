#include QMK_KEYBOARD_H
#include "keyDefinitions.h"

#ifdef OLED_DRIVER_ENABLE
  #include "ssd1306.h"
#endif

extern uint8_t is_master;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| LIFT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT( \
  KC_TAB,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV, \
  KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_LBRC, KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
                             KC_LALT, KC_LGUI, LOWER, KC_SPC,  KC_ENT,   RAISE,   KC_BSPC, LIFT \
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  |  ~   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  |   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |  `   |   ~  | Tab  |  (   |   )  |-------.    ,-------|  _   |   -  |   =  |   +  |  :   |  "   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |  {   |   }  |-------|    |-------|  [   |   ]  |   <  |   >  |  ?   |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE | Del  | LIFT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT( \
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,\
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PIPE, \
  KC_ESC,  KC_GRV,  KC_TILD, KC_TAB,  KC_LPRN, KC_RPRN,                   KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_COLN, KC_DQUO, \
  _______, _______, _______, _______, KC_LCBR, KC_RCBR, _______, _______, KC_LBRC, KC_RBRC, KC_LT,   KC_GT,   KC_QUES, _______, \
                             FLAYER,  _______, _______, _______, _______, ADJUST,  KC_DEL,  _______ \
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  ~   |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  |  ~   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  |  |   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Tab  |      | Del  | Ins  |      |-------.    ,-------| NUM  | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | Home | PgDn | PgUp | End  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE | Del  | LIFT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT( \
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD, \
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, \
  _______, KC_GRV,  KC_TILD, KC_DEL,  KC_INS,  _______,                     ADJUST,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DQUO, \
  _______, _______, _______, _______, _______, _______,  _______, _______,  _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, \
                             _______, _______, ADJUST,   _______, _______,  _______, KC_DEL,  FLAYER \
),
/* ADJUST + NUMPAD
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |  7   |  8   |  9   |  *   |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      | VolU |      |                    |      |  4   |  5   |  6   |  -   |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      | Prev | Next | Play |      |-------.    ,-------|      |  1   |  2   |  3   |  +   | Enter|
 * |------+------+------+------+------+------|   [   |    |   ]   |------+------+------+------+------+------|
 * |      |      |      |      | VolD |      |-------|    |-------|      |  0   |  =   |  .   |  /   |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| LIFT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_ADJUST] = LAYOUT( \
_______, _______, _______, _______, _______, _______,                   _______, KC_7,   KC_8,   KC_9,   KC_ASTR, KC_BSPC, \
_______, _______, _______, _______, KC_VOLU, _______,                   _______, KC_4,   KC_5,   KC_6,   KC_MINS, KC_BSLS, \
_______, _______, KC_MPRV, KC_MNXT, KC_MPLY, _______,                   _______, KC_1,   KC_2,   KC_3,   KC_PLUS, KC_ENT, \
_______, _______, _______, _______, KC_VOLD, _______, _______, _______, _______, KC_0,   KC_EQL, KC_DOT, KC_SLSH, _______, \
                           _______, _______, _______, _______, _______, _______, _______, _______ \
),
/* LIFT
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | AltF4|Gui(D)|LOWER | /Space  /       \Enter \  |RAISE |BackSP| LIFT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_LIFT] = LAYOUT( \
  _______, KC_EXLM, KC_AT,   KC_HASH,  KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
  _______, KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
  _______, KC_A,    KC_S,    KC_D,     KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
                             A(KC_F4), G(KC_D), _______, _______, _______, _______, _______, _______ \
),
/* FLAYER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    | F13  | F14  | F15  | F16  | F17  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  F6  |  F7  |  F8  |  F9  | F10  |-------.    ,-------| F18  | F19  | F20  | F21  | F22  |      |
 * |------+------+------+------+------+------|   [   |    |   ]   |------+------+------+------+------+------|
 * |      |      |      |      | F11  | F12  |-------|    |-------| F23  | F24  |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| LIFT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_FLAYER] = LAYOUT( \
_______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,  _______, _______, \
_______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F13,  KC_F14,  KC_F15,  KC_F16,   KC_F17,  _______, \
_______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                    KC_F18,  KC_F19,  KC_F20,  KC_F21,   KC_F22,  _______, \
_______, _______, _______, _______, KC_F11,  KC_F12,  _______, _______, KC_F23,  KC_F24,  _______, _______,  _______, _______, \
                           _______, _______, _______, _______, _______, _______, _______, _______ \
),
};

//SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
// const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

char wpm_str[10];
char l_state[17];

void oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_set_cursor(0,1); {
        oled_write_ln(read_layer_state(), false);
    }
    // oled_set_cursor(0,1); {
    //     sprintf(wpm_str, "WPM: %03d", get_current_wpm());
    //     oled_write(wpm_str, false);
    // }
    oled_set_cursor(0,2); {
        oled_write_ln(read_keylog(), false);
    }
    // oled_set_cursor(0,3); {
    //     oled_write_ln(read_keylogs(), false);
    //}
    oled_set_cursor(0,0); {
        oled_write_ln("lazytangent", false);
    }
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    // oled_write_ln(read_layer_state(), false);
    oled_set_cursor(0,0); {
        sprintf(wpm_str, "WPM: %03d", get_current_wpm());
        oled_write(wpm_str, false);
    }
    // oled_set_cursor(0,1); {
    //     sprintf(l_state, read_layer_state());
    //     oled_write(l_state, false);
    // }
  }
}
#endif // OLED_DRIVER_ENABLE

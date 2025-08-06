#include QMK_KEYBOARD_H
#include "keyDefinitions.h"
#include "print.h"

#ifdef OLED_DRIVER_ENABLE
  #include "ssd1306.h"
#endif

extern uint8_t is_master;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | BSpc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  [   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| LIFT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [0] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,\
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, \
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_LBRC, KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
                             KC_LALT, KC_LGUI, MO(1), KC_SPC,  KC_ENT,   MO(2),   KC_BSPC, KC_RGUI
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

[1] = LAYOUT(
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,\
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PIPE, \
  KC_ESC,  KC_GRV,  KC_TILD, KC_TAB,  KC_LPRN, KC_RPRN,                   KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_COLN, KC_DQUO, \
  _______, _______, _______, _______, KC_LCBR, KC_RCBR, _______, _______, KC_LBRC, KC_RBRC, KC_LT,   KC_GT,   KC_QUES, _______, \
                             _______, _______, _______, _______, _______, _______, KC_DEL,  _______
),

/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  ~   |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  |  ~   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  |  |   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  `   |   ~  | Del  | Ins  |      |-------.    ,-------| NUM  | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | Home | PgDn | PgUp | End  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE | Del  | LIFT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[2] = LAYOUT(
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD, \
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, \
  _______, KC_GRV,  KC_TILD, _______, _______, _______,                     _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DQUO, \
  _______, _______, _______, _______, _______, _______,  _______, _______,  _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, \
                             _______, _______, _______,  _______, _______,  _______, KC_DEL,  _______
)

};

void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_keyboard=true;
}

//SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

char wpm_str[10];
char l_state[17];

void oled_task_user(void) {
  oled_write_P(PSTR("TESTING"), false);
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    /* oled_set_cursor(0,1); { */
    /*     oled_write_ln(read_layer_state(), false); */
    /* } */
    // oled_set_cursor(0,1); {
    //     sprintf(wpm_str, "WPM: %03d", get_current_wpm());
    //     oled_write(wpm_str, false);
    // }
    /* oled_set_cursor(0,2); { */
    /*     oled_write_ln(read_keylog(), false); */
    /* } */
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

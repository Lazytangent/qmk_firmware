#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[0] = LAYOUT( /* Base */
			KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_HOME,
		  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
			KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_DEL,
		  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(1),   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
		  KC_LALT,          KC_LGUI, MO(1),            KC_SPC,           MO(2),            MO(3),                     KC_LEFT, KC_DOWN, KC_RIGHT
		),
		[1] = LAYOUT( /* FN */
			KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, KC_BSPC, KC_HOME,
		  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LCBR, KC_RCBR, KC_PIPE, KC_PGUP,
			_______, KC_GRV,  KC_TILD, _______, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_COLN, KC_DQUO,          _______, KC_PGDN,
		  KC_LSFT, _______, _______, _______, KC_LCBR, KC_RCBR, _______, KC_LBRC, KC_RBRC, _______, _______, _______, KC_VOLU, KC_MUTE,
		  _______,          _______, _______,          _______,          _______,          _______,                   KC_MPRV, KC_VOLD, KC_MNXT
		),
		[2] = LAYOUT( /* FN2 */
			KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, KC_BSPC, KC_HOME,
			KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, KC_BSPC, KC_HOME,
			KC_LCTL, RGB_SPI, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          EEP_RST, KC_PGDN,
		  KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_MUTE,
		  KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,                   KC_MPRV, KC_VOLD, KC_MNXT
		),
		[3] = LAYOUT( /* FN3 */
			KC_GESC, KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  RESET,   KC_HOME,
		  KC_TRNS, RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SLCK,  KC_PAUS, RESET,    KC_PGUP,
			KC_LCTL, RGB_SPI,  RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          EEP_RST,  KC_PGDN,
		  KC_LSFT, KC_TRNS,  KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_VOLU, KC_MUTE,
		  KC_TRNS,           KC_TRNS, KC_TRNS,         KC_TRNS,           KC_TRNS,         KC_TRNS,                    KC_MPRV, KC_VOLD,  KC_MNXT
		),
 };

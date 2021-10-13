#include QMK_KEYBOARD_H

enum custom_keycodes {
  KC_MC = SAFE_RANGE,
  KC_LP,

  LEFT,
  DOWN,
  UP,
  RIGHT,

  U_LEFT,
  U_DOWN,
  U_UP,
  U_RIGHT,

  QUAD_U,
  QUAD_I,
  QUAD_J,
  QUAD_K,

  MAX
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_ansi(
        KC_GRV,         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, MO(1),
        KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, MO(2),
        KC_LCTL,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NO,   KC_ENT,  MO(3),
        KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,   KC_RSFT, KC_UP,   KC_DEL,
        KC_LCTL,        KC_LALT, KC_LGUI, KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_NO,   MO(1),   MO(2),   KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_65_ansi(
        KC_ESC,         KC_F1,   KC_F2,   KC_F3,     KC_F4,     KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,      KC_DEL,      _______,
        _______,        _______, _______, LCA(KC_E), _______,   LCA(KC_T), _______, QUAD_U,  QUAD_I,  _______, _______, _______, _______,     RESET,       KC_PGUP,
        _______,        KC_GRV,  KC_TILD, LCA(KC_D), LCA(KC_F), LCA(KC_G), _______, QUAD_J,  QUAD_K,  _______, _______, _______,              EEP_RST,     KC_PGDN,
        _______,                 _______, _______,   _______,   _______,   _______, _______, _______, _______, _______, _______, _______,     LCA(KC_UP),  _______,
        _______,        KC_MC,   KC_LP,                                    _______,                   _______, _______, _______, LCA(KC_LEFT),LCA(KC_DOWN),LCA(KC_RGHT)
    ),
    [2] = LAYOUT_65_ansi(
        KC_TILD,        KC_F1,   KC_F2,   KC_F3,     KC_F4,     KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_HOME,
        _______,        _______, _______, MEH(KC_E), MEH(KC_R), MEH(KC_T), _______, _______, _______, _______, _______, _______, _______, RESET,   _______,
        _______,        _______, _______, MEH(KC_D), MEH(KC_F), MEH(KC_G), _______, _______, _______, _______, _______, _______,          EEP_RST, KC_PGDN,
        KC_LSFT,                 _______, _______,   _______,   _______,   _______, _______, _______, _______, _______, _______, _______, KC_VOLU, KC_MUTE,
        _______,        _______, _______,                                  _______,                   _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [3] = LAYOUT_65_ansi(
        KC_GESC,        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_HOME,
        _______,        RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, KC_PSCR, KC_SLCK, KC_PAUS, RESET,   KC_PGUP,
        CTL_T(KC_CAPS), RGB_SPI, RGB_SPD, _______, _______, _______, _______, _______, _______, _______, _______, _______,          EEP_RST, _______,
        KC_LSFT,                 _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, _______, KC_VOLU, KC_MUTE,
        _______,        _______, _______,                            _______,                   _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case KC_MC:
                host_consumer_send(0x29F);
                return false;
            case KC_LP:
                host_consumer_send(0x2A0);
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

// Template
/* _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, */
/* _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, */
/* _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NO,   _______, _______, */
/* _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NO,   _______, _______, */
/* _______,        _______, _______, KC_NO,   KC_NO,   _______, KC_NO,   KC_NO,   KC_NO,   _______, _______, _______, _______, _______, _______ */

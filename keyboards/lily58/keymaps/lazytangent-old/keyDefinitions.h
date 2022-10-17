#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3
#define _LIFT 4
#define _FLAYER 5
#define LO_LSFT LM(0, MOD_LSFT)
#define RA_LSFT LM(0, MOD_LSFT)

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    ADJUST,
    LIFT,
    FLAYER
};

void set_keylog(uint16_t keycode, keyrecord_t *record);

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    print("outer here");
    if (record->event.pressed) {
        #ifdef OLED_DRIVER_ENABLE
            print("here");
            set_keylog(keycode, record);
        #endif
        // set_timelog();
    }

    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
            break;
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
        case ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
            break;
        case LIFT:
            if (record->event.pressed) {
                layer_on(_LIFT);
            } else {
                layer_off(_LIFT);
            }
            return false;
            break;
        case FLAYER:
            if (record->event.pressed) {
                layer_on(_FLAYER);
            } else {
                layer_off(_FLAYER);
            }
            return false;
            break;
    }
    return true;

};

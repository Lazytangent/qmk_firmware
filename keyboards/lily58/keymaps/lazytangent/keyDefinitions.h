#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3
#define _LIFT 4
#define _GREEK 5

enum custom_keycodes {
    ALPHA = SAFE_RANGE,
    BETA,
    GAMMA,
    DELTA,
    EPSILON,
    ZETA,
    ETA,
    THETA,
    IOTA,
    KAPPA,
    LAMBDA,
    MU,
    NU,
    XI,
    OMNICRON,
    PI,
    RHO,
    SIGMA,
    TAU,
    UPSILON,
    PHI,
    CHI,
    PSI,
    OMEGA,
    QWERTY,
    LOWER,
    RAISE,
    ADJUST,
    LIFT,
    GREEK
};

void set_keylog(uint16_t keycode, keyrecord_t *record);

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        #ifdef OLED_DRIVER_ENABLE
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
        case GREEK:
            if (record->event.pressed) {
                layer_on(_GREEK);
            } else {
                layer_off(_GREEK);
            }
            return false;
            break;
        case ALPHA:
            if (record->event.pressed) {
                SEND_STRING("\\alpha");
            }
            break;
        case BETA:
            if (record->event.pressed) {
                SEND_STRING("\\beta");
            }
            break;
        case GAMMA:
            if (record->event.pressed) {
                SEND_STRING("\\gamma");
            }
            break;
        case DELTA:
            if (record->event.pressed) {
                SEND_STRING("\\delta");
            }
            break;
        case EPSILON:
            if (record->event.pressed) {
                SEND_STRING("\\epsilon");
            }
            break;
        case ZETA:
            if (record->event.pressed) {
                SEND_STRING("\\zeta");
            }
            break;
        case ETA:
            if (record->event.pressed) {
                SEND_STRING("\\eta");
            }
            break;
        case THETA:
            if (record->event.pressed) {
                SEND_STRING("\\theta");
            }
            break;
        case IOTA:
            if (record->event.pressed) {
                SEND_STRING("\\iota");
            }
            break;
        case KAPPA:
            if (record->event.pressed) {
                SEND_STRING("\\kappa");
            }
            break;
        case LAMBDA:
            if (record->event.pressed) {
                SEND_STRING("\\lambda");
            }
            break;
        case MU:
            if (record->event.pressed) {
                SEND_STRING("\\mu");
            }
            break;
        case NU:
            if (record->event.pressed) {
                SEND_STRING("\\nu");
            }
            break;
        case XI:
            if (record->event.pressed) {
                SEND_STRING("\\xi");
            }
            break;
        case OMNICRON:
            if (record->event.pressed) {
                SEND_STRING("\\omnicron");
            }
            break;
        case PI:
            if (record->event.pressed) {
                SEND_STRING("\\pi");
            }
            break;
        case RHO:
            if (record->event.pressed) {
                SEND_STRING("\\rho");
            }
            break;
        case SIGMA:
            if (record->event.pressed) {
                SEND_STRING("\\sigma");
            }
            break;
        case TAU:
            if (record->event.pressed) {
                SEND_STRING("\\tau");
            }
            break;
        case UPSILON:
            if (record->event.pressed) {
                SEND_STRING("\\upsilon");
            }
            break;
        case PHI:
            if (record->event.pressed) {
                SEND_STRING("\\phi");
            }
            break;
        case CHI:
            if (record->event.pressed) {
                SEND_STRING("\\chi");
            }
            break;
        case PSI:
            if (record->event.pressed) {
                SEND_STRING("\\psi");
            }
            break;
        case OMEGA:
            if (record->event.pressed) {
                SEND_STRING("\\omega");
            }
            break;
    }
    return true;

};

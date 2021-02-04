#define MODS_SHIFT  (get_mods() & MOD_MASK_SHIFT)
#define MODS_CTRL   (get_mods() & MOD_MASK_CTRL)
#define MODS_ALT    (get_mods() & MOD_MASK_ALT)

#define QWERTY DF(0)
#define DVORAK DF(1)
#define COLEMAK DF(2)
#define GAME DF(3)

enum greek_keycodes {
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
    OMEGA
};

enum ctrl_keycodes {
    U_T_AUTO = SAFE_RANGE, //USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,              //USB Toggle Automatic GCR control
    DBG_TOG,               //DEBUG Toggle On / Off
    DBG_MTRX,              //DEBUG Toggle Matrix Prints
    DBG_KBD,               //DEBUG Toggle Keyboard Prints
    DBG_MOU,               //DEBUG Toggle Mouse Prints
    MD_BOOT,               //Restart into bootloader after hold timeout
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
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

    static uint32_t key_timer;

    switch (keycode) {
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        /* case RGB_TOG: */
        /*     if (record->event.pressed) { */
        /*       switch (rgb_matrix_get_flags()) { */
        /*         case LED_FLAG_ALL: { */
        /*             rgb_matrix_set_flags(LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER); */
        /*             rgb_matrix_set_color_all(0, 0, 0); */
        /*           } */
        /*           break; */
        /*         case LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER: { */
        /*             rgb_matrix_set_flags(LED_FLAG_UNDERGLOW); */
        /*             rgb_matrix_set_color_all(0, 0, 0); */
        /*           } */
        /*           break; */
        /*         case LED_FLAG_UNDERGLOW: { */
        /*             rgb_matrix_set_flags(LED_FLAG_NONE); */
        /*             rgb_matrix_disable_noeeprom(); */
        /*           } */
        /*           break; */
        /*         default: { */
        /*             rgb_matrix_set_flags(LED_FLAG_ALL); */
        /*             rgb_matrix_enable_noeeprom(); */
        /*           } */
        /*           break; */
        /*       } */
        /*     } */
        /*     return false; */
        default:
            return true; //Process all other keycodes normally
    }
}

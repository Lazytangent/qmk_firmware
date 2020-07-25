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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ALPHA:
            if (record->event.pressed) {
                SEND_STRING("\\alpha");
            }
            break;
    }
    switch (keycode) {
        case BETA:
            if (record->event.pressed) {
                SEND_STRING("\\beta");
            }
            break;
    }switch (keycode) {
        case GAMMA:
            if (record->event.pressed) {
                SEND_STRING("\\gamma");
            }
            break;
    }switch (keycode) {
        case DELTA:
            if (record->event.pressed) {
                SEND_STRING("\\delta");
            }
            break;
    }switch (keycode) {
        case EPSILON:
            if (record->event.pressed) {
                SEND_STRING("\\epsilon");
            }
            break;
    }switch (keycode) {
        case ZETA:
            if (record->event.pressed) {
                SEND_STRING("\\zeta");
            }
            break;
    }switch (keycode) {
        case ETA:
            if (record->event.pressed) {
                SEND_STRING("\\eta");
            }
            break;
    }switch (keycode) {
        case THETA:
            if (record->event.pressed) {
                SEND_STRING("\\theta");
            }
            break;
    }switch (keycode) {
        case IOTA:
            if (record->event.pressed) {
                SEND_STRING("\\iota");
            }
            break;
    }switch (keycode) {
        case KAPPA:
            if (record->event.pressed) {
                SEND_STRING("\\kappa");
            }
            break;
    }switch (keycode) {
        case LAMBDA:
            if (record->event.pressed) {
                SEND_STRING("\\lambda");
            }
            break;
    }switch (keycode) {
        case MU:
            if (record->event.pressed) {
                SEND_STRING("\\mu");
            }
            break;
    }switch (keycode) {
        case NU:
            if (record->event.pressed) {
                SEND_STRING("\\nu");
            }
            break;
    }switch (keycode) {
        case XI:
            if (record->event.pressed) {
                SEND_STRING("\\xi");
            }
            break;
    }switch (keycode) {
        case OMNICRON:
            if (record->event.pressed) {
                SEND_STRING("\\omnicron");
            }
            break;
    }switch (keycode) {
        case PI:
            if (record->event.pressed) {
                SEND_STRING("\\pi");
            }
            break;
    }switch (keycode) {
        case RHO:
            if (record->event.pressed) {
                SEND_STRING("\\rho");
            }
            break;
    }switch (keycode) {
        case SIGMA:
            if (record->event.pressed) {
                SEND_STRING("\\sigma");
            }
            break;
    }switch (keycode) {
        case TAU:
            if (record->event.pressed) {
                SEND_STRING("\\tau");
            }
            break;
    }switch (keycode) {
        case UPSILON:
            if (record->event.pressed) {
                SEND_STRING("\\upsilon");
            }
            break;
    }switch (keycode) {
        case PHI:
            if (record->event.pressed) {
                SEND_STRING("\\phi");
            }
            break;
    }switch (keycode) {
        case CHI:
            if (record->event.pressed) {
                SEND_STRING("\\chi");
            }
            break;
    }switch (keycode) {
        case PSI:
            if (record->event.pressed) {
                SEND_STRING("\\psi");
            }
            break;
    }switch (keycode) {
        case OMEGA:
            if (record->event.pressed) {
                SEND_STRING("\\omega");
            }
            break;
    }
    return true;

};

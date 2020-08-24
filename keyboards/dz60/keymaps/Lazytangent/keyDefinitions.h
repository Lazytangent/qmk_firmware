#define QWERTY DF(0)
#define DVORAK DF(1)
#define COLEMAK DF(2)

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

#include QMK_KEYBOARD_H

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
    OMEGA,

    KC_MC,
    KC_LP,
    KC_ULT,

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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case KC_MC:
                host_consumer_send(0x29F);
                return false;
            case KC_LP:
                host_consumer_send(0x2A0);
                return false;
            case KC_ULT:
                register_code(KC_LCTL);
                register_code(KC_LALT);
                register_code(KC_LGUI);
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
            case ALPHA:
                SEND_STRING("\\alpha");
                return false;
            case BETA:
                SEND_STRING("\\beta");
                return false;
            case GAMMA:
                SEND_STRING("\\gamma");
                return false;
            case DELTA:
                SEND_STRING("\\delta");
                return false;
            case EPSILON:
                SEND_STRING("\\epsilon");
                return false;
            case ZETA:
                SEND_STRING("\\zeta");
                return false;
            case ETA:
                SEND_STRING("\\eta");
                return false;
            case THETA:
                SEND_STRING("\\theta");
                return false;
            case IOTA:
                SEND_STRING("\\iota");
                return false;
            case KAPPA:
                SEND_STRING("\\kappa");
                return false;
            case LAMBDA:
                SEND_STRING("\\lambda");
                return false;
            case MU:
                SEND_STRING("\\mu");
                return false;
            case NU:
                SEND_STRING("\\nu");
                return false;
            case XI:
                SEND_STRING("\\xi");
                return false;
            case OMNICRON:
                SEND_STRING("\\omnicron");
                return false;
            case PI:
                SEND_STRING("\\pi");
                return false;
            case RHO:
                SEND_STRING("\\rho");
                return false;
            case SIGMA:
                SEND_STRING("\\sigma");
                return false;
            case TAU:
                SEND_STRING("\\tau");
                return false;
            case UPSILON:
                SEND_STRING("\\upsilon");
                return false;
            case PHI:
                SEND_STRING("\\phi");
                return false;
            case CHI:
                SEND_STRING("\\chi");
                return false;
            case PSI:
                SEND_STRING("\\psi");
                return false;
            case OMEGA:
                SEND_STRING("\\omega");
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
            case KC_ULT:
                unregister_code(KC_LGUI);
                unregister_code(KC_LALT);
                unregister_code(KC_LCTL);
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
            case ALPHA:
            case BETA:
            case GAMMA:
            case DELTA:
            case EPSILON:
            case ZETA:
            case ETA:
            case THETA:
            case IOTA:
            case KAPPA:
            case LAMBDA:
            case MU:
            case NU:
            case XI:
            case OMNICRON:
            case PI:
            case RHO:
            case SIGMA:
            case TAU:
            case UPSILON:
            case PHI:
            case CHI:
            case PSI:
            case OMEGA:
                return false;
        }
    }
    return true;

};

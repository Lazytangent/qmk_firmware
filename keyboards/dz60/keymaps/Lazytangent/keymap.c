#include QMK_KEYBOARD_H
#include "keyDefinitions.h"

#define _BASE 0
#define _1 1
#define _2 2
#define _3 3
#define _4 4


// enum layers {
//     BASE = SAFE_RANGE,
//     1,
//     2,
//     3,
//     4
// };

/*
 * LAYOUT_Lazy1                                                Row Keys
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │  0e   │ 14
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │10   │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d │1e   │ 14
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │20    │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c │2d      │ 13
 * ├───┬──┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬──┬───┤
 * │30 | 31 │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3c │3d│3e │ 15
 * ├───┴┬───┴┬──┴─┬─┴───┴┬──┴──┬┴───┴───┴──┬┴───┼───┼───┼──┼───┤
 * │40  │41  │43  │  44  | 46  |    48     │4a  │4b |4c |4d│4e │ 11
 * └────┴────┴────┴──────┴─────┴───────────┴────┴───┴───┴──┴───┘
 *
*/
#define LAYOUT_Lazy1( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c,      k0e, \
    k10,      k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
    k20,      k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d,      \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
    k40, k41,      k43, k44,      k46,      k48,      k4a, k4b, k4c, k4d, k4e \
) { \
    { k00, k01,   k02,   k03, k04,   k05,   k06, k07,   k08,   k09,   k0a, k0b, k0c,   KC_NO, k0e   }, \
    { k10, KC_NO, k12,   k13, k14,   k15,   k16, k17,   k18,   k19,   k1a, k1b, k1c,   k1d,   k1e   }, \
    { k20, KC_NO, k22,   k23, k24,   k25,   k26, k27,   k28,   k29,   k2a, k2b, k2c,   k2d,   KC_NO }, \
    { k30, k31,   k32,   k33, k34,   k35,   k36, k37,   k38,   k39,   k3a, k3b, k3c,   k3d,   k3e   }, \
    { k40, k41,   KC_NO, k43, k44,   KC_NO, k46, KC_NO, k48,   KC_NO, k4a, k4b, k4c,   k4d,   k4e   }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,-----------------------------------------------------------------------------------------.
   * | ESC |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * | Caps    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * |MO(2)|Shift|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | Del |
   * |-----------------------------------------------------------------------------------------+
   * | Ctl | Alt | Gui |   MO(1)   | Space |      Shift      | MO(3) | MO(4) |  L  |  D  |  R  |
   * `-----------------------------------------------------------------------------------------'
   */

    [_BASE] = LAYOUT_Lazy1(
      KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      MO(_2),  KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,
      KC_LCTL, KC_LALT, KC_LGUI,         MO(_1),         KC_SPC,        KC_BSPC,          MO(_3),  MO(_4),  KC_LEFT, KC_DOWN, KC_RIGHT
    ),

  /* 1
   * ,-----------------------------------------------------------------------------------------.
   * | ` |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |   RESET     |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     | End |     |     |     |     | Ins |     |     |      |      |      |
   * |-----------------------------------------------------------------------------------------+
   * |         |     |     | Del |     |     | Home| Left| Up  | Down|Right|     |             |
   * |-----------------------------------------------------------------------------------------+
   * |     |     |     |     |     |     | Prev| Next|Enter|Bkspc|     |     |     | PgUp|     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |       |  Play  |                  |      |     |     | PgDn|     |
   * `-----------------------------------------------------------------------------------------'
   */

    [_1] = LAYOUT_Lazy1(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           _______,
      _______, _______, _______, KC_END,  _______, _______, _______, _______, KC_INS,  _______, _______, _______, _______, _______,
      _______, _______, _______, KC_DEL,  _______, _______, KC_HOME, KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT,_______, _______,
      _______, _______, _______, _______, _______, KC_MPRV, KC_MNXT, KC_ENT,  KC_BSPC, _______, _______, _______, _______, KC_PGUP, _______,
      _______, _______, _______,          _______,          KC_MPLY,          _______,          _______, _______, _______, KC_PGDN, _______
    ),

  /* 2
   * ,-----------------------------------------------------------------------------------------.
   * |  `  |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (   |  )  |  _  |  + |   Bspc    |
   * |-----------------------------------------------------------------------------------------+
   * |        |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * |         |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * |     |     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  <  |  >  |  /  |     |     |     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |       |        |                  |      |     |     |     |     |
   * `-----------------------------------------------------------------------------------------'
   */

    [_2] = LAYOUT_Lazy1(
        KC_GRV,  KC_EXLM, KC_AT,  KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS,          KC_BSPC,
        _______, KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        _______, KC_A,    KC_S,   KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        _______, _______, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_LT,   KC_GT,   KC_SLSH, _______, _______, _______,
        _______, _______, _______,         _______,          _______,          _______,          _______, _______, _______, _______, _______
    ),

  /* 3 Windows Shortcuts
   * ,-----------------------------------------------------------------------------------------.
   * |  ~  | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22 | F23 | F24 |   Bspc    |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |CtrlW|     |CtrlT|     |     |     |     |     |      |      |      |     |
   * |-----------------------------------------------------------------------------------------+
   * |         |     |     |     |     |     |     |     |     |     |     |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |     |     |CtrlZ|CtrlX|CtrlC|CtrlV|     |     |     |     |     |     |RShft| Up  | Del |
   * |-----------------------------------------------------------------------------------------+
   * |      |Alt(F4)| Gui(D)|       |        |                  |      |MO(4)|Left |Down |Right|
   * `-----------------------------------------------------------------------------------------'
   */

    [_3] = LAYOUT_Lazy1(
        KC_TILD, KC_F13,   KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,           KC_BSPC,
        _______, _______,  C(KC_W), _______, C(KC_T), _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______,  C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______, _______, _______, _______, _______, KC_RSFT, KC_UP,   KC_DEL,
        _______, A(KC_F4), G(KC_D),          _______,          _______,          _______,          _______, MO(_4),  KC_LEFT, KC_DOWN, KC_RGHT
    ),

  /* 4 Greek shortcuts for LaTeX
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |  $  |     |     |     |     |     |     |     |     |           |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     | EPS | RHO | TAU | UPS |THETA| IOTA| OMNI| PI  |      |      |      |
   * |-----------------------------------------------------------------------------------------+
   * |         |ALPHA|SIGMA|DELTA| PHI |GAMMA| ETA | XI  |KAPPA|LAMBDA|     |     |            |
   * |-----------------------------------------------------------------------------------------+
   * |     |     | ZETA| CHI | PSI |OMEGA| BETA| NU  | MU  |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |       |        |                  |     |      |     |     |     |
   * `-----------------------------------------------------------------------------------------'
   */

    [_4] = LAYOUT_Lazy1(
        _______, _______, _______, _______, KC_DLR,  _______, _______, _______, _______, _______,  _______, _______, _______,          _______,
        _______, _______, _______, EPSILON, RHO,     TAU,     UPSILON, THETA,   IOTA,    OMNICRON, PI,      _______, _______, _______,
        _______, ALPHA,   SIGMA,   DELTA,   PHI,     GAMMA,   ETA,     XI,      KAPPA,   LAMBDA,   _______, _______, _______,
        _______, _______, ZETA,    CHI,     PSI,     OMEGA,   BETA,    NU,      MU,      _______,  _______, _______, _______, _______, _______,
        _______, _______, _______,          _______,          _______,          _______,           _______, _______, _______, _______, _______
    ),

};
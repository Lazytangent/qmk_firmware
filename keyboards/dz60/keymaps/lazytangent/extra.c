  /* GAME
   * ,-----------------------------------------------------------------------------------------.
   * | ESC |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * | CapsLoc |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl|Shift|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | Del |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl| Alt | Gui |   MO(1)   | Space |      MO(2)      | MO(3) | MO(4) |  L  |  D  |  R  |
   * `-----------------------------------------------------------------------------------------'
   */

    [_GAME] = LAYOUT_Lazy1(
      KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LCTL, KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,
      KC_LCTL, KC_LALT, KC_LGUI,         MO(_1),         KC_SPC,        MO(_2),           MO(_3),  MO(_4),  KC_LEFT, KC_DOWN, KC_RIGHT
    ),

  /* DVORAK
  * ,-----------------------------------------------------------------------------------------.
  * | ESC |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  [  |  ]  |   Bkspc   |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  '  |  ,  |  .  |  P  |  Y  |  F  |  G  |  C  |  R  |  L  |  /  |  =  |    \   |
  * |-----------------------------------------------------------------------------------------+
  * | Control |  A  |  O  |  E  |  U  |  I  |  D  |  H  |  T  |  N  |  S  |  -  |    Enter    |
  * |-----------------------------------------------------------------------------------------+
  * |Shift|Shift|  ;  |  Q  |  J  |  K  |  X  |  B  |  M  |  W  |  V  |  Z  | RSh |  U  | Del |
  * |-----------------------------------------------------------------------------------------+
  * | Caps| Alt | Gui |   MO(1)   | Space |      MO(2)      | MO(3) | MO(4) |  L  |  D  |  R  |
  * `-----------------------------------------------------------------------------------------'
  */

  [_DVORAK] = LAYOUT_Lazy1(
    KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC,          KC_BSPC,
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT, KC_P,   KC_Y,   KC_F,   KC_G,  KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,  KC_BSLS,
    KC_LCTL, KC_A,    KC_O,    KC_E,   KC_U,   KC_I,   KC_D,   KC_H,  KC_T,    KC_N,    KC_S,    KC_MINS, KC_ENT,
    KC_LSFT, KC_LSFT, KC_SCLN, KC_Q,   KC_J,   KC_K,   KC_X,   KC_B,  KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT, KC_UP,   KC_DEL,
    KC_CAPS, KC_LALT, KC_LGUI,         MO(_1),         KC_SPC,        KC_BSPC,          MO(_3),  MO(_4),  KC_LEFT, KC_DOWN, KC_RIGHT
  ),

  /* COLEMAK
  * ,-----------------------------------------------------------------------------------------.
  * | ESC |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  Q  |  W  |  F  |  P  |  G  |  J  |  L  |  U  |  Y  |  ;  |  [  |  ]  |    \   |
  * |-----------------------------------------------------------------------------------------+
  * | Control |  A  |  R  |  S  |  T  |  D  |  H  |  N  |  E  |  I  |  O  |  '  |    Enter    |
  * |-----------------------------------------------------------------------------------------+
  * |MO(2)|Shift|  Z  |  X  |  C  |  V  |  B  |  K  |  M  |  ,  |  .  |  /  | RSh |  U  | Del |
  * |-----------------------------------------------------------------------------------------+
  * | Caps| Alt | Gui |   MO(1)   | Space |    Backspace    | MO(3) | MO(4) |  L  |  D  |  R  |
  * `-----------------------------------------------------------------------------------------'
  */

  [_COLEMAK] = LAYOUT_Lazy1(
    KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_F,   KC_P,   KC_G,   KC_J,   KC_L,  KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS,
    KC_LCTL, KC_A,    KC_R,    KC_S,   KC_T,   KC_D,   KC_H,   KC_N,  KC_E,    KC_I,    KC_O,    KC_QUOT, KC_ENT,
    MO(_2),  KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_K,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,
    KC_CAPS, KC_LALT, KC_LGUI,         MO(_1),         KC_SPC,        KC_BSPC,          MO(_3),  MO(_4),  KC_LEFT, KC_DOWN, KC_RIGHT
  ),

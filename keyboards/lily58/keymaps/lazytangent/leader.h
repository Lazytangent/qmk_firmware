LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leader_start();
    leading = false;

    SEQ_ONE_KEY(KC_LEFT) {
      register_code(KC_LCTL);
      register_code(KC_LEFT);
      unregister_code(KC_LEFT);
      unregister_code(KC_LCTL);
    }
    SEQ_ONE_KEY(KC_RGHT) {
      register_code(KC_LCTL);
      register_code(KC_RGHT);
      unregister_code(KC_RGHT);
      unregister_code(KC_LCTL);
    }
    leader_end();
  }
}

#ifdef OLED_ENABLE
void leader_start(void) {
  set_leader_state(true);
}

void leader_end(void) {
  set_leader_state(false);
}
#endif

// vim: sts=2 tw=2

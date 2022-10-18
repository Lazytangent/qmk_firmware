LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leader_start();
    leading = false;

    SEQ_ONE_KEY(KC_LEFT) {
      SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)));
    }
    SEQ_ONE_KEY(KC_RGHT) {
      SEND_STRING(SS_LCTL(SS_TAP(X_RGHT)));
    }

    SEQ_ONE_KEY(KC_H) {
      SEND_STRING(SS_LALT("h"));
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

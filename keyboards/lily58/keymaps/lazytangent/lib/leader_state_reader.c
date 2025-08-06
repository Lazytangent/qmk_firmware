#include QMK_KEYBOARD_H

char leader_state[12] = {};

const char *read_leader_state(void) {
  return leader_state;
}

void set_leader_state(bool state) {
  if (state) {
    snprintf(leader_state, sizeof(leader_state), "LEADER: ON");
  } else {
    snprintf(leader_state, sizeof(leader_state), "LEADER: OFF");
  }
}

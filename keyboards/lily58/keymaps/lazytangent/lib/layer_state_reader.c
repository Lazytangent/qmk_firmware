
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

#define L_BASE 0
#define L_DVORAK (1 << 1)
#define L_1 (1 << 2)
#define L_2 (1 << 3)
#define L_ADJUST_TRI (L_DVORAK | L_2 | L_1)

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Default");
    break;
  case L_1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: One");
    break;
  case L_2:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Two");
    break;
  case L_DVORAK:
  case L_ADJUST_TRI:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Dvorak");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%u", layer_state);
  }

  return layer_state_str;
}

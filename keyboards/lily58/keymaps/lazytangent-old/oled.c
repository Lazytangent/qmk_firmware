#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"
#include "action.h"

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST (3 << 2)
#define L_ADJUST_O 10
#define L_LIFT 16
#define L_LIFT_O 28
#define L_LIFT_P 42
#define L_LIFT_R 20
#define L_GREEK 34
#define L_GREEK_O 36


char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state) {
    case L_BASE:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Default");
        break;
    case L_RAISE:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise");
        break;
    case L_LOWER:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower");
        break;
    case L_ADJUST:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
        break;
    case L_ADJUST_O:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
        break;
    case L_LIFT:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lift");
        break;
    case L_LIFT_O:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lift");
        break;
    case L_LIFT_P:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lift");
        break;
    case L_LIFT_R:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lift");
        break;
    case L_GREEK:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Greek");
        break;
    case L_GREEK_O:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Greek");
        break;
    default:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%d", layer_state);
  }

  return layer_state_str;
}

char keylog_str[24] = {};
char keylogs_str[21] = {};
int keylogs_str_idx = 0;

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ';', '\'', ' ', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);

  // update keylogs
  if (keylogs_str_idx == sizeof(keylogs_str) - 1) {
    keylogs_str_idx = 0;
    for (int i = 0; i < sizeof(keylogs_str) - 1; i++) {
      keylogs_str[i] = ' ';
    }
  }

  keylogs_str[keylogs_str_idx] = name;
  keylogs_str_idx++;
}

const char *read_keylog(void) {
  return keylog_str;
}

const char *read_keylogs(void) {
  return keylogs_str;
}







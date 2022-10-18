//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

const char *read_leader_state(void);
void set_leader_state(bool leader_state);
char wpm_str[10];

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_set_cursor(0,0); {
      oled_write_ln("lazytangent", false);
    }
    oled_set_cursor(0,1); {
      oled_write_ln(read_layer_state(), false);
    }
    oled_set_cursor(0,2); {
      oled_write_ln(read_keylog(), false);
    }
    oled_set_cursor(0,3); {
      oled_write_ln(read_leader_state(), false);
    }
  } else {
    oled_set_cursor(0,0); {
      sprintf(wpm_str, "WPM: %03d", get_current_wpm());
      oled_write(wpm_str, false);
    }
  }
  return false;
}
#endif // OLED_ENABLE

// vim: sts=2 tw=2

#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE


#include "features/achordion.h"

void housekeeping_task_user(void) {
  achordion_task();
}

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_X,           KC_V,           KC_L,           KC_C,           KC_W,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_K,           KC_H,           KC_G,           KC_F,           KC_Q,           KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_U),MT(MOD_LALT, KC_I),MT(MOD_LSFT, KC_A),MT(MOD_LCTL, KC_E),KC_O,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_S,           MT(MOD_RCTL, KC_N),MT(MOD_RSFT, KC_R),MT(MOD_LALT, KC_T),MT(MOD_RGUI, KC_D),KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_Y,           KC_ESCAPE,      DE_COLN,        KC_P,           DE_Z,                                           KC_B,           KC_M,           KC_COMMA,       KC_DOT,         KC_J,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, MO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LT(1,KC_SPACE), LT(3,KC_TAB),   KC_TRANSPARENT,                 KC_TRANSPARENT, LT(4,KC_ENTER), LT(2,KC_BSPC)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, DE_EXLM,        DE_LESS,        DE_MORE,        DE_EQL,         DE_AMPR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, DE_QST,         DE_LPRN,        DE_RPRN,        DE_MINS,        DE_AT,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DE_PLUS,        DE_PERC,        DE_DQOT,        DE_QUOT,        DE_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_RING,        DE_UNDS,        DE_LBRC,        DE_RBRC,        DE_CIRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_BSLS,        DE_SLSH,        DE_LCBR,        DE_RCBR,        DE_ASTR,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_HASH,        DE_DLR,         DE_PIPE,        DE_TILD,        DE_GRV,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           KC_1,           KC_2,           KC_3,           KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_PRINT,QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          DE_CIRC,        DE_ACUT,        DE_GRV,         KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_UE,          DE_OE,          DE_AE,          DE_SS,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
const uint16_t PROGMEM combo0[] = { MT(MOD_LALT, KC_I), MT(MOD_LSFT, KC_A), COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_RSFT, KC_R), MT(MOD_LALT, KC_T), COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_LSFT, KC_A), MT(MOD_LCTL, KC_E), COMBO_END};
const uint16_t PROGMEM combo3[] = { MT(MOD_RCTL, KC_N), MT(MOD_RSFT, KC_R), COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_L, MT(MOD_LCTL, KC_E), COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_G, MT(MOD_RCTL, KC_N), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSM(MOD_LSFT)),
    COMBO(combo1, OSM(MOD_RSFT)),
    COMBO(combo2, OSM(MOD_LCTL)),
    COMBO(combo3, OSM(MOD_RCTL)),
    COMBO(combo4, OSL(1)),
    COMBO(combo5, OSL(2)),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {0,0,26}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {83,223,172}, {0,0,26} },

    [1] = { {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230} },

    [2] = { {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230}, {139,246,230} },

    [3] = { {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172} },

    [4] = { {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172}, {3,250,172} },

    [5] = { {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172}, {201,216,172} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  if (!process_achordion(keycode, record)) { return false; }

  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}




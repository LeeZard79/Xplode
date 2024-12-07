#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(
         KC_ESC,  KC_1,  KC_2,    KC_3,    KC_4,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_SLSH,  KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   
        KC_LCTL, KC_LGUI, KC_LALT,                       KC_SPC,                      KC_LEFT, KC_DOWN, KC_RGHT
    ),
     [1] = LAYOUT(
        KC_ESC,  KC_1,  KC_2,    KC_3,    KC_4,
        KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
        KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, 
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,  KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,               KC_TRNS,                                         KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
     [2] = LAYOUT(
         KC_ESC,  KC_1,  KC_2,    KC_3,    KC_4,
        KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
        KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, 
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,  KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,               KC_TRNS,                                          KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =   {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] =   {ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [2] =   {ENCODER_CCW_CW(KC_TRNS, KC_TRNS)}
};
#endif

/* RGB Matrix */
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {      1,        6,        11,       16,       20,                                                        NO_LED                 },
  {      2,        7,       12,       17,       21,       25,       29,       33,       36,       39,       42,       45           },
  {      3,        8,       13,       18,       22,       26,       30,       34,       37,       40,       43,       46,        50},
  {      4,        9,       14,       19,       23,       27,       31,       35,       38,       41,                 47           },
  {      5,        10,       15,                 24,       28,       32,                                    44,       48         51}
},

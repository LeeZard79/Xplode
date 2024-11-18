#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,           KC_1,    KC_2,    KC_3,    KC_4,                               KC_ENC,
        KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R  KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
        KC_CAPS,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_QUOT,   KC_ENT,
        KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_UP,   KC_SLSH,             
        KC_LCTL,   KC_LGUI,   KC_LALT,                              KC_SPC,                     KC_LEFT,   KC_DOWN,   KC_RGHT
    )
};

/* Encoder */ 
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][1] = {
    [0] = { ENCODER_CCW_CW(KC_ENC) }
};

/* RGB Matrix */
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {      1,        6,        11,       16,       20,                                                        NO_LED                 },
  {      2,        7,       12,       17,       21,       25,       29,       33,       36,       39,       42,       45           },
  {      3,        8,       13,       18,       22,       26,       30,       34,       37,       40,       43,       46,        50},
  {      4,        9,       14,       19,       23,       27,       31,       35,       38,       41,                 47           },
  {      5,        10,       15,                 24,       28,       32,                                    44,       48         51}
}, {
  // LED Index to Physical Position
  {   0,  15 }, {   3,  30 }, {   8,  45 }, {   3,  60 },
  {  10,   0 }, {  19,  15 }, {  24,  30 }, {  33,  45 }, {  24,  60 },
  {  29,   0 }, {  38,  15 }, {  43,  30 }, {  52,  45 }, {  45,  60 },
  {  47,   0 }, {  57,  15 }, {  61,  30 }, {  71,  45 },
  {  66,   0 }, {  75,  15 }, {  80,  30 }, {  89,  45 }, {  82,  60 },
  {  85,   0 }, {  94,  15 }, {  99,  30 }, { 108,  45 }, { 115,  60 },
  { 103,   0 }, { 113,  15 }, { 118,  30 }, { 127,  45 }, { 129,  60 },
  { 132,  15 }, { 136,  30 }, { 146,  45 }, { 162,  60 },
  { 150,  15 }, { 155,  30 }, { 164,  45 },
  { 169,  15 }, { 174,  30 }, { 183,  45 }, { 183,  60 },
  { 188,  15 }, { 192,  30 }, { 202,  45 }, { 202,  60 },
  { 213,  15 }, { 216,  30 }, { 220,  45 }, { 220,  60 }
}, {
  // LED Index to Flag
  4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4
} };

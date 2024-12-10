#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(
         KC_ESC,  KC_1,  KC_2,    KC_3,    KC_4,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_SLSH,  KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   
        KC_LCTL, KC_LGUI, KC_LALT,              KC_SPC, KC_SPC,  KC_SPC,                      KC_LEFT, KC_DOWN, KC_RGHT
),

     [1] = LAYOUT(
        KC_ESC,  KC_1,  KC_2,    KC_3,    KC_4,
        KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
        KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, 
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,  KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,             KC_TRNS,  KC_TRNS, KC_TRNS,                                         KC_TRNS,  KC_TRNS,  KC_TRNS
),

     [2] = LAYOUT(
         KC_ESC,  KC_1,  KC_2,    KC_3,    KC_4,
        KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
        KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, 
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,  KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,               KC_TRNS,  KC_TRNS,  KC_TRNS,                                         KC_TRNS,  KC_TRNS,  KC_TRNS
   ),
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =   {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] =   {ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [2] =   {ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
};
#endif


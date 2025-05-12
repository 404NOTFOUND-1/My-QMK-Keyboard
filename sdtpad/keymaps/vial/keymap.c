#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
    LT(1, KC_A), KC_B, KC_C, KC_MUTE,
    KC_D, KC_E, KC_F, KC_MUTE, 
    KC_G, KC_H, KC_I
    ),
[1] = LAYOUT(
    KC_A, KC_B, KC_C, KC_MUTE,
    KC_D, KC_E, KC_F, KC_MUTE, 
    KC_G, KC_H, KC_I
    ),
};

#if defined(RGB_MATRIX_ENABLE)
led_config_t g_led_config = { {
    { 0, 1, 2, NO_LED },
    { 3, 4, 5, NO_LED },
    { 6, 7, 8 }
}, {
    { 0, 0 }, { 10, 0 }, { 20, 0 },
    { 0, 10  }, { 10, 10  }, { 20, 10 },
    { 0, 20 }, { 10, 20 }, { 20, 20 }
}, {
    1, 1, 1, 1, 1, 1, 1, 1, 1
} };
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif

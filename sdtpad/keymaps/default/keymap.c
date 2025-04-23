#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
        KC_A, KC_B, KC_C, KC_MUTE,
        KC_D, KC_E, KC_F, KC_MUTE, 
        KC_G, KC_H, KC_I
		),
[1] = LAYOUT(
        KC_A, KC_B, KC_C, KC_MUTE,
        KC_D, KC_E, KC_F, KC_MUTE, 
        KC_G, KC_H, KC_I
		),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif

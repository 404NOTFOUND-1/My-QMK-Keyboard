#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
		LT(1, KC_ESC),             KC_DEL, 
		KC_WBAK, KC_WREF, KC_WFWD, KC_D, 
		KC_BRID, KC_BRIU, KC_MUTE, 
		RGB_MOD, KC_H
		),
[1] = LAYOUT(
		TO(0),                     RGB_TOG, 
		RGB_HUD, RGB_HUI, RGB_VAD, RGB_VAI, 
		RGB_RMOD, RGB_MOD, KC_MUTE, 
		RGB_SPD, RGB_SPI
		),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif

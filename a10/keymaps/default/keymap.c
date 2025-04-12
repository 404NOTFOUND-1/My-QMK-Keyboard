#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
		TO(1),                     KC_DEL, 
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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_numpad_17(
		LT(1,KC_NUM), KC_PSLS, KC_PAST, KC_PMNS,
		KC_P7, KC_P8, KC_P9,
		KC_P4, KC_P5, KC_P6, KC_PPLS,
		KC_P1, KC_P2, KC_P3,
		KC_P0, KC_PDOT, KC_PENT),

	[1] = LAYOUT_numpad_17(
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_RMOD,
		RGB_HUI, RGB_HUD, KC_TRNS,
		RGB_SAI, RGB_SAD, KC_TRNS, KC_TRNS,
		RGB_VAI, RGB_VAD, KC_TRNS,
		RGB_SPI, RGB_SPD, KC_TRNS)
};

#if defined(RGB_MATRIX_ENABLE)
led_config_t g_led_config = {
	{
		{0, 1, 2, 3},
		{4, 5, 6, NO_LED},
		{7, 8, 9, 10},
		{11, 12, 13, NO_LED},
		{NO_LED, 14, 15, 16},
	}, {
		{28, 3}, {84, 3}, {140, 3}, {196, 3},
		{28, 16}, {84, 16}, {140, 16},
		{28, 29}, {84, 29}, {140, 29}, {196, 19},
		{28, 41}, {84, 41}, {140, 41},
		{56, 54}, {140, 54}, {196, 45},
	}, {
		4, 4, 4, 4,
		4, 4, 4,
		4, 4, 4, 4,
		4, 4, 4,
		4, 4, 4,
	}
};
#endif

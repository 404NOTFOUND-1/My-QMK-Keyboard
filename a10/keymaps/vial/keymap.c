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

#if defined(RGB_MATRIX_ENABLE)
led_config_t g_led_config = { {
    { 0, NO_LED, NO_LED, 1 },
    { 2, 3, 4, 5 },
    { 6, 7, NO_LED, NO_LED },
    { 8, 9, NO_LED, NO_LED }
}, {
    { 100, 20 }, { 130, 20 }, 
    { 100, 30  }, { 110, 30  }, {  120, 30 }, { 130, 30 }, 
    { 100, 40 }, { 110, 40 }, 
    { 100, 50 }, { 110, 50 }
}, {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} };
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 2:
                rgb_matrix_set_color(i, RGB_YELLOW);
                break;
            case 1:
                rgb_matrix_set_color(i, RGB_CYAN);
                break;
            default:
                break;
        }
    }
    return false;
}

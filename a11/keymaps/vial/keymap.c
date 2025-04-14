#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp││Ins│PgU│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├───┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  ││Del│PgD│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤└───┴───┘
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤┌───┐
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift    ││ ↑ │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬─┬──┴┼───┼───┐
     * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Ctrl│ │ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴────┴────┴────┘ └───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,       KC_INS,  KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,       KC_DEL,  KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,       KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, LT(1,KC_RGUI), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BSPC,       KC_VOLD,  KC_VOLU,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,       KC_DEL,  KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,       KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, KC_RCTL,       KC_LEFT, KC_DOWN, KC_RGHT
    )
};

#if defined(RGB_MATRIX_ENABLE)
led_config_t g_led_config = { {
    { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,           14, 15 },
    { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 31, 32 },
    { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 },
    { 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57,         58 },
    { 59, 60, 61,             62,             63, 64, 65, 66, 67, 68 }
}, {
    { 0, 0 },{ 10, 0 },{ 20, 0 },{ 30, 0 },{ 40, 0 },{ 50, 0 },{ 60, 0 },{ 70, 0 },{ 80, 0 },{ 90, 0 },{ 100, 0 },{ 110, 0 },{ 120, 0 },{ 130, 0 },                      { 140, 0 },{ 150, 0 },
    { 0, 10  }, { 10, 10  }, {  20, 10 }, { 30, 10 },{ 40, 10 },{ 50, 10 },{ 60, 10 },{ 70, 10 },{ 80, 10 },{ 90, 10 },{ 100, 10 },{ 110, 10 },{ 120, 10 },{ 130, 10 },  { 140, 10 },{ 150, 10 }, 
    { 0, 20 }, { 10, 20 },{ 20, 20 },{ 30, 20 },{ 40, 20 },{ 50, 20 },{ 60, 20 },{ 70, 20 },{ 80, 20 },{ 90, 20 },{ 100, 20 },{ 110, 20 },{ 120, 20 },
    { 0, 30 }, { 10, 30 },{ 20, 30 },{ 30, 30 },{ 40, 30 },{ 50, 30 },{ 60, 30 },{ 70, 30 },{ 80, 30 },{ 90, 30 },{ 100, 30 },{ 110, 30 },                               { 120, 30 },
    { 0, 40 }, { 10, 40 },{ 20, 40 },                                   { 30, 40 },                     { 40, 40 },{ 50, 40 },{ 60, 40 },                     { 70, 40 },{ 80, 40 },{ 90, 40 },
}, {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,       1, 
    1, 1, 1,          1,       1, 1, 1,    1, 1, 1,  
} };
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif

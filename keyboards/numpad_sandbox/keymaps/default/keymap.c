#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_KP_MINUS, KC_KP_ASTERISK, KC_KP_SLASH, KC_NUM_LOCK,
        KC_KP_PLUS,  KC_P9,          KC_P8,       KC_P7,
        KC_KP_PLUS,  KC_P6,          KC_P5,       KC_P4,
        KC_KP_ENTER, KC_P3,          KC_P2,       KC_P1,
        KC_KP_ENTER, KC_KP_DOT,      KC_P0,       KC_P0
)
};

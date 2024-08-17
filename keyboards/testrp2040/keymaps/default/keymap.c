// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐
     * │ A │
     * └───┘
     */
    [0] = LAYOUT_ortho_1x1(
        KC_A
    )
};

//Encoder
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU); // Lautstärke erhöhen
    } else {
        tap_code(KC_VOLD); // Lautstärke verringern
    }
    return true;
};

//LED stripes
void housekeeping_task_user(void) {
    rgblight_setrgb_at(255, 0, 0, 0); //Set LED to red which is always on
}


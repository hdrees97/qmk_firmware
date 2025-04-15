// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum.h"

// Keymap Definition
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_6x18(
    KC_AUDIO_MUTE,   KC_NO,    KC_F12,   KC_F11,   KC_F10,   KC_F9,    KC_NO,    KC_F8,    KC_F7,    KC_F6,    KC_F5,    KC_NO,    KC_F4,    KC_F3,    KC_F2,    KC_F1,    KC_NO,    KC_ESC

    // Füge hier die weiteren Zeilen für die anderen Tasten hinzu, je nach Bedarf
  )
};

//Encoder
//bool encoder_update_user(uint8_t index, bool clockwise) {
//    if (clockwise) {
//        tap_code(KC_VOLU); // Lautstärke erhöhen
//    } else {
//        tap_code(KC_VOLD); // Lautstärke verringern
//    }
//    return true;
//};
//



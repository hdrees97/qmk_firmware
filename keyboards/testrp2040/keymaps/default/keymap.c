// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum.h"

// Keymap Definition
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_6x18(
    KC_AUDIO_MUTE,   KC_NO,    KC_F12,   KC_F11,   KC_F10,   KC_F9,    KC_NO,    KC_F8,    KC_F7,    KC_F6,    KC_F5,    KC_NO,    KC_F4,    KC_F3,    KC_F2,    KC_F1,    KC_NO,    KC_ESC,
    KC_PAGE_UP, KC_INSERT, KC_BSPC, KC_NO, KC_EQL, KC_MINS, KC_0, KC_9, KC_8, KC_NO, KC_7,  KC_6, KC_5, KC_4, KC_3, KC_2, KC_1, KC_GRAVE,
    KC_PAGE_DOWN, KC_END, KC_NUHS, KC_RBRC, KC_LBRC, KC_NO, KC_P, KC_O, KC_I, KC_U, KC_Y, KC_T, KC_R, KC_E, KC_W, KC_NO, KC_Q, KC_TAB,
    KC_NO, KC_NO, KC_NO,KC_ENTER, KC_QUOT, KC_SCLN, KC_L, KC_K, KC_NO, KC_J, KC_H, KC_G, KC_F, KC_D, KC_S, KC_A, KC_NO, KC_CAPS_LOCK,
    KC_NO, KC_UP, KC_NO, KC_RSFT, KC_NO, KC_SLSH, KC_DOT, KC_COMM, KC_M, KC_N, KC_B, KC_V, KC_C, KC_X, KC_NO, KC_Z, KC_NUBS, KC_LSFT,
    KC_RGHT, KC_DOWN, KC_LEFT, KC_RCTL, KC_RGUI, KC_NO, KC_RALT,  KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO, KC_LEFT_ALT, KC_NO, KC_LGUI, KC_LEFT_CTRL
     
    // Füge hier die weiteren Zeilen für die anderen Tasten hinzu, je nach Bedarf
  )
};

//encoder
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // Nur ein Encoder
        if (clockwise) {
            tap_code(KC_VOLU); // Lauter
        } else {
            tap_code(KC_VOLD); // Leiser
        }
    }
    return true;
}


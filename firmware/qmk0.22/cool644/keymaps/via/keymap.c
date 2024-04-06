// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [0] = LAYOUT_ortho_4x10(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,     KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, LT(1,KC_NO),LT(2,KC_NO),KC_NO,  KC_NO,  KC_NO, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,   KC_NO
    ),
    [1] = LAYOUT_ortho_4x10(
       KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,  KC_NO,  KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, LT(1,KC_NO),LT(2,KC_NO),KC_NO,  KC_NO,  KC_NO, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,   KC_NO
    ),
    [2] = LAYOUT_ortho_4x10(
       KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,  KC_NO,  KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, LT(1,KC_NO),LT(2,KC_NO),KC_NO,  KC_NO,  KC_NO, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,   KC_NO
    )
};

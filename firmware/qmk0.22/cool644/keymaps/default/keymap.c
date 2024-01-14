// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [0] = LAYOUT_ortho_4x10(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,  KC_NO,  KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, LT(1,KC_NO),LT(2,KC_NO),KC_NO,  KC_NO,  KC_NO, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,   KC_NO,
                 KC_1,    KC_2,    KC_3,    KC_4,               KC_5,          KC_6,     KC_7,     KC_8
    ),
    [1] = LAYOUT_ortho_4x10(
       KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,  KC_NO,  KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, LT(1,KC_NO),LT(2,KC_NO),KC_NO,  KC_NO,  KC_NO, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,   KC_NO,
                 KC_1,    KC_2,    KC_3,    KC_4,               KC_5,          KC_6,     KC_7,     KC_8
    ),
    [2] = LAYOUT_ortho_4x10(
       KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,     KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,          KC_NO,     KC_NO,  KC_NO,  KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, LT(1,KC_NO),LT(2,KC_NO),KC_NO,  KC_NO,  KC_NO, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,   KC_NO,
                 KC_1,    KC_2,    KC_3,    KC_4,               KC_5,          KC_6,     KC_7,     KC_8
    )
};

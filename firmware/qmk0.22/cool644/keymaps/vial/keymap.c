// Copyright 2022 m.ki (@telzo2000)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
[0] = LAYOUT_ortho_4x10(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,               KC_U,     KC_I,     KC_O,    KC_P,    
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,               KC_H,               KC_J,     KC_K,     KC_L,    KC_ENT,    
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,               KC_M,     KC_COMM,  KC_UP,  KC_DOT, 
    KC_LSFT, KC_LCTL, KC_LGUI, KC_LALT, LT(1,KC_SPACE),LT(2,KC_SPACE),KC_BSPC,  KC_LEFT,  KC_DOWN, KC_RIGHT,
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
    
  ),
[1] = LAYOUT_ortho_4x10(
    KC_1,     KC_2,      KC_3,      KC_4,      KC_5,                KC_6,                KC_7,     KC_8,          KC_9,           KC_0,    
    KC_EXLM,  KC_AT,     KC_HASH,   KC_DLR,    KC_PERC,             KC_CIRC,             KC_AMPR,  KC_ASTR,       KC_LPRN,        KC_RPRN, 
    KC_PPLS,  KC_PMNS,   KC_PAST,   KC_PSLS,   KC_PEQL,             KC_GRV,              KC_NO,  RSFT(KC_LBRC), RSFT(KC_RBRC),  RSFT(KC_MINS),
    KC_TAB,   KC_INSERT, KC_SPACE,  KC_SPACE,  LT(1,KC_SPACE), LT(2,KC_SPACE), KC_LCTL,  KC_LGUI,       KC_LALT,        KC_BSPC,
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
[2] = LAYOUT_ortho_4x10(
    KC_F1,    KC_F2,      KC_F3,      KC_F4,          KC_F5,               KC_F6,               KC_F7,    KC_F8,     KC_F9,     KC_F10,    
    KC_AT,    KC_BSLS,    KC_SCLN,    RSFT(KC_SCLN),  KC_QUOT,             KC_LEFT,             KC_DOWN,  KC_UP,     KC_RIGHT,  KC_EQL,
    RGB_TOG,  RGB_MOD,    RGB_HUI,    RGB_HUD,        RGB_SAI,             RGB_SAD,             RGB_VAI,  KC_LBRC,   KC_RBRC,   KC_BSLS,
    KC_TAB,   KC_INSERT,  KC_SPACE,   KC_SPACE,       LT(1,KC_SPACE), LT(2,KC_SPACE), KC_LCTL,  KC_LGUI,   KC_LALT,   KC_BSPC,
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
[0] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D),ENCODER_CCW_CW(KC_WH_U, KC_WH_D),ENCODER_CCW_CW(KC_WH_U, KC_WH_D),ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
[1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),ENCODER_CCW_CW(KC_VOLU, KC_VOLD),ENCODER_CCW_CW(KC_VOLU, KC_VOLD) ,ENCODER_CCW_CW(KC_VOLU, KC_VOLD)  },
[2] = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT),ENCODER_CCW_CW(KC_1, KC_2),ENCODER_CCW_CW(KC_1, KC_2),ENCODER_CCW_CW(KC_1, KC_2) }
};
#endif

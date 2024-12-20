// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_04x07(
        KC_ESC,   KC_GRAVE,	       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,	
        KC_APP,   KC_TAB,          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         
        KC_HOME,  KC_LEFT_CTRL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         
        KC_END, KC_LEFT_SHIFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      
        KC_NO,   KC_NO,            KC_NO,   MO(1),   KC_LGUI, KC_SPC, KC_LALT,     
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT, KC_ENT,
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, KC_RSFT,
        MO(1),   KC_SPC,  KC_BSPC, KC_RCTL, KC_NO,   KC_NO,   KC_NO 
    ),
    [1] = LAYOUT_split_04x07(
        _______,     _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,    KC_F5,       
        KC_PSCR,    _______,    _______,    KC_UP,      _______,    _______,    _______,        
        KC_DEL,     _______,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   _______,    _______,          
        KC_LALT,    _______,    _______,    _______,    _______,    _______,    _______,        
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    
        KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,    KC_F12,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,
        KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    
        _______,    _______,    KC_DEL,    _______,    _______,    _______,    _______
    )
};

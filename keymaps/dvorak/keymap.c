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
        KC_HOME, KC_GRAVE,	       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,	
        KC_END,   KC_TAB,          KC_QUOT,    KC_COMM,    KC_DOT,    KC_P,    KC_Y,         
        KC_PGUP,  KC_LEFT_CTRL,    KC_A,    KC_O,    KC_E,    KC_U,    KC_I,         
        KC_PGDN, KC_LEFT_SHIFT,    KC_SCLN,    KC_Q,    KC_J,    KC_K,    KC_X,      
        KC_NO,   KC_NO,            KC_NO,   MO(1),   KC_SPC,   KC_LGUI, KC_ESC,     
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC,   KC_RBRC,
        KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_EQL,   LT(1,KC_BSLS),
        KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,   KC_ENT,
        KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_SLSH,   KC_RSFT,
        MO(1),   KC_SPC,  KC_BSPC, KC_RCTL, KC_NO,   KC_NO,      KC_NO 
    ),
    [1] = LAYOUT_split_04x07(
        KC_ESC,     _______,    KC_F1,      KC_F2,      _______,      _______,    _______,       
        KC_PSCR,    _______,    _______,    KC_UP,      KC_RIGHT,    _______,    _______,        
        KC_DEL,     _______,    KC_LEFT,    KC_DOWN,    KC_F3,   KC_F4,      KC_F5,          
        KC_LALT,    _______,    _______,    _______,    _______,    _______,    _______,        
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    
        KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,    KC_BSPC,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,
        KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    
        _______,    _______,    KC_DEL,    _______,    _______,    _______,    _______
    )
};

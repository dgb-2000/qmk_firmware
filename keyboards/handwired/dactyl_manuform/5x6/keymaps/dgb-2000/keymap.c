#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define ESC_CTL MT(MOD_LCTL, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        DE_CIRC , DE_1  , DE_2  , DE_3  , DE_4  , DE_5  ,                        DE_6  , DE_7  , DE_8  , DE_9  , DE_0  , DE_SS ,
        KC_TAB , DE_Q  , DE_W  , DE_E  , DE_R  , DE_T  ,                         DE_Z  , DE_U  , DE_I  , DE_O  , DE_P  ,DE_UDIA,
        KC_LSFT, DE_A  , DE_S  , DE_D  , DE_F  , DE_G  ,                         DE_H  , DE_J  , DE_K  , DE_L  ,DE_ODIA,DE_ADIA,
        ESC_CTL, DE_Y  , DE_X  , DE_C  , DE_V  , DE_B  ,                         DE_N  , DE_M  ,DE_COMM,DE_DOT ,DE_MINS,DE_PLUS,
                        DE_LABK, LOWER ,                                                        DE_RABK,DE_ACUT,
                                         KC_LALT, KC_SPC,                        KC_ENT , RAISE ,
                                         DE_HASH,KC_ALGR,                        KC_BSPC,KC_RGUI,
                                         LOWER  ,KC_LGUI,                        KC_DEL ,KC_RSFT
   ),

    [_LOWER] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______, KC_P7 , KC_P8 , KC_P9 ,DE_ASTR,DE_SLSH,
        _______,_______,_______,_______,_______,_______,                        _______, KC_P4 , KC_P5 , KC_P6 ,DE_PLUS,DE_MINS,
        _______,_______,_______,_______,_______,QK_BOOT,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_P0  ,DE_EQL ,
                        _______,_______,                                                        _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______

    ),

    [_RAISE] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_MUTE,
          _______,_______,_______,_______,_______,_______,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,KC_VOLU,
          _______,_______,_______,_______,_______,_______,                        _______,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLD,
                          _______,_______,                                                        _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______
    )
};

// Copyright 2021 Kai Schneider (@kaibs)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_german.h"


// define custom macros
enum custom_keycodes {
    SPACE_SMCLN,
    AUTO_COPY,
    AUTO_PASTE
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case SPACE_SMCLN:
        if (record->event.pressed) {
            //SEND_STRING("text");
            register_code(KC_LSHIFT);
            register_code(DE_COMM);
            unregister_code(DE_COMM);
            unregister_code(KC_LSHIFT);
            register_code(KC_SPACE);
            unregister_code(KC_SPACE);
        }
        break;
    case AUTO_COPY:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(DE_C);
            unregister_code(DE_C);
            unregister_code(KC_LCTRL);
        }
        break;
    case AUTO_PASTE:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(DE_V);
            unregister_code(DE_V);
            unregister_code(KC_LCTRL);
        }
        break;
    }
    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT(
        KC_MUTE,    KC_MPRV,    KC_MNXT,
        KC_MPLY,    DE_SCLN,    SPACE_SMCLN,
        KC_SPACE,   AUTO_COPY,    AUTO_PASTE
    )
};



#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    return false;
}
#endif

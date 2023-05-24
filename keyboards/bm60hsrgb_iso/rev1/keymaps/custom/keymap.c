/* Copyright 2020 markva
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with a program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "features/select_word.h"

enum custom_keycodes {
  SELWORD = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_select_word(keycode, record, SELWORD)) { return false; }

  return true;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_60_iso_arrow(
        QK_GESC,        DE_1,        DE_2,        DE_3,  DE_4,  DE_5,    DE_6,  DE_7,  DE_8,    DE_9,    DE_0,           DE_SS, DE_ACUT, KC_BSPC,
        KC_TAB,  LT(2, DE_Q),        DE_W,        DE_E,  DE_R,  DE_T,    DE_Z,  DE_U,  DE_I,    DE_O,    DE_P,         DE_UDIA, DE_PLUS,
        KC_CAPS, LT(3, DE_A), LT(4, DE_S), LT(5, DE_D),  DE_F,  DE_G,    DE_H,  DE_J,  DE_K,    DE_L, DE_ODIA,         DE_ADIA, DE_HASH,  KC_ENT,
        KC_LSFT,     DE_LABK,        DE_Y,        DE_X,  DE_C,  DE_V,    DE_B,  DE_N,  DE_M, DE_COMM,  DE_DOT, RSFT_T(DE_MINS),   KC_UP,   TG(6),
        KC_LCTL,     KC_LGUI,     KC_LALT,                        KC_SPC,                    KC_RALT,   MO(1),         KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_60_iso_arrow(
        QK_RBT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, RGB_TOG, KC_MPRV, KC_MPLY, KC_MNXT,
        _______, DE_CIRC, DE_DEG, RGB_M_P, RGB_M_B, RGB_SPD, RGB_SPI, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
        _______, _______, _______,                            _______,                   _______, _______, KC_HOME, KC_PGDN, KC_END
    ),
    [2] = LAYOUT_60_iso_arrow(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, SELWORD,  KC_END,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT_60_iso_arrow(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        DE_LPRN, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, DE_RPRN, _______, DE_RPRN,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______
    ),
    [4] = LAYOUT_60_iso_arrow(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        DE_LCBR, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, DE_RCBR, _______, DE_RCBR,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______
    ),
    [5] = LAYOUT_60_iso_arrow(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        DE_LBRC, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, DE_RBRC, _______, DE_RBRC,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______
    ),
    [6] = LAYOUT_60_iso_arrow(
        QK_GESC,    DE_1,  DE_2,  DE_3,    DE_4,    DE_5,    DE_6,    DE_7,    DE_8,       DE_9,    DE_0,           DE_SS, DE_ACUT, KC_BSPC,
        KC_TAB,     DE_Q,  DE_W,  DE_E,    DE_R,    DE_T,    DE_Z,    DE_U,    DE_I,       DE_O,    DE_P,         DE_UDIA, DE_PLUS,
        KC_CAPS,    DE_A,  DE_S,  DE_D,    DE_F,    DE_G,    DE_H,    DE_J,    DE_K,       DE_L, DE_ODIA,         DE_ADIA, DE_HASH,  KC_ENT,
        KC_LSFT, DE_LABK,  DE_Y,  DE_X,    DE_C,    DE_V,    DE_B,    DE_N,    DE_M,    DE_COMM,  DE_DOT, RSFT_T(DE_MINS),   KC_UP,   TG(6),
        KC_LCTL,     KC_LGUI,     KC_LALT,                            KC_SPC,           KC_RALT,   MO(1),         KC_LEFT, KC_DOWN, KC_RGHT
    ),
};
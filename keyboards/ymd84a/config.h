/* Copyright 2021 Mike Tsao
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// config.h

#pragma once

// USB Device descriptor parameter
#define DEVICE_VER      0x0001

#undef STM32_HSECLK
#define STM32_HSECLK 8000000

#define TAPPING_TOGGLE 2
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define DYNAMIC_KEYMAP_MACRO_COUNT 15

// key matrix size
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 */
#define MATRIX_ROW_PINS { A0, A1, A2, A3, A4, A6, A9, B12, B13, B14, B15, A8 }
#define MATRIX_COL_PINS { A7, B0, B1, B2, B10, B11, A5, A15, B3 }

// COL2ROW or ROW2COL
#define DIODE_DIRECTION ROW2COL

#define RGB_DI_PIN B9

// Want backlighting and RGB Matrix patterns? See the note in the readme,
// apply the patches, and then uncomment the line below as well as the ones
// in rules.mk.
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_LED_COUNT 101 // 85 for the keyboard, 16 for the underglow
#define DRIVER_LED_TOTAL    
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 128
#define WS2812_PWM_DRIVER PWMD4
#define WS2812_PWM_CHANNEL 4
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM7
#define WS2812_DMA_CHANNEL 7

// Enabled RGB Matrix Animation modes. For full list see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
#define ENABLE_RGB_MATRIX_BREATHING

#define USB_POLLING_INTERVAL_MS 1

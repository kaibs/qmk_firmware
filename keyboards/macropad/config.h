// Copyright 2021 Kai Schneider (@kaibs)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER kaibs
#define PRODUCT      macropad

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { B6, B5, B4 }
#define MATRIX_COL_PINS { B9, B8, B7 }
#define UNUSED_PINS { A9, A11, A12, C13, C14, C15, B10 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


/* Encoder */
#define ENCODERS_PAD_A \
    { A15 }
#define ENCODERS_PAD_B \
    { B3 }
#define ENCODER_RESOLUTION 3

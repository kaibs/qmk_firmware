/* 2023 by Kai S.
 * based on the 2021 Mike Tsao cfg
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

#define XX NO_LED // alias for readability
#include "ymd84a.h"

#ifdef RGB_MATRIX_ENABLE 
led_config_t g_led_config = {

    // LED matrix indices for 12x9 key matrix
    { \
        { 0,    1,    2,    3,    4,    5,    6,    7,    8   }, \
        { 16,   17,   18,   19,   20,   21,   22,   23,   24   }, \
        { 31,   32,   33,   34,   35,   36,   37,   38,   39   }, \
        { 46,   47,   48,   49,   50,   51,   52,   53,   54   }, \
        { 60,   61,   62,   63,   64,   65,   66,   67,   68   }, \
        { 75,   76,   77,   78,   79,   80,   81,   82,   83   }, \
        { XX,   XX,   XX,   XX,   XX,   XX,   84,   XX,   XX }, \
        { XX,   XX,   XX,   73,   72,   71,   70,   74,   69   }, \
        { XX,   XX,   XX,   XX,   58,   57,   59,   56,   55   }, \
        { XX,   XX,   XX,   44,   43,   42,   45,   41,   40   }, \
        { XX,   XX,   30,   XX,   28,   27,   29,   26,   25   }, \
        { XX,   XX,   15,   13,   12,   11,   14,   10,   9   }, \
    },

    // physical position of LEDs on keyboard
    {
        {7, 3}, {21, 3}, {35, 3}, {49, 3}, {63, 3}, {77, 3}, {91, 3}, {105, 3}, {119, 3}, {133, 3}, {147, 3}, {161, 3}, {175, 3}, {189, 3}, {203, 3}, {217, 3},         // 16
        {7, 13}, {21, 13}, {35, 13}, {49, 13}, {63, 13}, {77, 13}, {91, 13}, {105, 13}, {119, 13}, {133, 13}, {147, 13}, {161, 13}, {175, 13}, {196, 13}, {217, 13},    // 15
        {10, 24}, {28, 24}, {42, 24}, {56, 24}, {70, 24}, {84, 24}, {98, 24}, {112, 24}, {126, 24}, {140, 24}, {154, 24}, {168, 24}, {182, 24}, {200, 24}, {217, 24},   // 15 (incl. ENTER)
        {12, 35}, {32, 35}, {46, 35}, {60, 35}, {74, 35}, {88, 35}, {102, 35}, {116, 35}, {130, 35}, {144, 35}, {158, 35}, {172, 35}, {194, 35}, {217, 35},             // 14
        {16, 45}, {32, 45}, {44, 45}, {58, 45}, {72, 45}, {86, 45}, {100, 45}, {114, 45}, {128, 45}, {142, 45}, {156, 45}, {170, 45}, {184, 45}, {203, 45}, {217, 45},  // 15
        {9, 56}, {26, 56}, {44, 56}, {96, 56}, {147, 56}, {161, 56}, {175, 56}, {189, 56}, {203, 56}, {217, 56},                                                        // 10
        {30, 5}, {60, 5}, {90, 5}, {120, 5}, {150, 5}, {180, 5}, {210, 5}, {210, 32},{210, 60},{180, 60},{150, 60},{120, 60}, {90, 60},{60, 60},{30, 60},{30, 32},      // 16 (underglow)
    },

    // LED flags (4=backlight, 2=underglow, 0=off)
    {
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, // 16
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    // 15
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    // 15
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,       // 14
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    // 15
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,                   // 10
        //2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, // 16 (underglow)
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    }
};

void suspend_power_down_kb(void){
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_kb(void){
    rgb_matrix_set_suspend_state(false);
}

#endif

/* 2023 by Kai S.
 * based on the 2018 MechMerlin cfg
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

#pragma once
#include "quantum.h"


/* LAYOUT_75_iso
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │Esc│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│Psc│Pse│Del│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │0  │ - │ = │BckSpc │Hm │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │     │End│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐Ent ├───┤
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ # │    │PgU│
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
 * │Shft│ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │Shift │ ↑ │PgD│
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │Ctrl│Sup │Alt │          Space         │Alt│Mo │Ctl│ ← │ ↓ │ → │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
*/


#define LAYOUT(\
    K50, K51, K52, K53, K54, K55, K56, K57, K58, KB8, KB7, KB5, KB4, KB3, KB6, KB2,   \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, KA8, KA7, KA5, KA4, KA6,      KA2,   \
    K30,   K31, K32, K33, K34, K35, K36, K37, K38, K98, K97, K95, K94,         K96,   \
    K20,    K21, K22, K23, K24, K25, K26, K27, K28, K88, K87, K85, K93,   K84, K86,   \
    K10,  K11, K12, K13, K14, K15, K16, K17, K18, K78, K77, K75, K74,     K73, K76,   \
    K00,  K01,  K02,              K06,                K08, K07, K05, K04, K03, K66    \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38   }, \
    { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48   }, \
    { K50,   K51,   K52,   K53,   K54,   K55,   K56,   K57,   K58   }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K66,   KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, K73,   K74,   K75,   K76,   K77,   K78   }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, K93,   K85,   K86,   K87,   K88   }, \
    { KC_NO, KC_NO, KC_NO, K84,   K94,   K95,   K96,   K97,   K98   }, \
    { KC_NO, KC_NO, KA2,   KC_NO, KA4,   KA5,   KA6,   KA7,   KA8   }, \
    { KC_NO, KC_NO, KB2,   KB3,   KB4,   KB5,   KB6,   KB7,   KB8   } \
}



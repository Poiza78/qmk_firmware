/* Copyright 2020 Poiza
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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    BASE,
    FUNC,
    NUMP,
    SYMB
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [BASE] = LAYOUT(
    KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,		KC_Y,	KC_U,	KC_I,	KC_O,	\
    S(KC_A), 	C(KC_S),G(KC_D),A(KC_F),KC_G,		A(KC_H),G(KC_J),C(KC_K),S(KC_L),\
    KC_X,	KC_X,	KC_C,	KC_V,	,KC_B,		KC_N,	KC_M,	KC_P,	KC_SLSH,
    LT(FUNC, KC_TAB), LT(NUMP, KC_ESC), KC_SPC,		LT(SYMP, KC_ENT)

    ),
    [FUNC] = LAYOUT(

    ),
    [NUMP] = LAYOUT(

    ),
    [SYMB] = LAYOUT(

    )
};

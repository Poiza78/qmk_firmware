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
    [BASE] = LAYOUT_reviung34hw(
    KC_Q,	  KC_W,		KC_E,	      KC_R,	    KC_T,	KC_Y,	      KC_U,	    KC_I,	  KC_O,		\
    LSFT_T(KC_A), LCTL_T(KC_S), LGUI_T(KC_D), LALT_T(KC_F), KC_G,	LALT_T(KC_H), LGUI_T(KC_J), LCTL_T(KC_K), LSFT_T(KC_L),	\
    KC_Z,	  KC_X,		KC_C,	      KC_V,	    KC_B,	KC_N,	      KC_M,	    KC_P,	  KC_BSPC,	\
    			 LT(FUNC, KC_TAB),KC_ESC,LT(NUMP,KC_SPC),	LT(SYMB, KC_ENT)
    ),
    [FUNC] = LAYOUT_reviung34hw(
    KC_F12,	KC_F7,	KC_F8,	KC_F9,	KC_PSCR,	KC_MUTE, KC_VOLU, KC_VOLD, KC_NO,	\
    KC_F11,	KC_F4,	KC_F5,	KC_F6,	KC_CAPS,	KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT,	\
    KC_F10,	KC_F1,	KC_F2,	KC_F3,	KC_INS,		KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,	\
			KC_TAB,	KC_ESC,	KC_SPC,		KC_ENT
    ),
    [NUMP] = LAYOUT_reviung34hw(
    KC_LBRC,	KC_7,	KC_8,	KC_9,	KC_RBRC,	KC_NO,   KC_MINS, KC_NO,   KC_NO,	\
    KC_LSFT,	KC_4,	KC_5,	KC_6,	KC_EQL,		KC_SLSH, KC_COMM, KC_DOT,  KC_QUOT,	\
    KC_GRV,	KC_1,	KC_2,	KC_3,	KC_BSLS,	KC_NO,   KC_SCLN, KC_NO,   KC_NO,	\
			KC_MINS,KC_NO,	KC_NO,		KC_0
    ),
    [SYMB] = LAYOUT_reviung34hw(
    KC_LCBR,	KC_OMPR,KC_OSTR,KC_LPRN,KC_RCBR,	KC_NO,	 KC_NO,   KC_NO,   KC_NO,	\
    KC_NO,	KC_DLR, KC_PERC,KC_CIRC,KC_PLUS,	KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT,	\
    KC_TILD, 	KC_EXLM,KC_AT,  KC_HASH,KC_PIPE,	KC_NO,	 KC_NO,   KC_NO,   KC_NO,	\
			KC_NO,  KC_LPRN,KC_RPRN,	KC_NO
    )
};

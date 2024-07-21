// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
		KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC,
		KC_SLSH, KC_SPC, KC_SPC, KC_SPC, KC_SPC,
		KC_Z,   KC_Z, KC_SPC, KC_SPC, KC_SPC,
		_______, _______, _______, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, _______, _______, _______
    )
};

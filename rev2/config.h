/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6F77
#define PRODUCT_ID      0x0002
#define DEVICE_VER      0x0002
#define MANUFACTURER    Dynoma5
#define PRODUCT         wSplit

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS_RIGHT { B5, B4, E6, D7, C6, D4}

// #define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 } //uncomment this line and comment line above if you need to reverse left-to-right key order

#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3


/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C
#define SOFT_SERIAL_PIN D0

//#define MASTER_LEFT
#define MASTER_LEFT

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
// #define VIAL_KEYBOARD_UID {0x2E, 0x9A, 0x75, 0x48, 0x26, 0xA7, 0x30, 0x40}
// #define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
// #define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
// /* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

// /* ws2812 RGB LED */
// #define RGB_DI_PIN D3

// #define RGBLED_NUM 12    // Number of LEDs

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
// Homerow mods
#define TAPPING_TERM 200
// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD
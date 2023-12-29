#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _GAME 2
#define _DVORAK 1
#define _LOWER 3
#define _RAISE 4
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  GAME,
  DVORAK
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* QWERTY
 * ,-----------------------------------------------------------------------------------.
 * |  SH  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  SH  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |   Y  |  U   |   I  |   O  |   P  | ENTER|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   :  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |SHIFT |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   ?  | SHIFT|
 * `-----------------------------------------------------------------------------------'
 *                      | GAME | BKSP |  NAV | SPEC | SPC  |  NUM |
 *                      `-----------------------------------------`
*/
[_QWERTY] = LAYOUT_ortho_4x12(
  SH_TG,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    SH_TG, \
  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT, \
  KC_ESC,   LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F),    KC_G,    KC_H,    RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), LGUI_T(KC_SCLN),    KC_QUOT, \
  KC_LCTL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL, \
                              KC_LSFT, KC_SPACE,MO(_LOWER), MO(_RAISE),KC_BSPACE,  KC_RSFT  \
),

/* DVORAK
 * ,-----------------------------------------------------------------------------------.
 * |  SH  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  SH  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | TAB  |   "  |   ,  |   .  |   P  |   Y  |   F  |  G   |   C  |   R  |   L  | ENTER|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | ESC  |   A  |   O  |   E  |   U  |   I  |   D  |  H   |   T  |   N  |   S  |   -  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |SHIFT |   ;  |   Q  |   J  |   K  |   X  |   B  |  M   |   W  |   V  |   Z  | SHIFT|
 * `-----------------------------------------------------------------------------------'
 *                      | GAME | BKSP |  NAV | SPEC | SPC  |  NUM |
 *                      `-----------------------------------------`
*/
[_DVORAK] = LAYOUT_ortho_4x12(
  SH_TG,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    SH_TG, \
  KC_TAB,   KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_ENT, \
  KC_ESC,   LGUI_T(KC_A), LALT_T(KC_O), LSFT_T(KC_E), LCTL_T(KC_U),    KC_I,    KC_D,    RCTL_T(KC_H), RSFT_T(KC_T), RALT_T(KC_N), LGUI_T(KC_S),    KC_MINS, \
  KC_LCTL,  KC_SCLN,    KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W, KC_V,  KC_Z, KC_RCTL, \
                              KC_LSFT, KC_SPACE, MO(_LOWER), MO(_RAISE), KC_BSPACE, KC_RSFT  \
),

/* Gaming
 * ,-----------------------------------------------------------------------------------.
 * |  SH  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  SH  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |   Y  |  U   |   I  |   O  |   P  | ENTER|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   :  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |SHIFT |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   ?  | SHIFT|
 * `-----------------------------------------------------------------------------------'
 *                      | GAME | BKSP |  NAV | SPEC | SPC  |  NUM |
 *                      `-----------------------------------------`
*/
[_GAME] = LAYOUT_ortho_4x12(
  SH_TG,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    SH_TG, \
  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT, \
  KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LCTL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL, \
                         KC_LSFT,  KC_SPACE, MO(_LOWER),  MO(_RAISE),KC_BSPACE,  KC_RSFT  \
),

/* Lower | Navigation
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | ADJ  | PGUP | BSCP |  UP  |  DEL | PGDN |   -  |   7  |   8  |   8  |   +  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      | HOME | LEFT | DOWN | RIGHT|  END |      |   4  |   5  |   6  |   ,  |  .   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |  TAB |      | ENTER|      |   :  |   1  |   2  |   3  |   0  |      |
 * `-----------------------------------------------------------------------------------'
 *                      |      |      |      |      |      |      |
 *                      `-----------------------------------------`
 */
[_LOWER] = LAYOUT_ortho_4x12(
  KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, \
  _ADJUST, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN, KC_MINS, KC_7,    KC_8,    KC_9,    KC_PLUS, _______, \
  _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______, KC_4,    KC_5,    KC_6,    KC_COMM, KC_DOT, \
  _______, _______, KC_TAB,  _______, KC_ENT,  _______, KC_COLN, KC_1,    KC_2,    KC_3,    KC_0,    _______, \
                          _______, _______, _______, _______, _______, _______ \
),

/* Raise | Special Chars
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |   _  |  [   |   ]  |   ^  |   !  |   <  |   >  |   =  |   &  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   \  |   /  |  {   |   }  |   *  |   ?  |   (  |   )  |   -  |   :  |  @   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   #  |   $  |  |   |   `  |   ~  |   +  |   %  |   "  |   '  |   ;  |      |
 * `-----------------------------------------------------------------------------------'
 *                      |      |      |      |      |      |      |
 *                      `-----------------------------------------`
 */
[_RAISE] = LAYOUT_ortho_4x12(
  KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, \
  _______, _______, KC_UNDS, KC_LBRC, KC_RBRC, KC_CIRC, KC_EXLM, KC_LABK, KC_RABK, KC_EQL,  KC_AMPR, _______, \
  _______, KC_BSLS, KC_SLSH, KC_LCBR, KC_RCBR, KC_ASTR, KC_QUES, KC_LPRN, KC_RPRN, KC_MINS, KC_COLN, KC_AT, \
  _______, KC_HASH, KC_DLR,  KC_PIPE, KC_TILD, KC_GRV,  KC_PLUS, KC_PERC, KC_DQUO, KC_QUOT, KC_SCLN, _______, \
                           _______, _______, _______, _______, _______, _______ \
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Dvorak|Game  |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 *                      |      |      |      |      |      |      |
 *                      `-----------------------------------------`
 */
[_ADJUST] =  LAYOUT_ortho_4x12(
  KC_PIPE, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL, \
  _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM, QWERTY,  DVORAK,  GAME,    _______, _______, _______, \
  _______, DVORAK,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                             _______, _______, _______, _______, _______, _______\
)


};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
    case GAME:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_GAME);
      }
      return false;
    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
  }
  return true;
}

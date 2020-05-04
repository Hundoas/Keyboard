#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, DEL \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, VOLUP \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT,    ENT,  VOLDOWN \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM, DOT, SLSH,     RSFT, UP, MUTE \
        LCTL,LGUI,LALT,          SPC,              FN0, RGUI, RCTL, LEFT, DOWN, RIGHT ),
   /* 1: FN0 */
    KEYMAP(
        TRNS,F1,F2,F3,F4,F5,F6,F7,F8,F9,F10,F11,F12,TRNS,TRNS \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS ),
   

};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};

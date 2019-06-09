#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_60_iso( /* Base */
    KC_ESC,  KC_1,          KC_2,     KC_3,     KC_4,     KC_5,     KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_MINS,         KC_EQL,        KC_BSPC,        \
    KC_TAB,  KC_Q,          KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,    KC_LBRC,         KC_RBRC,                       \
    KC_CAPS, KC_A,          KC_S,     KC_D,     KC_F,     KC_G,     KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN, KC_QUOT,         KC_NUHS,       KC_ENT,         \
    KC_LSFT, KC_NUBS,       KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,                        RSFT_T(KC_UP),  \
    KC_LCTL, DEBUG,         KC_LALT,                               KC_SPC,                              KC_RALT, RGUI_T(KC_LEFT), LT(2,KC_DOWN), RCTL_T(KC_RGHT)),
    
[1] = LAYOUT_60_iso( /* FN 1*/
    KC_GRV,  KC_F1,         KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,          KC_F12,        KC_DEL, \
    KC_TRNS, KC_NO,         KC_UP,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_PSCR, KC_NO,           KC_NO,                 \
    KC_TRNS, KC_LEFT,       KC_DOWN,  KC_RGHT,  KC_NO,    KC_NO,    KC_NO,   KC_PGUP, KC_NO,   KC_NO,    KC_NO,   KC_NO,           KC_NO,         KC_TRNS,\
    KC_TRNS, KC_NO,         KC_MRWD,  KC_MFFD,  KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_PGDN, KC_HOME,  KC_END,  KC_NO,                          KC_TRNS,\
    KC_NO,   KC_NO,         KC_NO,                                  KC_MPLY,                             KC_TRNS, KC_TRNS,         KC_TRNS,       KC_TRNS),

[2] = LAYOUT_60_iso( /* FN 2*/
    RGB_TOG, RGB_HUI,       RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD, RGB_SPI, RGB_SPD, KC_NO,    KC_NO,   KC_NO,           KC_NO,         KC_TRNS,\
    KC_NO,   RGB_M_P,       RGB_M_B,  RGB_M_R,  RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, KC_NO,    KC_PSCR, KC_NO,           KC_NO,                 \
    KC_NO,   RGB_MOD,       KC_NO,    RGB_RMOD, S1_DEC,   S1_INC,   S2_DEC,  S2_INC,  KC_NO,   KC_NO,    KC_NO,   KC_NO,           KC_NO,           KC_NO,\
    KC_NO,   KC_NO,         EF_DEC,   EF_INC,   H1_DEC,   H1_INC,   H2_DEC,  H2_INC,  BR_DEC,  BR_INC,   ES_DEC,  ES_INC,                           KC_NO,\
    KC_NO,   KC_NO,         KC_NO,                                  BL_TOGG,                             KC_NO,   KC_NO,           KC_NO,           KC_NO),
    
[3] = LAYOUT_60_iso( /* Empty for dynamic keymaps */
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),
};

void matrix_init_user(void) {
  //user initialization
}

void matrix_scan_user(void) {
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}


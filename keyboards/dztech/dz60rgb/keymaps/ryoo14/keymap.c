#include QMK_KEYBOARD_H

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* Base
    * |--------------------------------------------------------------------------------------|
    * | ESC  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |BKSPACE|
    * |------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-------+
    * | TAB  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \   |
    * |------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-------+
    * | CTRL |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    ENTER    |
    * |------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-------+
    * | SHIFT|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |     /     | UP  |  DEL  |
    * |------+-----+-----+-------------------------------------------------------------------|
    * | CTRL | ALT |SUPER|                SPACE              | ALT | FN  |LEFT |DOWN | RIGHT |
    * |--------------------------------------------------------------------------------------|
    */
		[_LAYER0] = LAYOUT( /* Base */
			KC_GESC,   KC_1,     KC_2,      KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,        KC_9,    KC_0,    KC_MINS,    KC_EQL,     KC_BSPC,    \
		  KC_TAB,    KC_Q,     KC_W,      KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,        KC_O,    KC_P,    KC_LBRC,    KC_RBRC,    KC_BSLASH,  \
			KC_LCTL,   KC_A,     KC_S,      KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,        KC_L,    KC_SCLN, KC_QUOT,                KC_ENT,     \
		  KC_LSFT,   KC_Z,     KC_X,      KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,     KC_DOT,           KC_SLSH,    KC_UP,      KC_DEL,     \
		  KC_LCTL,   KC_LALT,  KC_LGUI,                       KC_SPC,                                    KC_RALT, MO(1),   KC_LEFT,    KC_DOWN,    KC_RIGHT    \
    ),

   /* Base_FN
    * |--------------------------------------------------------------------------------------|
    * | Z/H  |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 | F8  | F9  | F10 | F11 | F12 |  DEL  |
    * |------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-------+
    * |RGBOFF|     |     |     |     |     |     |     |     |     |     |VOLUP|VOLDW|       |
    * |------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-------+
    * |      |     |     |     |     |     |     |     |     |     |     |     |             |
    * |------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-------+
    * |      |     |     |     |     |     |     |     |     |     |           |PGUP |       |
    * |------+-----+-----+-------------------------------------------------------------------|
    * |      |     |     |                                   |     |     |HOME |PGDW |  END  |
    * |--------------------------------------------------------------------------------------|
    */
		[_LAYER1] = LAYOUT( /* Base_FN */
		  KC_GRV,    KC_F1,    KC_F2,     KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,       KC_F9,   KC_F10,  KC_F11,     KC_F12,     KC_DEL ,    \
		  RGB_TOG,   TO(2),    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_VOLU,    KC_VOLD,    RESET  ,    \
		  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,                EEP_RST,    \
		  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,          KC_TRNS,    KC_PGUP,    KC_TRNS,    \
			KC_TRNS,   KC_TRNS,  KC_TRNS,                       KC_TRNS,                                   KC_TRNS, KC_TRNS, KC_HOME,    KC_PGDOWN,  KC_END      \
    ),

		[_LAYER2] = LAYOUT( /* JP */
			KC_GESC,   KC_1,     KC_2,      KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,        KC_9,    KC_0,    KC_MINS,    S(KC_MINS), KC_BSPC,    \
		  KC_TAB,    KC_Q,     KC_W,      KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,        KC_O,    KC_P,    KC_RBRC,    KC_BSLS,    KC_RO,      \
			KC_LCTL,   KC_A,     KC_S,      KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,        KC_L,    KC_SCLN, S(KC_7),                KC_ENT,     \
		  MO(3),     KC_Z,     KC_X,      KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,     KC_DOT,           KC_SLSH,    KC_UP,      KC_DEL,     \
		  KC_LCTL,   KC_LALT,  KC_LGUI,                       KC_SPC,                                    KC_RALT, MO(4),   KC_LEFT,    KC_DOWN,    KC_RIGHT    \
    ),

		[_LAYER3] = LAYOUT( /* JP_SHIFT */
			S(KC_LBRC), S(KC_1),  KC_LBRC,  S(KC_3),  S(KC_4),  S(KC_5),  KC_EQL,   S(KC_6),  S(KC_QUOTE), S(KC_8), S(KC_9), S(KC_RO),   S(KC_SCLN), KC_TRNS,    \
		  KC_TAB,     S(KC_Q),  S(KC_W),  S(KC_E),  S(KC_R),  S(KC_T),  S(KC_Y),  S(KC_U),  S(KC_I),     S(KC_O), S(KC_P), S(KC_RBRC), S(KC_BSLS), S(KC_JYEN), \
			KC_LCTL,    S(KC_A),  S(KC_S),  S(KC_D),  S(KC_F),  S(KC_G),  S(KC_H),  S(KC_J),  S(KC_K),     S(KC_L), KC_QUOT, S(KC_2),                KC_ENT,     \
		  KC_TRNS,    S(KC_Z),  S(KC_X),  S(KC_C),  S(KC_V),  S(KC_B),  S(KC_N),  S(KC_M),  KC_COMM,     KC_DOT,           S(KC_SLSH), KC_UP,      KC_DEL,     \
		  KC_LCTL,    KC_LALT,  KC_LGUI,                      KC_SPC,                                    KC_RALT, MO(3),   KC_LEFT,    KC_DOWN,    KC_RIGHT    \
    ),

		[_LAYER4] = LAYOUT( /* JP_FN */
		  KC_GRV,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,       KC_F9,   KC_F10,  KC_F11,     KC_F12,     KC_DEL,     \
		  RGB_TOG,    TO(0),    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_VOLU,    KC_VOLD,    RESET  ,    \
		  KC_TRNS,    KC_TRNS,  KC_DOWN,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,                EEP_RST,    \
		  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,          KC_TRNS,    KC_PGUP,    KC_TRNS,    \
			KC_TRNS,    KC_TRNS,  KC_TRNS,                      KC_TRNS,                                   KC_TRNS, KC_TRNS, KC_HOME,    KC_PGDOWN,  KC_END      \
    ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	  return true;
}

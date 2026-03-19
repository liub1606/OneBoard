
#include QMK_KEYBOARD_H
#define ENCODER_PIN_A PA03_A2_SCK  // Encoder A
#define ENCODER_PIN_B PA09_A5_SCL  // Encoder B


void encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU); // Increase volume
    } else {
        tap_code(KC_VOLD); // Decrease volume
    }
}


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
        KC_ESCAPE,   KC_TAB,    KC_Q,      KC_W,      // Row 1
        KC_E,        KC_R,      KC_A,      KC_S,      // Row 2
        KC_D,        KC_F,      KC_LEFT_SHIFT, KC_Z,   // Row 3
        KC_X,        KC_C,      KC_V,      KC_LEFT_CTRL, // Row 4
        KC_PAUSE,    KC_LEFT_GUI, KC_LEFT_ALT, KC_SPACE //Row 5
    )
};

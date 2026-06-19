#include "definitions.h"

enum custom_keycodes {
    HAVEANICEDAY = SAFE_RANGE,
    FUBAR,
    STRIPE_ACC,
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Clear oneshot layer after first keypress
    if (record->event.pressed) {
        if (get_oneshot_layer_state() == ONESHOT_PRESSED) {
            clear_oneshot_layer_state(ONESHOT_PRESSED);
        }
    }
    switch (keycode) {
        case HAVEANICEDAY:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("Have a nice day!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case FUBAR:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING(":!ls");
                tap_code(KC_ENTER);
                /* tap_code16(KC_GRV); // Sends "<" */
                /* SEND_STRING("CR"); */
                /* tap_code16(LSFT(KC_GRV));  // Sends ">" */
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case STRIPE_ACC:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("4242424242424242" SS_TAP(X_TAB) "0444" SS_TAP(X_TAB) "444");
            } else {
                // when keycode QMKBEST is released
            }
            break;
    }
    return true;

};

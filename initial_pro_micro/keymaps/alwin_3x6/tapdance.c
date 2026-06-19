#include QMK_KEYBOARD_H

/* enum { */
/*     TD_AA_DELLINE, // single: Å, double: delete line */
/* }; */
/**/
/* tap_dance_action_t tap_dance_actions[] = { */
/*     [TD_AA_DELLINE] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, LGUI(KC_BSPC)), */
/* }; */

// Tap dance
// TD_BTICK: enkeltryck = ` (backtick), dubbelklick = \ (backslash)
// OBS: kräver TAP_DANCE_ENABLE = yes i rules.mk
typedef enum { TD_BTICK } tap_dance_indices;

void td_btick_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("`");    // sendstring_swedish.h hanterar dead key-sekvensen
    } else {
        tap_code16(SE_BSLS_MAC);   // \ = Shift+Opt+7 på svensk Mac
    }
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_BTICK] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_btick_finished, NULL),
};

#include QMK_KEYBOARD_H
/* #include "macros.c" */
#include "definitions.h"
// #include "mac.c"

// const uint16_t PROGMEM cut[]                    = {KC_P, KC_B, COMBO_END};                         //   cut
// const uint16_t PROGMEM copy[]                   = {KC_T, KC_G, COMBO_END};                         //   copy
// const uint16_t PROGMEM paste[]                  = {KC_D, KC_V, COMBO_END};                         //   paste
// const uint16_t PROGMEM delete_line[]            = {KC_SCLN, KC_LBRC, COMBO_END};                   //   delete a whole line
// const uint16_t PROGMEM delete_word_back[]       = {KC_R, KC_S, KC_T, COMBO_END};                   //   delete a whole word
// const uint16_t PROGMEM jump_one_word_back[]     = {KC_X, KC_C, COMBO_END};                         //   jump one word back
// const uint16_t PROGMEM jump_one_word_forward[]  = {KC_COMM, KC_DOT, COMBO_END};                    //   jump one word forwardmmmmml
// const uint16_t PROGMEM select_all[]             = {KC_W, KC_F, KC_P, COMBO_END};                   //   select all (cmd+a)
// const uint16_t PROGMEM alt[]                    = {KC_R, KC_S, COMBO_END};                         //   alt
// const uint16_t PROGMEM question_mark[]             = {KC_I, KC_O, COMBO_END};                         //   ?

const uint16_t PROGMEM qmk_reset[]                 = {KC_W, KC_E, KC_R, KC_U, KC_I, KC_O, COMBO_END}; //   qmk reset

// Nya
const uint16_t PROGMEM er_combo[]    = {SE_E, SE_R, COMBO_END};
const uint16_t PROGMEM df_combo[]    = {HM_D, HM_F, COMBO_END};      // home-row-mods!
const uint16_t PROGMEM cv_combo[]    = {SE_C, SE_V, COMBO_END};
const uint16_t PROGMEM we_combo[]    = {SE_W, SE_E, COMBO_END};

const uint16_t PROGMEM ui_combo[]    = {SE_U, SE_I, COMBO_END};
const uint16_t PROGMEM jk_combo[]    = {HM_J, HM_K, COMBO_END};      // home-row-mods!
const uint16_t PROGMEM mcomm_combo[] = {SE_M, SE_COMM, COMBO_END};
const uint16_t PROGMEM io_combo[]    = {SE_I, SE_O, COMBO_END};

combo_t key_combos[] = {
    // COMBO(cut,                   LGUI(KC_X)),
    // COMBO(paste,                 LGUI(KC_V)),
    // COMBO(copy,                  LGUI(KC_C)),
    // COMBO(delete_line,           LGUI(KC_BSPC)),
    // COMBO(delete_word_back,      LALT(KC_BSPC)),
    // COMBO(jump_one_word_back,    LOPT(KC_LEFT)),
    // COMBO(jump_one_word_forward, LOPT(KC_RIGHT)),
    // COMBO(select_all,            LGUI(KC_A)),
    // COMBO(alt,                   KC_LALT),
    // COMBO(question_mark,            LSFT(KC_MINS)),

    COMBO(qmk_reset,                QK_BOOT),

    // Nya
    COMBO(er_combo,    LALT(KC_8)),   // e + r → [
    COMBO(df_combo,    LSFT(KC_8)),   // d + f → (
    COMBO(cv_combo,    RSA(KC_8)),    // c + v → {
    COMBO(we_combo,    KC_GRV),         // w + e →

    COMBO(ui_combo,    LALT(KC_9)),   // u + i → ]
    COMBO(jk_combo,    LSFT(KC_9)),   // j + k → )
    COMBO(mcomm_combo, RSA(KC_9)),    // m + , → }
    COMBO(io_combo,    LSFT(KC_GRV)),   // i + o → >
};

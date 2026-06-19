#include QMK_KEYBOARD_H
#include "definitions.h"

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

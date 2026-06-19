#pragma once

// generic
#define                 NONE                      KC_NO

// ── Svenska Mac-specifika keycodes ────────────────────────────────────
// Dessa skiljer sig från keymap_swedish.h som är gjord för Windows/Linux.
#define SE_PIPE_MAC           LALT(KC_7)         // | = Option+7
#define SE_BSLS_MAC LSFT(LALT(KC_7))             // \ = Shift+Option+7

// ── Home row mods (GACS) ───────────────────────────────────────────────
// Cmd / Alt / Ctrl / Shift, utåt från pekfingret. Samma teckenbredd som
// SE_* så att kommentarsrutorna i base-lagret håller linjen.
#define HM_A    LGUI_T(SE_A)
#define HM_S    LALT_T(SE_S)
#define HM_D    LCTL_T(SE_D)
#define HM_F    LSFT_T(SE_F)

#define HM_J    RSFT_T(SE_J)
#define HM_K    RCTL_T(SE_K)
#define HM_L    RALT_T(SE_L)
#define HM_ODIA RGUI_T(SE_ODIA)

// #define                 ZOOM_OUT                  LGUI(KC_SLSH)
// #define                 ZOOM_IN                   LGUI(KC_MINS)
//
// #define                 ALT_ESC                   LALT_T(KC_ESC)
// #define                 L1_BSPC                   LT(1, KC_BSPC)
// #define                 L1_SPC                    LT(1, KC_SPC)
// #define                 L3_SPC                    LT(3, KC_SPC)
// #define                 L2_ESC                    LT(2, KC_ESC)
// #define                 CMD_TAB                   LGUI_T(KC_TAB)
// #define                 CTRL_ENT                  RCTL_T(KC_ENT)
// #define                 L2_NONE                   LT(2, KC_NO)
//
// #define                 LEFT                      KC_LEFT
// #define                 DOWN                      KC_DOWN
// #define                 UP_                       KC_UP
// #define                 RIGHT                     KC_RIGHT
//
// #define                 CTRL_TAB                  LCTL(LSFT(KC_TAB))
// #define                 CTRL_SFT_TAB              LCTL(KC_TAB)
// #define                 D_WORD                    LALT(KC_BSPC) // delete word
// #define                 D_LINE                    LGUI(KC_BSPC) // delete line
//
// // Symbols
// #define                 PIPE                      LALT(KC_7)
// #define                 AT                        RALT(KC_2)
// #define                 AND                       LSFT(KC_6)
// #define                 SLASH                     LSA(KC_7)
// #define                 TILDE                     RALT(KC_RBRC)
// #define                 PLUS                      KC_PPLS
// #define                 BANG                      KC_EXLM
// #define                 QUO                       LSFT(KC_2)
// #define                 HASH                      KC_HASH
// #define                 DOLLAR                    RALT(KC_4)
// #define                 PCENT                     LSFT(KC_5)
// #define                 EQUAL                     LSFT(KC_0)
// #define                 ODD_QUO                   KC_PLUS
// #define                 LESS                      KC_GRV
// #define                 MORE                      KC_TILD
// #define                 HYPH                      LSFT(KC_SLSH)
// #define                 LOW_HYPH                  KC_SLSH
// #define                 TIMES                     KC_PIPE,
//
// // layer2
// #define                 GO_TO_1                   LCA(KC_1)
// #define                 GO_TO_2                   LCA(KC_2)
// #define                 GO_TO_3                   LCA(KC_3)
// #define                 GO_TO_4                   LCA(KC_4)
// #define                 GO_TO_5                   LCA(KC_5)
// #define                 GO_TO_6                   LCA(KC_6)
// #define                 GO_TO_7                   LCA(KC_7)
// #define                 GO_TO_8                   LCA(KC_8)
// #define                 GO_TO_9                   LCA(KC_9)
//
// // iMovie
// #define                 SEP_AUDO                  LGUI(LALT(KC_B))
// #define                 PLAY_PAUSE                KC_SPC
// #define                 CUT                       SGUI(LSFT(KC_S))
// #define                 UNDO                      LGUI(KC_Z)
// #define                 DELETE                    KC_BSPC
// #define                 SRC_TEXT                  LCTL(LGUI(LALT(KC_O)))
// #define                 SRC_SHOT                  SGUI(LSFT(KC_2))

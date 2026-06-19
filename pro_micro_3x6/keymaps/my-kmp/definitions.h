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

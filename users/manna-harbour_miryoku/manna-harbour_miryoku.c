// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-
// https://config.qmk.fm/#/test

#include "manna-harbour_miryoku.h"
#include "sendstring_spanish.h"
//#include "sendstring_spanish_dvorak.h"
//make crkbd:manna-harbour_miryoku:avrdude-split-left MIRYOKU_ALPHAS=QWERTY

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined MIRYOKU_ALPHAS_QWERTY
  [BASE] = LAYOUT_miryoku(
    KC_ESC,      ES_Q,              ES_W,              ES_E,              ES_R,              ES_T,              ES_Y,              ES_U,              ES_I,              ES_O,              ES_P,            KC_BSPC,    
    KC_COPY,     LGUI_T(ES_A),      LALT_T(ES_S),      LCTL_T(ES_D),      LSFT_T(ES_F),      ES_G,              ES_H,              LSFT_T(ES_J),      LCTL_T(ES_K),      LALT_T(ES_L),      LGUI_T(ES_SCLN), ES_QUOT,    //ES_QUOT, ES_SCLN
    KC_PSTE,     ES_Z,              ALGR_T(ES_X),      ES_C,              ES_V,              ES_B,              ES_N,              ES_M,              ES_COMM,           ALGR_T(ES_DOT),    ES_SLSH,         KC_MPLY,    
                                                       LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL,KC_BSPC ),  LT(FUNL, KC_DEL)
  ),
#else //DVORAK
  [BASE] = LAYOUT_miryoku(
    KC_ESC,       ES_DOT,            ES_COMM,           LGUI_T(ES_SCLN),   ES_P,              ES_Y,              ES_F,              ES_G,              ES_C,              ES_R,              ES_L,             KC_ENT,
    KC_COPY,      LGUI_T(ES_A),      LALT_T(ES_O),      LCTL_T(ES_E),      LSFT_T(ES_U),      ES_I,              ES_D,              LSFT_T(ES_H),      LCTL_T(ES_T),      LALT_T(ES_N),      LGUI_T(ES_S),     ES_QUOT,
    KC_PSTE,      ES_SLSH,           ALGR_T(ES_Q),      ES_J,              ES_K,              ES_X,              ES_B,              ES_M,              ES_W,              ALGR_T(ES_V),      ES_Z,             KC_MPLY,
                                                        LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_ENT),  LT(FUNL, KC_DEL)
  ),
//#else //DVORAK
//  [BASE] = LAYOUT_miryoku(
//    KC_ESC,       ES_DOT,            ES_COMM,           LGUI_T(ES_SCLN),   ES_P,              ES_Y,              ES_F,              ES_G,              ES_C,              ES_R,              ES_L,             KC_ENT,
//    KC_COPY,      LGUI_T(ES_A),      LALT_T(ES_O),      LCTL_T(ES_E),      LSFT_T(ES_U),      ES_I,              ES_D,              LSFT_T(ES_H),      LCTL_T(ES_T),      LALT_T(ES_N),      LGUI_T(ES_S),     ES_QUOT,
//    KC_PSTE,      ES_SLSH,           ALGR_T(ES_Q),      ES_J,              ES_K,              ES_X,              ES_B,              ES_M,              ES_W,              ALGR_T(ES_V),      ES_Z,             KC_MPLY,
//                                                        LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_ENT),  LT(FUNL, KC_DEL)
//  ),
#endif
  [NAVR] = LAYOUT_miryoku(//1
    KC_NU,    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,   KC_NU,    
    KC_NU,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,   KC_NU,    
    KC_NU,    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,    KC_NU,    
                                         KC_NA,   KC_NA,   KC_NA,   KC_ENT,  KC_ENT, KC_DEL                                     
  ),
  [MOUR] = LAYOUT_miryoku(//2
    KC_NU,    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,  KC_NU,
    KC_NU,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_NU,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,KC_NU,
    KC_NU,    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,KC_NU,
                                         KC_NA,   KC_NA,   KC_NA,   KC_BTN1, KC_BTN3, KC_BTN2
  ),
  [MBO] = LAYOUT_miryoku(
    KC_NU,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_NU,
    KC_NU,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_NU,
    KC_NU,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_NU,
                                         KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2                                  
  ),
  [MEDR] = LAYOUT_miryoku(//0
    KC_NU,    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,  KC_VAI, KC_NU,
    KC_NU,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_NU,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,KC_NU,
    KC_NU,    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,  KC_NU,
                                         KC_NA,   KC_NA,   KC_NA,   KC_MSTP, KC_MPLY, KC_MUTE                                  
  ),
  [FUNL] = LAYOUT_miryoku(//5
    KC_NU,    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST, KC_NU,
    KC_NU,    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,KC_NU,
    KC_NU,    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,  KC_NU,
                                         KC_APP,  KC_SPC,  KC_TAB,  KC_NA,   KC_NA,   KC_NA                                  
  ),
  [NSL] = LAYOUT_miryoku(//4
    ES_LCBR,  ES_LBRC, ES_RBRC, ES_7,    ES_8,    ES_9,    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST, KC_NU,
    ES_PIPE,  ES_QUOT, ES_EQL , ES_4,    ES_5,    ES_6,    KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,KC_NU, //ES_QUOT, ES_SCLN
    ES_HASH,  ES_GRV,  ES_BSLS, ES_1,    ES_2,    ES_3,    KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,  KC_NU,
                                         ES_DOT,  ES_0,    ES_MINS, KC_NA,   KC_NA,   KC_NA                                  
  ),
  [NSSL] = LAYOUT_miryoku(//3
    ES_LCBR,  ES_LBRC, ES_AMPR, ES_ASTR, ES_LPRN, ES_RCBR, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST, KC_NU,
    ES_PIPE,  ES_COLN, ES_DLR,  ES_PERC, ES_CIRC, ES_PLUS, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,KC_NU,
    ES_HASH,  ES_TILD, ES_EXLM, ES_AT,   ES_HASH, ES_PIPE, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,  KC_NU,
                                         KC_GT,   ES_RPRN, ES_UNDS, KC_NA,   KC_NA,   KC_NA                                  
  )
};

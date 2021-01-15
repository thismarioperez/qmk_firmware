#include QMK_KEYBOARD_H
#include "thismarioperez.c"

enum layer_names {
    _BASE,
    _MACMODS,
    _DEV,
    _MACROS,
    _ARROWS,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 1 — Base 60% qwerty
	[_BASE] = LAYOUT_60_ansi(
    // |--------|----1---|----2---|----3---|---4----|---5----|---6----|---7----|---8----|---9----|---0----|-- - ---|-- = ---||------2.0-------|
        KC_GESC,   KC_1,    KC_2,    KC_3,   KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS,  KC_EQL,      KC_BSPC,
    // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----------------|
    // |----1.5-----||---Q----|---W----|---E----|---R----|---T----|---Y----|---U----|---I----|---O----|---P----|---[----|---]----|----1.5-----|
          KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSLS,
    // |------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------|
    // |----1.75------||---A----|---S----|---D----|---F----|---G----|---H----|---J----|---K----|---L----|---;----|---'----|------2.25--------||
           KC_CAPS,      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,     KC_ENT,
    // |--------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------------||
    // |------2.25--------|---Z----|---X----|---C----|---V----|---B----|---N----|---M----|---,----|---.----||---/----|---------2.75----------||
            KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_COMM, KC_DOT,   KC_SLSH,        KC_RSFT,
    // |------------------|--------|--------|--------|--------|--------|--------|--------|--------|--------||--------------|--------|--------||
    // |---1.25---|---1.25---||---1.25---||-----------------------6.25------------------------||---1.25---|---1.25---||---1.25---||---1.25---||
         KC_LCTL,   KC_LGUI,    KC_LALT,                         KC_SPC,                          KC_RALT,   KC_RGUI,     MO(5),    KC_RCTL
    // |----------|----------||----------||---------------------------------------------------||----------|----------||----------||----------||
    ),
    // Layer 2 — MacOS Mods
	[_MACMODS] = LAYOUT_60_ansi(
    // |--------|----1---|----2---|----3---|---4----|---5----|---6----|---7----|---8----|---9----|---0----|-- - ---|-- = ---||------2.0-------|
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,    _______,
    // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----------------|
    // |----1.5-----||---Q----|---W----|---E----|---R----|---T----|---Y----|---U----|---I----|---O----|---P----|---[----|---]----|----1.5-----|
            _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
    // |------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------|
    // |----1.75------||---A----|---S----|---D----|---F----|---G----|---H----|---J----|---K----|---L----|---;----|---'----|------2.25--------||
            _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,
    // |--------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------------||
    // |------2.25--------|---Z----|---X----|---C----|---V----|---B----|---N----|---M----|---,----|---.----||---/----|---------2.75----------||
             _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,        _______,
    // |------------------|--------|--------|--------|--------|--------|--------|--------|--------|--------||--------------|--------|--------||
    // |---1.25---|---1.25---||---1.25---||-----------------------6.25------------------------||---1.25---|---1.25---||---1.25---||---1.25---||
         _______,   KC_LALT,   KC_LGUI,                        _______,                          KC_RGUI,    KC_RALT,    _______,    _______
    // |----------|----------||----------||---------------------------------------------------||----------|----------||----------||----------||
    ),
    // Layer 3 — Dev layer. Replace KC_CAPS with KC_LCTL and KC_LCTL with MO(5)
	[_DEV] = LAYOUT_60_ansi(
    // |--------|----1---|----2---|----3---|---4----|---5----|---6----|---7----|---8----|---9----|---0----|-- - ---|-- = ---||------2.0-------|
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,    _______,
    // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----------------|
    // |----1.5-----||---Q----|---W----|---E----|---R----|---T----|---Y----|---U----|---I----|---O----|---P----|---[----|---]----|----1.5-----|
            _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
    // |------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------|
    // |----1.75------||---A----|---S----|---D----|---F----|---G----|---H----|---J----|---K----|---L----|---;----|---'----|------2.25--------||
           KC_LCTL,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,
    // |--------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------------||
    // |------2.25--------|---Z----|---X----|---C----|---V----|---B----|---N----|---M----|---,----|---.----||---/----|---------2.75----------||
             _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,        _______,
    // |------------------|--------|--------|--------|--------|--------|--------|--------|--------|--------||--------------|--------|--------||
    // |---1.25---|---1.25---||---1.25---||-----------------------6.25------------------------||---1.25---|---1.25---||---1.25---||---1.25---||
           MO(5),   _______,    _______,                        _______,                         _______,    _______,   _______,   _______
    // |----------|----------||----------||---------------------------------------------------||----------|----------||----------||----------||
    ),
    // Layer 4 — Macros
	[_MACROS] = LAYOUT_60_ansi(
    // |--------|----1---|----2---|----3---|---4----|---5----|---6----|---7----|---8----|---9----|---0----|-- - ---|-- = ---||------2.0-------|
         XXXXXXX,  PW1,     PW2,   XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,
    // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----------------|
    // |----1.5-----||---Q----|---W----|---E----|---R----|---T----|---Y----|---U----|---I----|---O----|---P----|---[----|---]----|----1.5-----|
          XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,
    // |------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------|
    // |----1.75------||---A----|---S----|---D----|---F----|---G----|---H----|---J----|---K----|---L----|---;----|---'----|------2.25--------||
          XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,
    // |--------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------------||
    // |------2.25--------|---Z----|---X----|---C----|---V----|---B----|---N----|---M----|---,----|---.----||---/----|---------2.75----------||
            XXXXXXX,       XXXXXXX, XXXXXXX, DUMMYCC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  _______,        XXXXXXX,
    // |------------------|--------|--------|--------|--------|--------|--------|--------|--------|--------||--------------|--------|--------||
    // |---1.25---|---1.25---||---1.25---||-----------------------6.25------------------------||---1.25---|---1.25---||---1.25---||---1.25---||
          _______,  XXXXXXX,    XXXXXXX,                        XXXXXXX,                         XXXXXXX,   XXXXXXX,    XXXXXXX,    XXXXXXX
    // |----------|----------||----------||---------------------------------------------------||----------|----------||----------||----------||
    ),
    // Layer 5 — Arrows layer. Swap bottom right cluster with arrow keys. Move's MO(5) next to spacebar
	[_ARROWS] = LAYOUT_60_ansi(
    // |--------|----1---|----2---|----3---|---4----|---5----|---6----|---7----|---8----|---9----|---0----|-- - ---|-- = ---||------2.0-------|
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,    _______,
    // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----------------|
    // |----1.5-----||---Q----|---W----|---E----|---R----|---T----|---Y----|---U----|---I----|---O----|---P----|---[----|---]----|----1.5-----|
            _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
    // |------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------|
    // |----1.75------||---A----|---S----|---D----|---F----|---G----|---H----|---J----|---K----|---L----|---;----|---'----|------2.25--------||
           KC_LCTL,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,
    // |--------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------------||
    // |------2.25--------|---Z----|---X----|---C----|---V----|---B----|---N----|---M----|---,----|---.----||---/----|---------2.75----------||
             _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,        KC_UP,
    // |------------------|--------|--------|--------|--------|--------|--------|--------|--------|--------||--------------|--------|--------||
    // |---1.25---|---1.25---||---1.25---||-----------------------6.25------------------------||---1.25---|---1.25---||---1.25---||---1.25---||
         _______,   _______,    _______,                        _______,                           MO(5),    KC_LEFT,   KC_DOWN,   KC_RGHT
    // |----------|----------||----------||---------------------------------------------------||----------|----------||----------||----------||
    ),
    // Layer 6 — Primary fn layer
	[_FN] = LAYOUT_60_ansi(
    // |--------|----1---|----2---|----3---|---4----|---5----|---6----|---7----|---8----|---9----|---0----|-- - ---|-- = ---||------2.0-------|
         KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,      KC_DEL,
    // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----------------|
    // |----1.5-----||---Q----|---W----|---E----|---R----|---T----|---Y----|---U----|---I----|---O----|---P----|---[----|---]----|----1.5-----|
          _______,    KC_HOME,   KC_UP,  KC_END, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_VOLD, KC_VOLU,   _______,
    // |------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------|
    // |----1.75------||---A----|---S----|---D----|---F----|---G----|---H----|---J----|---K----|---L----|---;----|---'----|------2.25--------||
           _______,     KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______,     _______,
    // |--------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------------||
    // |------2.25--------|---Z----|---X----|---C----|---V----|---B----|---N----|---M----|---,----|---.----||---/----|---------2.75----------||
             _______,      RGB_VAI, RGB_SAI, RGB_HUI, _______,  RESET,  _______,  TO(0),   TG(1),   TG(2),    OSL(3),        KC_CAPS,
    // |------------------|--------|--------|--------|--------|--------|--------|--------|--------|--------||--------------|--------|--------||
    // |---1.25---|---1.25---||---1.25---||-----------------------6.25------------------------||---1.25---|---1.25---||---1.25---||---1.25---||
          _______,  _______,    _______,                          TG(4),                         _______,    _______,   _______,    _______
    // |----------|----------||----------||---------------------------------------------------||----------|----------||----------||----------||
    )
};

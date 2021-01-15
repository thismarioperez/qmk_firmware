#include "macros.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case PW1:
        if (record->event.pressed) {
            SEND_STRING(PASSWORD1);
        } else {
        }
        break;

    case PW2:
        if (record->event.pressed) {
            SEND_STRING(PASSWORD2);
        } else {
        }
        break;

    case DUMMYCC:
        if (record->event.pressed) {
           SEND_STRING("4111111111111111");
        }
        break;
    }
    return true;
};

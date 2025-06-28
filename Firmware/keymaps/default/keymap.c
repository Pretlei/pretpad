// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define TIME_UPDATE_INTERVAL 1000

static uint32_t last_time = 0;
static uint32_t seconds = 0;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ├───┼───┼
     * │ 1 │ 2 │
     * ├───┼───┼
     * │ 3 │ 4 │
     * └───┴───┴
     */
    [0] = LAYOUT (
        KC_MNXT, KC_MPLY, KC_SLEP, KC_WSCH, KC_MUTE
    )
};

#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][1][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
};

#endif

#ifdef OLED_ENABLE

bool oled_task_user() {
    if (timer_elapsed(last_time) > TIME_UPDATE_INTERVAL) {
        last_time = timer_read();
        seconds++;
    }

    uint8_t hrs = (seconds / 3600) % 24;
    uint8_t mins = (seconds / 60) % 60;
    uint8_t secs = seconds % 60;

    oled_clear();

    char time_str[16];
    snprintf(time_str, sizeof(time_str), "%02d:%02d:%02d", hrs, mins, secs);

    oled_set_cursor(0, 1);
    oled_write(time_str, false);

    return false;
}

#endif

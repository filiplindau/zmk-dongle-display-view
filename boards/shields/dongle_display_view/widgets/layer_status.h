/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

struct zmk_dongle_layer_status {
    sys_snode_t node;
    lv_obj_t *obj;
};

int zmk_dongle_layer_status_init(struct zmk_dongle_layer_status *widget, lv_obj_t *parent);
lv_obj_t *zmk_dongle_layer_status_obj(struct zmk_dongle_layer_status *widget);
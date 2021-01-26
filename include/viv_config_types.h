#ifndef VIV_CONFIG_TYPES_H
#define VIV_CONFIG_TYPES_H

#include <libinput.h>
#include <xkbcommon/xkbcommon.h>

#include "viv_types.h"
#include "viv_mappable_functions.h"

struct viv_keybind {
    xkb_keysym_t key;
    uint32_t modifiers;
    void (*binding)(struct viv_workspace *workspace, union viv_mappable_payload payload);
    union viv_mappable_payload payload;
};

struct viv_libinput_config {
    char *device_name;
    enum libinput_config_scroll_method scroll_method;
    uint32_t scroll_button;
    enum libinput_config_middle_emulation_state middle_emulation;
    int left_handed;
    int natural_scroll;
};

#endif

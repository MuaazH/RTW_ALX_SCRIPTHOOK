//
// Created by MuaazH <muaaz.h.is@gmail.com> on 2025-05-09.
// Copyright (c) 2025 MuaazH <muaaz.h.is@gmail.com>. All rights reserved.
//

#include <scripthook.h>

const char *SCRIPT = "debug_buildings_db";

static void print_type(BuildingType *type) {
    char buf[512];
    StrBuilder sb = NEW_STRING_BUILDER(buf, sizeof(buf));

    sb_reset(&sb);
    sb_str(&sb, type->name);
    sb_str(&sb, " type index = ");
    sb_i32(&sb, type->index);
    sb_str(&sb, " level count = ");
    sb_i32(&sb, type->levelCount);

    for (int i = 0; i < type->levelCount; ++i) {
        BuildingLevel *lvl = type->levels + i;

        sb_str(&sb, " level ");
        sb_i32(&sb, i);

        sb_str(&sb, " cost ");
        sb_i32(&sb, lvl->cost);
    }
    rtw_log(SCRIPT, buf);
}

void on_init() {
    BuildingTypeList *list = rtw_get_building_types();
    while (list) {
        for (int i = 0; i < list->size; ++i) {
            BuildingType *type = list->array + i;
            print_type(type);
        }
        list = list->next;
    }
}

void init_hooks(Script *script) {
    EXPORT_HOOK(on_init);
}


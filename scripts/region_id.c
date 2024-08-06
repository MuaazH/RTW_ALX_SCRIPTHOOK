// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-19.
// This scripts logs the list of regions & their ids

#include <scripthook.h>

const char *SCRIPT = "region_id";

void on_init() {
    char buf[128];
    StrBuilder sb = NEW_STRING_BUILDER(buf, sizeof(buf));

    WorldMap *regions = rtw_get_map();
    int c = regions->regionsCount;
    for (int i = 0; i < c; ++i) {
        Region *region = &regions->regions[i];
        sb_reset(&sb);
        sb_i32(&sb, i);

        while (sb.cur < 8) sb_chr(&sb, ' ');

        sb_wstr(&sb, *region->wName + 3);

        if (region->settlement) {
            while (sb.cur < 48) sb_chr(&sb, ' ');
            sb_wstr(&sb, *region->wSettlementName + 3);
        }
        rtw_log(SCRIPT, buf);
    }
}

void init_hooks(Script *script) {
    EXPORT_HOOK(on_init);
}

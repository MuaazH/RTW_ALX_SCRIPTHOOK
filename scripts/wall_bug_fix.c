// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03
// This script fixes the wall bug where cities with destroyed walls are rendered with walls

#include <scripthook.h>

void on_init() {
    WorldMap *pRegions = rtw_get_map();
    int count = pRegions->regionsCount;
    for (int i = 0; i < count; ++i) {
        Settlement *pSettlement = pRegions->regions[i].settlement;
        if (!pSettlement)
            continue; // The sea has no settlement
        if (rtw_get_defenses_building(pSettlement))
            continue; // It has a wall
        pSettlement->wall3dModel = 0; // remove walls from cities that have no walls
    }
}

void init_hooks(Script *script) {
    EXPORT_HOOK(on_init);
}
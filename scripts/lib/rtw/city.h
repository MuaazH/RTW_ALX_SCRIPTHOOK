//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03.
//

#include "common.h"

struct City {
    Faction *faction;                    // offset in settlement is 0x0DD8
    Settlement *settlement;
    int farmingLevel;
    int unknown0[0xB];
    int prjSpendingSalaries;             // offset in settlement is 0x0E10
    int prjSpendingArmy;                 // offset in settlement is 0x0E14
    int unknown1[0x05];
    Settlement *settlement2;
    int unknown[0x6F];
    CityStats stats;
};

struct CityBuildings {
    Building *sortedList[BUILDING_TYPE_COUNT]; // lists buildings by their type index
    Building *list[BUILDING_TYPE_COUNT];  // offset 0x0604  list of all buildings in order of construction, always has the first <count> elements filled in
    int count;                            // offset 0x0704
};
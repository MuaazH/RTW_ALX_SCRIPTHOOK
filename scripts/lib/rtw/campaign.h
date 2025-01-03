//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03.
//

#include "common.h"

struct Campaign {
    int unknown0[0x5A]; // offset 0 size 0x168
    Faction *factions[21]; // offset 0x168 size 0x54
    Faction *sortedFactions[21]; // offset 0x168 size 0x54
    int factionCount;
    int unknown1[6];
    Faction *activeFaction;
    int activeFactionId;
    int unknown2[7];
    char endTurn; // set to non-zero to end the turn
    char restartTurns; // set to non-zero to give the turn back to first faction
    int unknown3;
    Settlement *rome;
    int unknown4[27];
    char unknown5;
    char unknown6;
    char marianReforms; // set to non-zero to enable (cities will need to update the list of units)   offset 0x2CA = 714
    char marianReformsDisabled; // set to non-zero to prevent event from being triggered
    int unknown7[11];
    GameDate currentDate; // offset 0x2F8 = 760
    GameDate startDate;
    GameDate endDate;
    int unknown8[140];
    FactionDiplomacy diplomacy[21]; // offset 0x540 = 1344
};
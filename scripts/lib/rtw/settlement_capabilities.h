//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-10.
//

#include "common.h"

struct TrainableUnit {
    int unitIndex;
    int startingXp;
};

struct TrainableAgent {
    /**
     * -1 = not trainable, 0 = trainable
     */
    short trainable;
    short unknown;
};

struct SettlementCapabilities {
    short growthBuildings[2];
    short unknown04[2];
    short health[2];
    short trade[2]; // sea exports? or exports in general?
    short landTrade[2];
    short tradeFleets[2];
    short taxes[2];
    short mining[2];
    short farmUpgrades[2];
    short roads[2];
    short unknown28[2]; // something related to wall upgrades
    short unknown2C[2]; // something reloaded to wall upgrades
    short unknown30[2]; // something related to wall upgrades
    short unknown34[2]; // something related to wall upgrades
    short armorLevel[2];
    short games[2];
    short races[2];
    short unknown44[2];
    short lightWeaponsLevel[2];
    short missilesLevel[2];
    short heavyWeaponsLevel[2];
    int unknown54;
    int unknown58;
    int unknown5C;
    int unknown60;
    int unknown64;
    short publicOrderBuildings[2];
    short bodyguardsUpgrades[2];
    int unknown70;
    int unknown74;
    int unknown78;
    int unknown7C;
    int unknown80;
    int unknown84;
    int unknown88;
    int unknown8C;
    TrainableAgent trainableAgents[9]; // offset 0x90 = 144
    TrainableUnit trainableUnits[64]; // offset 0xB4 = 180
    int unitsCount; // offset 0x2B4 = 692
    int unknown2B8;
    int unknown2BC;
    int unknown2C0;
    int unknown2C4;
    int unknown2C8;
    int unknown2CC;
    int unknown2D0;
    int unknown2D4;
    int unknown2D8;
    int unknown2DC;
    int unknown2E0;
    int unknown2E4;
    int unknown2E8;
    int unknown2EC;
    int unknown2F0;
    int unknown2F4;
    int unknown2F8;
    int unknown2FC;
    int unknown300;
    int unknown304;
    int unknown308;
};

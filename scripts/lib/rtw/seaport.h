//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03.
//

#include "common.h"

struct Docks {
    int unknown00;
    int unknown04;
    int unknown08;
    int unknown0C;
    int unknown10;
    int unknown14;
    int unknown18;
    int unknown1C;
    int unknown20;
    int unknown24;
    int unknown28;
    int unknown2C;
    int unknown30;
    int unknown34;
    int unknown38;
    int unknown3C;
    int unknown40;
    int unknown44;
    Army *blockader;
    int unknown4C;
    int unknown50;
    int unknown54;
    int unknown58;
    int unknown5C;
    int unknown60;
    int unknown64;
    int unknown68;
    int unknown6C;
    int unknown70;
    int unknown74;
    int unknown78;
    int unknown7C;
    int unknown80;
};

struct Seaport {
    int unknown00;
    int unknown04;
    int unknown08;
    int villagePosX;
    int villagePosY;
    int unknown14;
    int unknown18;
    int unknown1C;
    int unknown20;
    int unknown24;
    int unknown28;
    int unknown2C;
    Settlement *settlement;
    int region;
    unsigned short orientation;
    int level;
    int culture;
    int unknown44;
    Army *blockader;
    int unknown4C;
    int posX;
    int posY;
    int rallyPointX;
    int rallyPointY;
    int unknown60;
    Faction *faction;
    int unknown68;
    int unknown6C;
    int unknown70;
    void *village;
    Docks *docks;
};
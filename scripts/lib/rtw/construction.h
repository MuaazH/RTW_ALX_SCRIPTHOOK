//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03.
//

#include "common.h"

struct Construction {
    int unknown0;             // 0x00
    int unknown1;             // 0x04
    int unknown2;             // 0x08
    Settlement *settlement;   // 0x0C
    int unknown3;             // 0x10
    int unknown4;             // 0x14
    int unknown5;             // 0x18
    int unknown6;             // 0x1C
    int turnsRequired;        // 0x20
    int turnsCompleted;       // 0x24
    int percentage;           // 0x28
    int unknown7;             // 0x2C
    int unknown8;             // 0x30
    int unknown9;             // 0x34
};

struct ConstructionQueue {
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
    int unknown48;
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
    Construction queue[6];
    int head;
    int tail;
    int size;
    int points;
};

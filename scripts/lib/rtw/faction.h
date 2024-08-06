//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03.
//

#define TREASURY_DETAILS_SIZE 10

#include "common.h"

enum {
    IDEOLOGY_BALANCED = 0,
    IDEOLOGY_RELIGIOUS,
    IDEOLOGY_TRADER,
    IDEOLOGY_COMFORTABLE,
    IDEOLOGY_BUREAUCRAT,
    IDEOLOGY_CRAFTSMAN,
    IDEOLOGY_SAILOR,
    IDEOLOGY_FORTIFIED,

    LEADER_STYLE_SMITH = 0,
    LEADER_STYLE_MAO,
    LEADER_STYLE_GENGHIS,
    LEADER_STYLE_STALIN,
    LEADER_STYLE_NAPOLEON,
    LEADER_STYLE_HENRY,
    LEADER_STYLE_CAESAR
};

struct TreasuryDetails {
    struct {
        int farming;
        int taxes;
        int mining;
        int trade;
        int construction;
        int corruption;
        int senateTransactions;
        int diplomacy;
        int diplomacy2; // SuperFaction?
        int other;
    } income;
    struct {
        int wages;
        int army;
        int construction;
        int construction2;
        int recruitment;
        int recruitment2;
        int senateTransactions;
        int diplomacy;
        int diplomacy2; // SuperFaction?
        int corruption;
        int entertainment;
        int other;
    } spending;
};
// Not valid for 1.9
//    int unknown;


struct Treasury {
    Faction *faction;
    int gold; // current money
    int unknown08;
    TreasuryDetails details[TREASURY_DETAILS_SIZE];
    int unknown37C;
    int current; // offset 380 = 896 an index for a structure that is 0x58 bytes long, and starts at offset 0xC
};

struct Faction {
    int unknown000;
    int unknown004;
    int unknown008;
    int unknown00C;
    int unknown010;
    int unknown014;
    int unknown018;
    int unknown01C;
    int unknown020;
    int unknown024;
    int unknown028;
    int unknown02C;
    int unknown030;
    int unknown034;
    int unknown038;
    int unknown03C;
    int unknown040;
    int unknown044;
    int unknown048;
    int unknown04C;
    int unknown050;
    int unknown054;
    int unknown058;
    int unknown05C;
    int unknown060;
    int unknown064;
    int unknown068;
    int unknown06C;
    int unknown070;
    int unknown074;
    int unknown078;
    int unknown07C;
    int unknown080;
    int unknown084;
    int unknown088;
    int unknown08C;
    int unknown090;
    int unknown094;
    int unknown098;
    int unknown09C;
    int id;                           // offset 0x00A0
    int culture;                      // offset 0x00A4
    Settlement *capital;              // offset 0x00A8
    Person *pLeaderName;              // offset 0x00AC   (+0x04 => +0x00 => 0x06 = WCHAR name)
    Person *pHeirName;                // offset 0x00B0   (+0x04 => +0x00 => 0x06 = WCHAR name)
    FactionInfo *info;                // offset 0x00B4
    char isPlayer;                    // offset 0x00B8
    FactionAi *ai;
    int ideology;
    int leaderStyle;
    int unknown0C8;
    ArrayList(void) unknown0CC;
    int unknown0D8;
    int unknown0DC;
    ArrayList(Person) persons;
    ArrayList(Character) characters;
    ArrayList(Army) armies;
    ArrayList(int) regions;
    ArrayList(Settlement) settlements;
    ArrayList(Fort) forts;
    ArrayList(void) watchtowers;
    ArrayList(Seaport) ports;
    int unknown140;
    ArrayList(void) unknown144;
    int unknown150;
    int unknown154;
    ArrayList(void) unknown158;
    ArrayList(void) unknown164;
    int unknown170;
    int unknown174;
    int unknown178;
    int activityStatus; // 0 = active, 1 = ?, 2 = disabled, 3 = dead_until_resurrected
    int unknown180;
    void *fogOfWar;
    ArrayList(void) missions;
    ArrayList(void) unknown194;
    int unknown1A0;
    int unknown1A4;
    int unknown1A8;
    ArrayList(void) unknown1AC;
    ArrayList(void) unknown1B8;
    ArrayList(void) rankingHistory;
    int unknown1D0;
    int unknown1D4;
    union {
        int flags;
        struct {
            char autoManageEverything;
            char unknown0;
            char unknown1;
            char autoManageTaxesOnly;
            float spendingPolicy;
        };
    } managementSettings;
    int unknown1E0;
    int unknown1E4;
    int unknown1E8;
    int unknown1EC;
    int unknown1F0;
    int unknown1F4;
    int unknown1F8;
    int unknown1FC;
    int unknown200;
    int unknown204;
    int unknown208;
    int unknown20C;
    int unknown210;
    int unknown214;
    int unknown218;
    int unknown21C;
    int unknown220;
    int unknown224;
    int unknown228;
    int unknown22C;
    int unknown230;
    int unknown234;
    int unknown238;
    int unknown23C;
    int unknown240;
    int unknown244;
    int unknown248;
    int unknown24C;
    int unknown250;
    int unknown254;
    int unknown258;
    int unknown25C;
    int unknown260;
    int unknown264;
    int unknown268;
    int unknown26C;
    int unknown270;
    int unknown274;
    int unknown278;
    int unknown27C;
    int unknown280;
    int unknown284;
    int unknown288;
    int unknown28C;
    int unknown290;
    int unknown294;
    int unknown298;
    int unknown29C;
    int unknown2A0;
    int unknown2A4;
    int unknown2A8;
    int unknown2AC;
    int unknown2B0;
    int unknown2B4;
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
    int unknown30C;
    int unknown310;
    int unknown314;
    int unknown318;
    int unknown31C;
    int unknown320;
    int unknown324;
    int unknown328;
    int unknown32C;
    int unknown330;
    int unknown334;
    int unknown338;
    int unknown33C;
    int unknown340;
    int unknown344;
    int unknown348;
    int unknown34C;
    int unknown350;
    int unknown354;
    int unknown358;
    int unknown35C;
    int unknown360;
    int unknown364;
    int unknown368;
    int unknown36C;
    int unknown370;
    int unknown374;
    int unknown378;
    int unknown37C;
    int unknown380;
    int unknown384;
    int unknown388;
    int unknown38C;
    int unknown390;
    int unknown394;
    int unknown398;
    int unknown39C;
    int unknown3A0;
    int unknown3A4;
    int unknown3A8;
    int unknown3AC;
    int unknown3B0;
    int unknown3B4;
    int unknown3B8;
    int unknown3BC;
    int unknown3C0;
    int unknown3C4;
    int unknown3C8;
    int unknown3CC;
    int unknown3D0;
    int unknown3D4;
    int unknown3D8;
    int unknown3DC;
    int unknown3E0;
    int unknown3E4;
    int unknown3E8;
    int unknown3EC;
    int unknown3F0;
    int unknown3F4;
    int unknown3F8;
    int unknown3FC;
    int unknown400;
    int unknown404;
    int unknown408;
    int unknown40C;
    int unknown410;
    int unknown414;
    int unknown418;
    int unknown41C;
    int unknown420;
    int unknown424;
    int unknown428;
    int unknown42C;
    int unknown430;
    int unknown434;
    int unknown438;
    int unknown43C;
    int unknown440;
    int unknown444;
    int unknown448;
    int unknown44C;
    int unknown450;
    int unknown454;
    int unknown458;
    int unknown45C;
    int unknown460;
    int unknown464;
    int unknown468;
    int unknown46C;
    int unknown470;
    int unknown474;
    int unknown478;
    int unknown47C;
    int unknown480;
    int unknown484;
    int unknown488;
    int unknown48C;
    int unknown490;
    int unknown494;
    int unknown498;
    int unknown49C;
    int unknown4A0;
    int unknown4A4;
    int unknown4A8;
    int unknown4AC;
    int unknown4B0;
    int unknown4B4;
    int unknown4B8;
    int unknown4BC;
    int unknown4C0;
    int unknown4C4;
    int unknown4C8;
    int unknown4CC;
    int unknown4D0;
    int unknown4D4;
    int unknown4D8;
    int unknown4DC;
    int unknown4E0;
    int unknown4E4;
    char outdatedTreasury;           // offset 0x04E8    0 or 1
    int startingGold;                // offset 0x04EC Gold at the start of turn
    int unknown4F0;
    int unknown4F4;
    int unknown4F8;
    int unknown4FC;
    int unknown500;
    Treasury treasury;
};

typedef Diplomacy FactionDiplomacy[21];

struct FactionInfo { // size = 0xE0 = 224
    int id;
    const char *name;
    int unknown0008;
    int unknown000C;
    int unknown0010;
    int unknown0014;
    int unknown0018;
    int unknown001C;
    int unknown0020;
    int unknown0024;
    int unknown0028;
    int unknown002C;
    int unknown0030;
    int unknown0034;
    int unknown0038;
    int unknown003C;
    int unknown0040;
    int unknown0044;
    int unknown0048;
    int unknown004C;
    int unknown0050;
    int unknown0054;
    int unknown0058;
    int unknown005C;
    int unknown0060;
    int unknown0064;
    int unknown0068;
    int unknown006C;
    int unknown0070;
    int unknown0074;
    int unknown0078;
    int unknown007C;
    int unknown0080;
    int unknown0084;
    int unknown0088;
    int unknown008C;
    int unknown0090;
    int unknown0094;
    int unknown0098;
    int unknown009C;
    int unknown00A0;
    int unknown00A4;
    int unknown00A8;
    int unknown00AC;
    int unknown00B0;
    int unknown00B4;
    int unknown00B8;
    int unknown00BC;
    int unknown00C0; // RULE 1 ?
    int unknown00C4; // RULE 2 ?
    int unknown00C8;
    int unknown00CC;
    int unknown00D0;
    int unknown00D4;
    int unknown00D8;
    int unknown00DC;
};

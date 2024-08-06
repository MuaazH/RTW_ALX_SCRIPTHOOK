//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03.
//

#include "common.h"

enum {
    LOW_TAX_RATE = 0,
    NORMAL_TAX_RATE,
    HIGH_TAX_RATE,
    VERY_HIGH_TAX_RATE,

    YEARLY_GAMES = 0,
    MONTHLY_GAMES,
    DAILY_GAMES,
    YEARLY_RACES,
    MONTHLY_RACES,
    DAILY_RACES,
    YEARLY_GAMES_N_RACES,
    MONTHLY_GAMES_N_RACES,
    DAILY_GAMES_N_RACES,
};

struct Settlement {
    int unknown0000;
    int unknown0004;
    int unknown0008;
    int posX;
    int posY;
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
    int unknown00C0;
    int unknown00C4;
    int unknown00C8;
    int unknown00CC;
    int unknown00D0;
    int unknown00D4;
    int unknown00D8;
    int unknown00DC;
    int unknown00E0;
    int unknown00E4;
    int unknown00E8;
    int unknown00EC;
    int unknown00F0;
    int unknown00F4;
    int unknown00F8;
    int unknown00FC;
    int unknown0100;
    int unknown0104;
    int unknown0108;
    int unknown010C;
    int unknown0110;
    int unknown0114;
    int unknown0118;
    int unknown011C;
    int unknown0120;
    int unknown0124;
    int unknown0128;
    int unknown012C;
    int unknown0130;
    int unknown0134;
    int unknown0138;
    void *city3dModel;                // offset 0x013C
    void *wall3dModel;                // offset 0x0140
    int unknown0144;
    int unknown0148;
    int unknown014C;
    int unknown0150;
    int unknown0154;
    int unknown0158;
    int unknown015C;
    int unknown0160;
    int unknown0164;
    int unknown0168;
    int unknown016C;
    int unknown0170;
    int unknown0174;
    int unknown0178;
    int unknown017C;
    int unknown0180;
    Seaport *port;                    // offset 0x0184
    const char *name;                 // offset 0x0188
    int unknown018C;
    PTextEntry wName;                 // offset 0x0190
    Faction *faction;                 // offset 0x0194
    int unknown0198;
    int unknown019C;
    int unknown01A0;
    int unknown01A4;
    int unknown01A8;
    int unknown01AC;
    int unknown01B0;
    int level;                        // offset 0x01B4
    int culture;                      // offset 0x01B8
    int unknown01BC;
    int unknown01C0;
    int unknown01C4;
    int unknown01C8;
    int unknown01CC;
    int unknown01D0;
    int unknown01D4;
    int unknown01D8;
    int unknown01DC;
    RecruitmentQueue recruitmentQueue;
    int unknown0310;
    int unknown0314;
    ConstructionQueue constructionQueue;
    int unknown04FC;
    int unknown0500;
    CityBuildings buildings;
    int unknown0708;
    int unknown070C;
    int unknown0710;
    int unknown0714;
    int unknown0718;
    int unknown071C;
    int unknown0720;
    int unknown0724;
    int unknown0728;
    int unknown072C;
    int unknown0730;
    int unknown0734;
    int unknown0738;
    int unknown073C;
    int unknown0740;
    int unknown0744;
    int unknown0748;
    int unknown074C;
    int unknown0750;
    int unknown0754;
    int unknown0758;
    int unknown075C;
    int unknown0760;
    int unknown0764;
    int unknown0768;
    int unknown076C;
    int unknown0770;
    int unknown0774;
    int unknown0778;
    int unknown077C;
    int unknown0780;
    int unknown0784;
    int unknown0788;
    int unknown078C;
    int unknown0790;
    int unknown0794;
    int unknown0798;
    int unknown079C;
    int unknown07A0;
    int unknown07A4;
    int unknown07A8;
    int unknown07AC;
    int unknown07B0;
    int unknown07B4;
    int unknown07B8;
    int unknown07BC;
    int unknown07C0;
    int unknown07C4;
    int unknown07C8;
    int unknown07CC;
    int unknown07D0;
    int unknown07D4;
    int unknown07D8;
    int unknown07DC;
    int unknown07E0;
    int unknown07E4;
    int unknown07E8;
    int unknown07EC;
    int unknown07F0;
    int unknown07F4;
    int unknown07F8;
    int unknown07FC;
    int unknown0800;
    int unknown0804;
    int unknown0808;
    int unknown080C;
    int unknown0810;
    int unknown0814;
    int unknown0818;
    int unknown081C;
    int unknown0820;
    int unknown0824;
    int unknown0828;
    int unknown082C;
    int unknown0830;
    int unknown0834;
    int unknown0838;
    int unknown083C;
    int unknown0840;
    int unknown0844;
    int unknown0848;
    int unknown084C;
    int unknown0850;
    int unknown0854;
    int unknown0858;
    int unknown085C;
    int unknown0860;
    int unknown0864;
    int unknown0868;
    int unknown086C;
    int unknown0870;
    int unknown0874;
    int unknown0878;
    int unknown087C;
    int unknown0880;
    int unknown0884;
    int unknown0888;
    int unknown088C;
    int unknown0890;
    int unknown0894;
    int unknown0898;
    int unknown089C;
    int unknown08A0;
    int unknown08A4;
    int unknown08A8;
    int unknown08AC;
    int unknown08B0;
    int unknown08B4;
    int unknown08B8;
    int unknown08BC;
    int unknown08C0;
    int unknown08C4;
    int unknown08C8;
    int unknown08CC;
    int unknown08D0;
    int unknown08D4;
    int unknown08D8;
    int unknown08DC;
    int unknown08E0;
    int unknown08E4;
    int unknown08E8;
    int unknown08EC;
    int unknown08F0;
    int unknown08F4;
    int unknown08F8;
    int unknown08FC;
    int unknown0900;
    int unknown0904;
    int unknown0908;
    int unknown090C;
    int unknown0910;
    int unknown0914;
    int unknown0918;
    int unknown091C;
    int unknown0920;
    int unknown0924;
    int unknown0928;
    int unknown092C;
    int unknown0930;
    int unknown0934;
    int unknown0938;
    int unknown093C;
    int unknown0940;
    int unknown0944;
    int unknown0948;
    int unknown094C;
    int unknown0950;
    int unknown0954;
    int unknown0958;
    int unknown095C;
    int unknown0960;
    int unknown0964;
    int unknown0968;
    int unknown096C;
    int unknown0970;
    int unknown0974;
    int unknown0978;
    int unknown097C;
    int unknown0980;
    int unknown0984;
    int unknown0988;
    int unknown098C;
    int unknown0990;
    int unknown0994;
    int unknown0998;
    int unknown099C;
    int unknown09A0;
    int unknown09A4;
    int unknown09A8;
    int unknown09AC;
    int unknown09B0;
    int unknown09B4;
    int unknown09B8;
    int unknown09BC;
    int unknown09C0;
    int unknown09C4;
    int unknown09C8;
    int unknown09CC;
    int unknown09D0;
    int unknown09D4;
    int unknown09D8;
    int unknown09DC;
    int unknown09E0;
    int unknown09E4;
    int unknown09E8;
    int unknown09EC;
    int unknown09F0;
    int unknown09F4;
    int unknown09F8;
    int unknown09FC;
    int unknown0A00;
    int unknown0A04;
    int unknown0A08;
    int unknown0A0C;
    int unknown0A10;
    int unknown0A14;
    int unknown0A18;
    int unknown0A1C;
    int unknown0A20;
    int unknown0A24;
    int unknown0A28;
    int unknown0A2C;
    int unknown0A30;
    int unknown0A34;
    int unknown0A38;
    int unknown0A3C;
    int unknown0A40;
    int unknown0A44;
    int unknown0A48;
    int unknown0A4C;
    int unknown0A50;
    int unknown0A54;
    int unknown0A58;
    int unknown0A5C;
    int unknown0A60;
    int unknown0A64;
    int unknown0A68;
    int unknown0A6C;
    int unknown0A70;
    SettlementAi *ai;
    int unknown0A78;
    int unknown0A7C;
    int unknown0A80;
    int gamesPolicy;
    int unknown0A88;
    int unknown0A8C;
    int unknown0A90;
    struct {
        void *_cpp_class;
        Character *character;
    } governor;                          // offset 0xA94 = 2708
    struct {
        void *_cpp_class;
        Character *character;            // offset 0xA9C = 2716
    } startOfTurnGovernor;
    int unknown0AA4;
    int unknown0AA8;
    int unknown0AAC;
    int unknown0AB0;
    int unknown0AB4;
    int unknown0AB8;
    int unknown0ABC;
    int unknown0AC0;
    int unknown0AC4;
    int taxRate;                         // offset 0x0AC8 = 2760
    SettlementCapabilities capabilities; // offset 0x0ACC
    City city;                           // offset 0x0DD8
    int unknown10E0;
    int unknown10E4;
    int unknown10E8;
    int unknown10EC;
    int unknown10F0;
    int unknown10F4;
    int unknown10F8;
    int unknown10FC;
    int unknown1100;
    int unknown1104;
    int unknown1108;
    int unknown110C;
    int unknown1110;
    int unknown1114;
    int unknown1118;
    int unknown111C;
    int unknown1120;
    int unknown1124;
    int unknown1128;
    int unknown112C;
    int unknown1130;
    int unknown1134;
    int unknown1138;
    int unknown113C;
    int unknown1140;
    int unknown1144;
    int unknown1148;
    int unknown114C;
    int unknown1150;
    int unknown1154;
    int unknown1158;
    int unknown115C;
    int unknown1160;
    int unknown1164;
    int unknown1168;
    int unknown116C;
    int unknown1170;
    int unknown1174;
    int unknown1178;
    int unknown117C;
    int unknown1180;
    int unknown1184;
    int unknown1188;
    int unknown118C;
    int unknown1190;
    int unknown1194;
    int unknown1198;
    int unknown119C;
    int unknown11A0;
    int unknown11A4;
    int unknown11A8;
    int unknown11AC;
};

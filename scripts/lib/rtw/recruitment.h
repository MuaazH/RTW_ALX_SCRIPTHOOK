//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03.
//

#include "common.h"

#define RECRUITMENT_QUEUE_SIZE 9

enum  {
    RECRUITMENT_TYPE_NEW_UNIT = 0,
    RECRUITMENT_TYPE_NEW_SHIP,
    RECRUITMENT_TYPE_NEW_AGENT,
    RECRUITMENT_TYPE_RETRAIN_UNIT,
    RECRUITMENT_TYPE_RETRAIN_SHIP
};

struct Recruitment {
    union {
        ArmyUnit *unit; // unit to be retrained
        UnitType *unitType;
        struct {
            int agentRole;
            int agentFaction;
        };
    };
    Settlement *settlement;
    unsigned char unknown1;
    unsigned char type; // 0 = new unit, 1 = new ship, 2 = new agent, 3 = retrain unit, 4 = retrain ship
    unsigned char xp;
    unsigned char armor;
    unsigned char weapons;
    unsigned char unknown011;
    unsigned char turnsCompleted;
    unsigned char percentageCompleted;
    unsigned char turnsRequired;
    unsigned char unknown015;
    unsigned char unknown016;
    unsigned char unknown017;
    unsigned short population;
    short unknown01A; // not used?
    char unknown01C; // not used?
};

struct RecruitmentQueue {
    Recruitment queue[RECRUITMENT_QUEUE_SIZE];
    int head;
    int tail;
    int size;
    int points; // offset 0x12C = 300
};
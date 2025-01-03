//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03.
//

#include "common.h"

struct CityStats {
    Settlement *settlement;
    struct {
        struct {
            int baseFarmingLevel;
            int farmUpgrades;
            int foodImports;
            int health;
            int buildings;
            int taxes;
            int unitDisbands;
            int slavery;
        } growth;
        struct {
            int squalor;
            int plague;
            int taxes;
            int disaster;
            int taxes2;
            int taxes3;
            int draft;
            int taxes4;
        } decline;
        int count;
    } population;
    struct {
        struct {
            int garrison;
            int law;
            int entertainmentBuildings;
            int governorInfluence;
            int taxes;
            int triumph;
            int wonder;
            int populationBoom;
            int entertainment;
            int health;
        } positive;
        struct {
            int squalor;
            int distanceToCapital;
            int culture;
            int noGovernor;
            int taxes;
            int unrest;
            int underpopulation;
            int besieged;
            int blockaded;
            int recession;
            int governorReligion;
            int factionLeaderReligion;
            int notUsed1;
            int notUsed2;
            int notUsed3;
        } negative;
        int value; // percentage like seen in the game ui
    } order;
    struct {
        int farms;
        int taxes;
        int mining;
        int trade;
        int diplomacy;
        int demolition;
        int looting;
        int buildings;
        int admin;
    } income;
    struct {
        int salaries;
        int army;
        int construction;
        int recruitment;
        int diplomacy;
        int corruption;
        int entertainment;
        int devastation;
    } spending;
};
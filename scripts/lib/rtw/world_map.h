//
// Created by MuaazH (muaaz.h.is@gmail.com) on 2024-02-03.
//

#include "common.h"

struct MapHeight {
    float height;
    int flags;
};

struct MapPixel {
    int unknonw00;
    void *road;
    int unknonw08;
    int unknonw0C;

    // 2 = road?
    // 7 = tree0
    // 8 = tree1
    // B = water
    int unknonw10;

    int region;

    int unknonw18;
    int unknonw1C; // flags

    int unknonw20;
    int unknonw24;
    int unknonw28;
    int unknonw2C;
    int unknonw30;
};


struct WorldMap {
    int unknonw00;
    int unknonw04;
    int unknonw08;
    int unknonw0C;

    int unknonw10;
    int unknonw14;
    int unknonw18;
    int unknonw1C;

    int unknonw20;
    int unknonw24;
    int unknonw28;
    int mapLength;

    int mapWidth;
    int unknonw34;
    int unknonw38;
    int unknonw3C;

    int unknonw40;
    MapHeight *heightData;
    MapPixel *mapPixels;
    int unknonw4C;

    int unknonw50;
    int unknonw54;
    int unknonw58;
    int unknonw5C;

    int unknonw60;
    int unknonw64;
    int unknonw68;
    int unknonw6C;

    Region regions[MAX_REGION_COUNT];
    int regionsCount; // how many are actually used
};

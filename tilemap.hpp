#pragma once

#include <fstream>

const int N = 25;

const char GRASS = 1;
const char GRASS2 = 2;
const char SPIKES = 3;
const char WALL1 = 4;
const char WALL2 = 5;
const char WALL2t2 = 5;
const char WALL3 = 6;
const char CRAFTINGTABLE = 7;
const char UPPER_GRASS = 8;
const char STAIR = 9;
const char WATER = 10;
const char WATER1 = 11;
const char WATER2 = 12;
const char WATER3 = 13;
const char WATER4 = 14;
const char WATER5 = 15;
const char WATER6 = 16;
const char WATER7 = 17;
const char WATER8 = 18;
const char BRIDGE1 = 19;
const char SHADEDGRASS1 = 20;
const char SHADEDGRASS2 = 21;
const char SHADEDGRASS3 = 22;
const char SHADEDGRASS4 = 23;
const char SHADEDGRASS5 = 24;
const char SHADEDGRASS6 = 25;
const char SHADEDGRASS7 = 26;
const char SHADEDGRASS8 = 27;
const char SHADEDGRASS9 = 28;
const char SHADEDGRASS10 = 29;
const char SHADEDGRASS11 = 30;
const char SHADEDGRASS12 = 31;
const char SHADEDGRASS13 = 32;
const char SHADEDGRASS14 = 33;
const char SHADEDGRASS15 = 34;
const char SHADEDGRASS16 = 35;
const char SHADEDGRASS17 = 36;
const char SHADEDGRASS18 = 37;
const char SHADEDGRASS19 = 38;
const char SHADEDGRASS20 = 39;
const char SHADEDGRASS21 = 40;
const char BUSH = 41;
const char SHADEDGRASS22 = 42;
const char SHADEDGRASS23 = 43;
const char SHADEDGRASS24 = 44;
const char SHADEDGRASS25 = 45;
const char WALL1t2 = 46;
const char WALL1t3 = 47;
const char WALL3t2 = 48;
const char WALL3t3 = 49;
const char DUMMY = 50;

inline char groundMap[N][N];
inline char propsMap[N][N];

inline void readTiledFile(const char* filename, std::string layerName) {
    FILE* file = fopen(filename, "r");

    if (!file) {
        return;
    }

    int tileID;
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            if (fscanf(file, "%d", &tileID) == 1) {

                if (layerName == "groundMap") {
                    switch (tileID) {
                        case 0: groundMap[y][x] = GRASS; break;
                        case 1: groundMap[y][x] = GRASS2; break;
                        case 5: groundMap[y][x] = WALL1; break;
                        case 6: groundMap[y][x] = WALL2; break;
                        case 7: groundMap[y][x] = WALL3; break;
                        case 13: groundMap[y][x] = UPPER_GRASS; break;
                        case 15: groundMap[y][x] = SPIKES; break;
                        case 16: groundMap[y][x] = STAIR; break;
                        case 18: groundMap[y][x] = WATER; break;
                        case 19: groundMap[y][x] = WATER1; break;
                        case 20: groundMap[y][x] = WATER2; break;
                        case 21: groundMap[y][x] = WATER3; break;
                        case 22: groundMap[y][x] = WATER4; break;
                        case 23: groundMap[y][x] = WATER5; break;
                        case 24: groundMap[y][x] = WATER6; break;
                        case 25: groundMap[y][x] = WATER7; break;
                        case 26: groundMap[y][x] = WATER8; break;
                        case 34: groundMap[y][x] = BRIDGE1; break;
                        case 35: groundMap[y][x] = SHADEDGRASS1; break;
                        case 36: groundMap[y][x] = SHADEDGRASS2; break;
                        case 37: groundMap[y][x] = SHADEDGRASS3; break;
                        case 38: groundMap[y][x] = SHADEDGRASS4; break;
                        case 39: groundMap[y][x] = SHADEDGRASS5; break;
                        case 40: groundMap[y][x] = SHADEDGRASS6; break;
                        case 41: groundMap[y][x] = SHADEDGRASS7; break;
                        case 42: groundMap[y][x] = SHADEDGRASS8; break;
                        case 43: groundMap[y][x] = SHADEDGRASS9; break;
                        case 44: groundMap[y][x] = SHADEDGRASS10; break;
                        case 45: groundMap[y][x] = SHADEDGRASS11; break;
                        case 46: groundMap[y][x] = SHADEDGRASS12; break;
                        case 47: groundMap[y][x] = SHADEDGRASS13; break;
                        case 48: groundMap[y][x] = SHADEDGRASS14; break;
                        case 49: groundMap[y][x] = SHADEDGRASS16; break;
                        case 50: groundMap[y][x] = SHADEDGRASS15; break;
                        case 51: groundMap[y][x] = SHADEDGRASS17; break;
                        case 52: groundMap[y][x] = SHADEDGRASS18; break;
                        case 53: groundMap[y][x] = SHADEDGRASS19; break;
                        case 54: groundMap[y][x] = SHADEDGRASS20; break;
                        case 55: groundMap[y][x] = SHADEDGRASS21; break;
                        case 62: groundMap[y][x] = WALL1t2; break;
                        case 63: groundMap[y][x] = WALL3t2; break;
                        case 64: groundMap[y][x] = SHADEDGRASS22; break;
                        case 65: groundMap[y][x] = WALL1t3; break;
                        case 66: groundMap[y][x] = WALL3t3; break;
                        case 67: groundMap[y][x] = SHADEDGRASS23; break;
                        case 68: groundMap[y][x] = SHADEDGRASS24; break;
                        case 69: groundMap[y][x] = SHADEDGRASS25; break;
                        default: groundMap[y][x] = GRASS; break;
                    }
                }
                else if (layerName == "propsMap") {
                    switch (tileID) {
                        case 58: propsMap[y][x] = BUSH; break;
                        case 70: propsMap[y][x] = DUMMY; break;
                        case 0:  propsMap[y][x] = 0; break;
                        case -1: propsMap[y][x] = 0; break;
                        default: propsMap[y][x] = 0; break;
                    }
                }

                fscanf(file, "%*[, \n\r]");
            }
            else {
                fclose(file);
                return;
            }
        }
    }

    fclose(file);
}




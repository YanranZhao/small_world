//
// Created by xintong cheng on 2018-02-12.
//

#ifndef SMALL_WORLD_PLAYER_H
#define SMALL_WORLD_PLAYER_H


#include "Power/Power.h"
#include "Region.h"
#include "Race/Race.h"
#include "dice.h"
#include <vector>

class Player {
public:
    Player();
    ~Player();

    Race activeRace;
    Race lostTribe;
    Power power;
    Dice dice;

    vector<Region> occupiedRegions;
    void picks_race();
    void conquers();
    void scores();
    int reinforcementDie();
    int getTokens();
    int getCoins();

    int victoryCoins;
    int totalTokens;
};


#endif //SMALL_WORLD_PLAYER_H

#pragma once
// BattleSystem.h
#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "Player.h"
#include "Enemy.h"

class BattleSystem {
public:
    static void StartBattle(Player& player, Enemy& enemy);
};

#endif


// Wakamangers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// main.cpp
#include "World.h"
#include "Story.h"
#include "Player.h"
#include "Enemy.h"
#include "BattleSystem.h"



int main()
{
    Story::Introduce();

    World::EnterFoxRiver();

  

    Player hero("Waka", 100, 20, 10);

    Enemy monster("Khaelis", 150, 30, 20);

    BattleSystem::StartBattle(hero, monster);


    World::ExitFoxRiver();

    World::EnterMiami();
    
    World::ExitMiami();

    World::EnterFrozenEleumLoyce();

    Story::Conclusion();

    return 0;
}



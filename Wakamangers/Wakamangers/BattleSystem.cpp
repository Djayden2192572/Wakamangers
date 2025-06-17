// BattleSystem.cpp
#include "BattleSystem.h"
#include <iostream>

void BattleSystem::StartBattle(Player& player, Enemy& enemy) {
    std::cout << "Battle starts!" << std::endl;

    while (player.GetHP() > 0 && enemy.GetHP() > 0) {
        // Player attacks first
        std::cout << player.GetName() << " attacks!" << std::endl;
        enemy.TakeDamage(player.GetStrength());

        if (enemy.GetHP() == 0) {
            std::cout << "Enemy slain." << std::endl;
            break;
        }

        // Then the monster attacks
        std::cout << enemy.GetName() << " attacks!" << std::endl;
        player.TakeDamage(enemy.GetStrength());

        if (player.GetHP() == 0) {
            std::cout << "You Died." << std::endl;
            break;
        }
    }
}

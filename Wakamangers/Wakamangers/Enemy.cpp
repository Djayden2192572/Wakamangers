
#include "Enemy.h"
#include <iostream>

Enemy::Enemy(std::string name, int hp, int strength, int defense)
    : Character(name, hp, strength, defense) {
}

void Enemy::HandOfTheStorm() {
    std::cout << Name << " Uses Hand of the Storm!" << std::endl;
    // Implement attack effects here
}

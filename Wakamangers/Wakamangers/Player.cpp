// Player.cpp
#include "Player.h"
#include <iostream>

Player::Player(std::string name, int hp, int strength, int defense)
    : Character(name, hp, strength, defense) {
}

void Player::WindScarf() {
    std::cout << Name << " Uses Wind Scarf!" << std::endl;
    // Compute DMG 
}

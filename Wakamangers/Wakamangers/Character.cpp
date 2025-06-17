// Character.cpp
#include "Character.h"
#include <iostream>

Character::Character(std::string name, int hp, int strength, int defense) {
    Name = name;
    HP = hp;
    Strength = strength;
    Defense = defense;
}

void Character::TakeDamage(int amountOfDamage) {
    HP -= amountOfDamage;
    if (HP < 0) HP = 0;
    std::cout << Name << " took " << amountOfDamage << " damage! his HP is now " << HP << std::endl;
}

void Character::Requiems() {
    std::cout << Name << "'s Requiem has ended..." << std::endl;
}

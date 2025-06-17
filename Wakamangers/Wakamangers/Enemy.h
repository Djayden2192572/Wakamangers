// Enemy.h
#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"

class Enemy : public Character {
public:
    // Constructor
    Enemy(std::string name, int hp, int strength, int defense);

    // Enemy-specific attack
    void HandOfTheStorm();
};

#endif




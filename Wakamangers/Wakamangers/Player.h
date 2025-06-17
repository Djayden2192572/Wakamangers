#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player : public Character {
public:
    Player(std::string name, int hp, int strength, int defense);
    void WindScarf();
};

#endif // PLAYER_H


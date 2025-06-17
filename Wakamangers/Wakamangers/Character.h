// Character.h
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
protected:
    int HP;
    std::string Name;
    int Strength;
    int Defense;

public:
    // Constructor
    Character(std::string name, int hp, int strength, int defense);

    int GetHP() const { return HP; }
    int GetStrength() const { return Strength; }
    std::string GetName() const { return Name; }


    // Functions every character has
    void TakeDamage(int amountOfDamage);
    void Requiems();
};

#endif

// World.cpp
#include "World.h"

void World::EnterFoxRiver() {
    std::cout << " You enter Fox River plains.. The wind blows calmly as the trees protect you from the beaming sunlight." << std::endl;
}

void World::ExitFoxRiver() {
    std::cout << " You leave the Fox River plains, but as you walk you notice the sunlight becoming harsher as you enter an abandoned city." << std::endl;
} 

void World::EnterMiami() {
    std::cout << " You enter Miami. The sunlight is harsher as the air pollutes with smoke. It's hard to breathe." << std::endl;
}

void World::ExitMiami() {
    std::cout << " You leave Miami, as your cooled down by an icy breeze. The Temperature immediately changes." << std::endl;
}

void World::EnterFrozenEleumLoyce() {
    std::cout << " You arrive at Frozen Eleum Loyce. You shiver as you walk amongst the icy halls of the castle and its town." << std::endl;
}

void World::ExitFrozenEleumLoyce() {
    std::cout << " You leave Frozen Eleum Loyce. The icy winds haunt your every step until they seem to subside. " << std::endl;
}

#ifndef human_H
#define human_H
#include "creature.h"
#include <iostream>
#include <string>

namespace cs_creature
{
    class Human : public Creature
    {
    public:
        Human();
        Human(int newStrength, int newHitpoints);
        std::string getSpecies() const;
    };
}
#endif

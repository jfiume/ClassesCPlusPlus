#ifndef demon_H
#define demon_H
#include "creature.h"
#include <iostream>
#include <string>

namespace cs_creature
{
    class Demon : public Creature
    {
    public:
        Demon();
        Demon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}
#endif

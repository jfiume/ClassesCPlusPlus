#ifndef balrog_H
#define balrog_H
#include "demon.h"
#include "creature.h"
#include <iostream>
#include <string>

namespace cs_creature
{
    class Balrog : public Demon
    {
    public:
        Balrog();
        Balrog(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}
#endif

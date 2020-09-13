#ifndef elf_H
#define elf_H
#include "creature.h"
#include <iostream>
#include <string>

namespace cs_creature
{
    class Elf : public Creature
    {
    public:
        Elf();
        Elf(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}
#endif

#ifndef cyberdemon_H
#define cyberdemon_H
#include "demon.h"
#include <iostream>
#include <string>

namespace cs_creature
{
    class Cyberdemon : public Demon
    {
    public:
        Cyberdemon();
        Cyberdemon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
    };
}
#endif

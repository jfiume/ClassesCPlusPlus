#include <iostream>
#include "cyberdemon.h"
#include "demon.h"
using namespace std;

namespace cs_creature {
    Cyberdemon::Cyberdemon() : Demon()
    {
    }






    Cyberdemon::Cyberdemon(int newStrength, int newHitPoints) :
                                Demon(newStrength, newHitPoints)
    {
    }






    string Cyberdemon::getSpecies() const
    {
        return "Cyberdemon";
    }
}

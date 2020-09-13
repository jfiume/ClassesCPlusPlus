#include <iostream>
#include "demon.h"
#include "creature.h"
using namespace std;

namespace cs_creature {
    Demon::Demon() : Creature()
    {
    }






    Demon::Demon(int newStrength, int newHitPoints) :
                    Creature(newStrength, newHitPoints)
    {
    }






    string Demon::getSpecies() const
    {
        return "Demon";
    }






    int Demon::getDamage() const
    {
        int demonDamage = Creature::getDamage();
        // Demons can inflict damage of 50 with a 25% chanc
        if (rand() % 4 == 0) {
            demonDamage += 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }
        return demonDamage;
    }
}

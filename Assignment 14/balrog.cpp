#include <iostream>
#include "balrog.h"
#include "demon.h"
#include "creature.h"
using namespace std;

namespace cs_creature {
    Balrog::Balrog() : Demon()
    {
    }






    Balrog::Balrog(int newStrength, int newHitPoints) :
                        Demon(newStrength, newHitPoints)
    {
    }






    string Balrog::getSpecies() const
    {
        return "Balrog";
    }






    int Balrog::getDamage() const
    {
        int BalrogDemonDamage = Demon::getDamage();
        int BalrogDemonDamage2 = (rand() % Creature::getStrength()) + 1;
        cout << "Balrog speed attack inflicts " << BalrogDemonDamage2 << " additional damage points!" << endl;
        BalrogDemonDamage += BalrogDemonDamage2;
        return BalrogDemonDamage;
    }
}

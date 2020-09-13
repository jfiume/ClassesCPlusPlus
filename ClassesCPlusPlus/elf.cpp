#include <iostream>
#include "elf.h"
#include "creature.h"
using namespace std;

namespace cs_creature {
    Elf::Elf() : Creature()
    {
    }






    Elf::Elf(int newStrength, int newHitPoints) :
                Creature(newStrength, newHitPoints)
    {
    }







    string Elf::getSpecies() const
    {
        return "Elf";
    }






    int Elf::getDamage() const
    {
        int elfDamage = Creature::getDamage();
        // Elves inflict double magical damage with a 50% chance
        if ((rand() % 2) == 0) {
            cout << "Magical attack inflicts " << elfDamage << " additional damage points!" << endl;
            elfDamage *= 2;
        }
        return elfDamage;
    }
}

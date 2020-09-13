#include <iostream>
#include "creature.h"
using namespace std;

namespace cs_creature {
    Creature::Creature()
    {
        hitpoints = 10;
        strength = 10;
    }
    
    




    Creature::Creature(int newStrength, int newHitPoints)
    {
        hitpoints = newHitPoints;
        strength = newStrength;
    }






    int Creature::getStrength() const
    {
        return strength;
    }






    int Creature::getHitpoints() const
    {
        return hitpoints;
    }






    void Creature::updateHitPoints(int newHitPoints)
    {
        hitpoints = newHitPoints;
    }






    void Creature::updateStrength(int newStrength)
    {
        strength = newStrength;
    }







    int Creature::getDamage() const
    {
        int damage = (rand() % strength) + 1;
        cout << "The " << getSpecies() << " attacks for " << damage << " points!"
             << endl;
        return damage;
    }






    string Creature::getSpecies() const
    {
        return "Creature";
    }
 }

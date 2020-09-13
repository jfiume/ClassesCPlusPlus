#ifndef creature_H
#define creature_H
#include <iostream>
#include <string>

namespace cs_creature
{
    class Creature
    {
        private:
            int strength;           // how much damage this Creature inflicts
            int hitpoints;          // how much damage this Creature can sustain
        public:
            Creature();
            Creature(int newStrength, int newHitpoints);
            int getStrength() const;
            int getHitpoints() const;
            void updateStrength(int newStrength);
            void updateHitPoints(int newHitPoints);
            virtual int getDamage() const;
            virtual std::string getSpecies() const = 0;
    };
}
#endif

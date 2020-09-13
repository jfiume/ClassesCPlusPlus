/*
 Joe Fiume
 CS 10B
 Dave Harden
 11 May 2020
 */


#include "creature.h"
#include "demon.h"
#include "human.h"
#include "elf.h"
#include "balrog.h"
#include "cyberdemon.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
using namespace cs_creature;




void battleArena(Creature &Creature1, Creature& Creature2);
void printFightAnnouncements(const Creature& Creature1, const Creature& Creature2,
                            int totalDamage);
void printWinner(const Creature& Creature1, const Creature& Creature2);




int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    Elf e1(50,50);
    Balrog b1(50,50);

    battleArena(e1, b1);
    
    Elf e2(50, 50);
    Human h1(50, 50);
    
    battleArena(e2, h1);
    
    Elf e3(50, 50);
    Cyberdemon c1(50, 50);
    
    battleArena(e3, c1);
    
    Human h2(50, 50);
    Balrog b2(50, 50);
    
    battleArena(h2, b2);
    
    Human h3(50, 50);
    Cyberdemon c2(50, 50);
    
    battleArena(h3, c2);
    
    Balrog b3(50, 50);
    Cyberdemon c3(50, 50);
    
    battleArena(b3, c3);
}






void battleArena(Creature& Creature1, Creature& Creature2)
{
    while (Creature1.getHitpoints() > 0 && Creature2.getHitpoints() > 0)
    {
        int totalDamage1 = Creature1.getDamage();
        Creature2.updateHitPoints(Creature2.getHitpoints() - totalDamage1);
        printFightAnnouncements(Creature1, Creature2, totalDamage1);
        
        int totalDamage2 = Creature2.getDamage();
        Creature1.updateHitPoints(Creature1.getHitpoints() - totalDamage2);
        printFightAnnouncements(Creature2, Creature1, totalDamage2);
    }
    
    printWinner(Creature1, Creature2);
}






void printFightAnnouncements(const Creature& Creature1, const Creature& Creature2,
                            int totalDamage)
{
    cout << "Total damage inflicted by " << Creature1.getSpecies()
         << " is " << totalDamage << " points!" << endl;
    cout << Creature2.getSpecies() << " is now at " << Creature2.getHitpoints()
         << " hit points." << endl;
}






void printWinner(const Creature& Creature1, const Creature& Creature2)
{
    if (Creature1.getHitpoints() <= 0 && Creature2.getHitpoints() <= 0)
    {
        cout << "tie" << endl << endl;
    }
    else if (Creature1.getHitpoints() <= 0)
    {
        cout << Creature2.getSpecies() << " wins!" << endl << endl;
    }
    else
    {
        cout << Creature1.getSpecies() << " wins!" << endl << endl;
    }
}





/*
 The Elf attacks for 38 points!
 Magical attack inflicts 38 additional damage points!
 Total damage inflicted by Elf is 76 points!
 Balrog is now at -26 hit points.
 The Balrog attacks for 4 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 31 additional damage points!
 Total damage inflicted by Balrog is 85 points!
 Elf is now at -35 hit points.
 tie

 The Elf attacks for 38 points!
 Magical attack inflicts 38 additional damage points!
 Total damage inflicted by Elf is 76 points!
 Human is now at -26 hit points.
 The Human attacks for 14 points!
 Total damage inflicted by Human is 14 points!
 Elf is now at 36 hit points.
 Elf wins!

 The Elf attacks for 20 points!
 Magical attack inflicts 20 additional damage points!
 Total damage inflicted by Elf is 40 points!
 Cyberdemon is now at 10 hit points.
 The Cyberdemon attacks for 7 points!
 Total damage inflicted by Cyberdemon is 7 points!
 Elf is now at 43 hit points.
 The Elf attacks for 23 points!
 Magical attack inflicts 23 additional damage points!
 Total damage inflicted by Elf is 46 points!
 Cyberdemon is now at -36 hit points.
 The Cyberdemon attacks for 32 points!
 Total damage inflicted by Cyberdemon is 32 points!
 Elf is now at 11 hit points.
 Elf wins!

 The Human attacks for 4 points!
 Total damage inflicted by Human is 4 points!
 Balrog is now at 46 hit points.
 The Balrog attacks for 19 points!
 Balrog speed attack inflicts 12 additional damage points!
 Total damage inflicted by Balrog is 31 points!
 Human is now at 19 hit points.
 The Human attacks for 33 points!
 Total damage inflicted by Human is 33 points!
 Balrog is now at 13 hit points.
 The Balrog attacks for 42 points!
 Balrog speed attack inflicts 23 additional damage points!
 Total damage inflicted by Balrog is 65 points!
 Human is now at -46 hit points.
 Balrog wins!

 The Human attacks for 21 points!
 Total damage inflicted by Human is 21 points!
 Cyberdemon is now at 29 hit points.
 The Cyberdemon attacks for 39 points!
 Total damage inflicted by Cyberdemon is 39 points!
 Human is now at 11 hit points.
 The Human attacks for 29 points!
 Total damage inflicted by Human is 29 points!
 Cyberdemon is now at 0 hit points.
 The Cyberdemon attacks for 41 points!
 Total damage inflicted by Cyberdemon is 41 points!
 Human is now at -30 hit points.
 tie

 The Balrog attacks for 38 points!
 Balrog speed attack inflicts 43 additional damage points!
 Total damage inflicted by Balrog is 81 points!
 Cyberdemon is now at -31 hit points.
 The Cyberdemon attacks for 20 points!
 Total damage inflicted by Cyberdemon is 20 points!
 Balrog is now at 30 hit points.
 Balrog wins!

 */

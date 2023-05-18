#ifndef ALIENPACK_H
#define ALIENPACK_H

#include <iostream>
#include "Alien.h"
using namespace std;

const int MAX_ALIENS = 10;

class AlienPack {
    private:
        Alien **aliens;
        int count;

    public: 
        AlienPack();
        void addAlien(Alien *alien, int index);
        Alien* getAliens();
        int getAlienCount();
        int calculateDamage();
};

#endif
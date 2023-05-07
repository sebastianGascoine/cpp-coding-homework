#ifndef OGRE_ALIEN_H
#define OGRE_ALIEN_H

#include <iostream>
#include "Alien.h"
using namespace std;

class OgreAlien : public Alien {
    private:
    public:
        OgreAlien(int health, string name) : Alien(3, health, name) {};
};

#endif
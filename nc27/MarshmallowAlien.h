#ifndef MARSHMALLOW_ALIEN_H
#define MARSHMALLOW_ALIEN_H

#include <iostream>
#include "Alien.h"
using namespace std;

class MarshmallowAlien : public Alien {
    private:
    public:
      MarshmallowAlien(int health, string name) : Alien(health, name) {};
      int getDamage();
};

#endif
#ifndef ALIEN_H
#define ALIEN_H

#include <iostream>
using namespace std;

// type of aliens
enum class AlienType { SNAKE, OGRE, MARSHMALLOW_MAN };

class Alien {
private:
  int damage_;
  int health; // 0=dead, 100=full health
  string name;

public:
  Alien();
  Alien(int damage, int health, string name);
  AlienType getAlienType();
  int getHealth();
  string getName();
  int getDamage();
};

#endif
#ifndef ALIEN_H
#define ALIEN_H

#include <iostream>
using namespace std;

// type of aliens
enum class AlienType { SNAKE, OGRE, MARSHMALLOW_MAN };

class Alien {
private:
  int health; // 0=dead, 100=full health
  string name;

public:
  Alien();
  Alien(int health, string name);
  AlienType getAlienType();
  //virtual int getHealth() = 0;
  //virtual string getName() = 0;
  virtual int getDamage() = 0;
};

#endif
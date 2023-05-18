#include "Alien.h"
#include "AlienPack.h"
#include "SnakeAlien.h"
#include "OgreAlien.h"
#include "MarshmallowAlien.h"
#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  AlienPack alienPack;
  Alien *snake = new SnakeAlien(100, "snake");
  Alien *ogre = new OgreAlien(100,"ogre");
  Alien *marshmallow = new MarshmallowAlien(100,"marshmallow");

  alienPack.addAlien(snake, 0);
  alienPack.addAlien(ogre,1);
  alienPack.addAlien(marshmallow,2);

  AlienPack alienPack2;
  alienPack2.addAlien(snake, 0);
  alienPack2.addAlien(snake,1);
  alienPack2.addAlien(ogre,2);
  alienPack2.addAlien(marshmallow,3);
  alienPack2.addAlien(marshmallow,4);
  alienPack2.addAlien(marshmallow,5);
  

  cout << "Alien Pack 1 count: " << alienPack.getAlienCount() << endl;

  cout << "Damage Pack 1: " << alienPack.calculateDamage() << endl;

  cout << "\nAlien Pack 2 count: " << alienPack2.getAlienCount() << endl;

  cout << "Damage Pack 1: " << alienPack2.calculateDamage() << endl;
}
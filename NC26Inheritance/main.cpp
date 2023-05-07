#include <iostream>
#include "AlienPack.h"
#include "SnakeAlien.h"
#include "OgreAlien.h"
#include "MarshmallowAlien.h"
#include "Alien.h"

//calculates the damage of the alien pack
int calculateDamage(Alien* alienArray, int count);

int main() {
    std::cout << "Hello World!\n";
    AlienPack alienPack;
    SnakeAlien snake = SnakeAlien(100,"snake");
    OgreAlien ogre = OgreAlien(100,"ogre");
    MarshmallowAlien marshmallow = MarshmallowAlien(100,"marshmallow");

    alienPack.addAlien(snake,0);
    alienPack.addAlien(ogre,1);
    alienPack.addAlien(marshmallow,2);

    AlienPack alienPack2;
    alienPack2.addAlien(snake,0);
    alienPack2.addAlien(snake,1);
    alienPack2.addAlien(ogre,2);
    alienPack2.addAlien(marshmallow,3);
    alienPack2.addAlien(marshmallow,4);
    alienPack2.addAlien(marshmallow,5);


    cout << "Alien Pack 1 count: " << alienPack.getAlienCount() << endl;

    int totalDamage = calculateDamage(alienPack.getAliens(),
        alienPack.getAlienCount());
    cout << "Damage Pack 1: " << totalDamage << endl;

    cout << "\nAlien Pack 2 count: " << alienPack2.getAlienCount() << endl;

    int totalDamage2 = calculateDamage(alienPack2.getAliens(),
        alienPack2.getAlienCount());
    cout << "Damage Pack 2: " << totalDamage2 << endl;
    /*
    Alien snake(AlienType::SNAKE, 100, "Snake");
    Alien ogre(AlienType::OGRE, 100, "Ogre");
    Alien marshallow(AlienType::MARSHMALLOW_MAN, 100, "marshmallow");

    alienPack.addAlien(snake, 0);
    alienPack.addAlien(ogre, 1);
    alienPack.addAlien(marshallow, 2);

    cout << "Alien count: " << alienPack.getAlienCount() << endl;

    int totalDamage = calculateDamage(alienPack.getAliens(),
        alienPack.getAlienCount());
    cout << "Damage: " << totalDamage << endl; */
}

int calculateDamage(Alien* alienArray, int count) {
    int damage = 0;
    
    for(int i = 0; i < count; i++) {
        damage += (*(alienArray + i)).getDamage();

        /*if ((*(alienArray + i)).getAlienType() == AlienType::SNAKE)  {
            damage += 10;
        } else if ((*(alienArray + i)).getAlienType() == AlienType::OGRE) {
            damage += 3;
        } else if ((*(alienArray + i)).getAlienType() == AlienType::MARSHMALLOW_MAN) {
            damage += 1;
        }*/
    } 
    
    return damage;
}
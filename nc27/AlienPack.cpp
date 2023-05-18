#include "AlienPack.h"
using namespace std;

//default construct
AlienPack::AlienPack() {
  aliens = new Alien*[MAX_ALIENS];

    count = 0;
}

//adds an alien to the pack
void AlienPack::addAlien(Alien *alien, int index) {
    aliens[index] = alien;
    count++;
}

//returns the alien pack array
Alien* AlienPack::getAliens() {
    return aliens[0];
}

//
int AlienPack::getAlienCount() {
    return count;
}

int AlienPack::calculateDamage() {
    int damage = 0;
    
    for(int i = 0; i < count; i++) {
        damage += aliens[i]->getDamage();

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
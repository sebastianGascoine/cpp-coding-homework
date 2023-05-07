#include "AlienPack.h"
using namespace std;

//default construct
AlienPack::AlienPack() {
    count = 0;
}

//adds an alien to the pack
void AlienPack::addAlien(Alien alien, int index) {
    aliens[index] = alien;
    count++;
}

//returns the alien pack array
Alien* AlienPack::getAliens() {
    return aliens;
}

//
int AlienPack::getAlienCount() {
    return count;
}
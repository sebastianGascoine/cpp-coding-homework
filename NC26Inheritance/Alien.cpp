#include "Alien.h"
using namespace std;

//no arg default constructor
Alien::Alien() {
    health = 100;
    name = "";
    damage_ = 0;
}

//full constructor
Alien::Alien(int damage, int health, string name) {
    this->damage_ = damage;
    this->health = health;
    this->name = name;
}

int Alien::getDamage() {
    return damage_;
}
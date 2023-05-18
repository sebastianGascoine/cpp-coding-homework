#include "Alien.h"
using namespace std;

//no arg default constructor
Alien::Alien() {
    health = 100;
    name = "";
}

//full constructor
Alien::Alien(int health, string name) {
    health = health;
    name = name;
}

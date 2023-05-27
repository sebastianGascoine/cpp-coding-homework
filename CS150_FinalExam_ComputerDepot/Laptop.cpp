#include "Laptop.h"
#include <iomanip>
using namespace std;

Laptop::Laptop() : m_batteryLife(0.0), m_weight(0.0) {}

Laptop::Laptop(string make, string model, double price, double batteryLife, double weight) 
  : Computer(make, model, price),
    m_batteryLife (batteryLife),
    m_weight(weight)
{}


double Laptop::getBatteryLife(){
  return m_batteryLife;
}
double Laptop::getWeight(){
  return m_weight;
}

void Laptop::setBatteryLife(double inBatt){
  m_batteryLife = inBatt;
}
void Laptop::setWeight(double inWeight){
  m_weight = inWeight;
}

bool operator==(Laptop a, Laptop b) { 
  //I didnt compare IDs as they are unique
  return ((a.getMake() == b.getMake()) && (a.getModel() == b.getModel()) 
    && (a.getPrice() == b.getPrice()) && (a.getBatteryLife() == b.getBatteryLife()) 
    && (a.getWeight() == b.getWeight()));
}
ostream &operator<<(ostream &out, Laptop &lap) {
  return out << left << setprecision(2) << fixed << '|' << setw(6) << lap.getId() 
    << '|' << setw(7) << lap.getMake() << '|' << setw(15) 
    << lap.getModel() << '|' << setw(8) << lap.getPrice() << '|'  << setw(15)
    << lap.getBatteryLife() << '|' << setw(15) << setprecision(1) << fixed << lap.getWeight() << '|';
}

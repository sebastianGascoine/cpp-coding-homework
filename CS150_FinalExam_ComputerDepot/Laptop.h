#ifndef LAPTOP_H
#define LAPTOP_H

#include <iostream>
#include "Computer.h"
using namespace std;


class Laptop : public Computer {
private:
  double m_batteryLife ;
  double m_weight;
  
public:
  Laptop();
  Laptop(string make, string model, double price, double batteryLife, double weight);
  double getBatteryLife();
  double getWeight();

  void setBatteryLife(double inBatt);
  void setWeight(double inWeight);

  friend bool operator==(Laptop a, Laptop b);
  friend ostream& operator<<(ostream& out, Laptop& lap);

};

#endif
#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
using namespace std;


class Computer {
  static int s_nextId;
private:
  int m_id ; //must be unique
  string m_make;
  string m_model;
  double m_price;

public:
  Computer();
  Computer(string make, string model, double price);
  virtual int getId();
  virtual string getMake();
  virtual string getModel();
  virtual double getPrice();

  virtual void setMake(string inMake);
  virtual void setModel(string inModel);
  virtual void setPrice(double inPrice);

  friend bool operator==(Computer a, Computer b);
  friend ostream& operator<<(ostream& out, Computer& comp);

};

#endif
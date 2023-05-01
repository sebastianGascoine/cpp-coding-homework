#include "Month.h"
#include <iomanip>
using namespace std;

Month::Month() {
  this->name = "January";
  this->number = 1;
}

Month::Month(string mon, unsigned int calender) {
  this->name = mon;
  this->number = calender;
}
string Month::getName() const { return name; }
int Month::getNumber() const { return number; }

void Month::setName(string mon) { this->name = mon; }
void Month::setNumber(int val) { this->number = val; }

void Month::operator++(int) {
  bool incrementYear = false;
  if (number == 12) {
    setNumber(1);
    incrementYear = true;
  } else {
    setNumber(getNumber() + 1);
    setName(nameofmonths[getNumber()-1]);
  }
  if(incrementYear){
    setName(nameofmonths[getNumber()-1]);
  }
}
void Month::operator--(int) {
  bool incrementYear = false;
  if (number == 1) {
    setNumber(12);
    incrementYear = true;
  } else {
    setNumber(getNumber() - 1);
    setName(nameofmonths[getNumber()-1]);
  }
  if(incrementYear){
    setName(nameofmonths[getNumber()-1]);
  }
}
void Month::operator=(const Month &rhs) {
  setName(rhs.getName());
  setNumber(rhs.getNumber());
}
bool operator==(Month a, Month b) {
  return ((a.getName() == b.getName()) && (a.getNumber() == b.getNumber()));
}
ostream &operator<<(ostream &out, const Month &t) {
  return out << "Month [" << t.name << " (" << t.number << ")]";
}

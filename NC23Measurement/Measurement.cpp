#include "Measurement.h"
#include <iomanip>
using namespace std;

Measurement::Measurement(){
  this->feet = 0;
  this->inches = 0;
}
        
Measurement::Measurement(unsigned int feet, unsigned int inches){
  this->feet = feet;
  int temp = inches;
  while(temp > 11){
    setFeet(feet+1);
    temp -= 12;
  }
  this->inches = temp;
  
}
Measurement::Measurement(const Measurement &t){
  this->feet = t.feet;
  this->inches = t.inches;
}      
unsigned int Measurement::getFeet() const {
    return feet;
}
        
unsigned int Measurement::getInches() const{
    return inches;   
}
        
bool Measurement::setFeet(unsigned int feet){
    this->feet = feet;
    return true;
}
        
bool Measurement::setInches(unsigned int inches){
    if(inches > 11){
      return false;
    }
    this->inches = inches;  
    return true;
}
        
void Measurement::operator++(int){
  bool incrementfeet = false;
  if(inches == 11){
    setInches(0);
    incrementfeet = true;
  } 
  else{
    setInches(getInches()+1);
  }
  if(incrementfeet){
    setFeet(getFeet()+1);
  }
}

void Measurement::operator--(int){
  bool decrementfeet = false;
  if(inches == 0){
    setInches(11);
    decrementfeet = true;
  } 
  else{
    setInches(getInches()-1);
  }
  if(decrementfeet){
    setFeet(getFeet()-1);
  }
}
        
Measurement Measurement::operator+(Measurement rhs){
    feet += rhs.feet;
    int temp = inches + rhs.inches;
    while(temp > 11){
      setFeet(getFeet()+1);
      temp -= 12;
    }
    setInches(temp);
    return *this;
}
        
Measurement Measurement::operator-(Measurement rhs) {
    int totalInches = (feet * 12 + inches) - (rhs.feet * 12 + rhs.inches);
    int ft = 0;
    while(totalInches > 11){
      ft++;
      totalInches -= 12;
    }
    setFeet(ft);
    setInches(totalInches);
    return *this;
}
        
ostream& operator<<(ostream& out, const Measurement& t){
 return out << "Measurement [" << t.feet << "' "  << t.inches 
        << '"' << "]";
}
        
bool operator==(Measurement a, Measurement b){
    return ((a.feet == b.feet) &&
         (a.inches == b.inches));
}


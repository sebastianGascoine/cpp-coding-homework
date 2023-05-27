#include "Computer.h"
#include <iomanip>
using namespace std;
int Computer::s_nextId = 100;

Computer::Computer() : m_id(0), m_make(""), m_model(""), m_price(0.0) {}

Computer::Computer(string make, string model, double price){ 
  this->m_id = s_nextId;
  this->m_make = make;
  this->m_model = model;
  this->m_price = price; 
  s_nextId++;
}

int Computer::getId(){
  return m_id;
}
string Computer::getMake(){
  return m_make;
}
string Computer::getModel(){
  return m_model;
}
double Computer::getPrice(){
  return m_price;
}

void Computer::setMake(string make){
  m_make = make;
}
void Computer::setModel(string model){
  m_model = model;
}
void Computer::setPrice(double price){
  m_price = price;
}

bool operator==(Computer a, Computer b) { 
  //I didnt compare IDs as they are unique
  return ((a.getMake() == b.getMake()) && (a.getModel() == b.getModel()) 
    && (a.getPrice() == b.getPrice()));
}
ostream &operator<<(ostream &out, Computer &comp) {
  return out << left << setprecision(2) << fixed << '|' << setw(6) << comp.getId() 
    << '|' << setw(7) << comp.getMake() << '|' << setw(15) 
    << comp.getModel() << '|' << setw(8) << comp.getPrice() << '|';
}

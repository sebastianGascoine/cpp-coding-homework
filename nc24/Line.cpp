#include "Line.h"
#include "Point.h"
#include <iomanip>
using namespace std;

Line::Line(int x1, int y1, int x2, int y2) : m_p1(x1, y1), m_p2(x2, y2) {}

Line::Line(const Point &p1, const Point &p2) : m_p1(p1), m_p2(p2) {}

Point Line::getP1() const { return m_p1; }
Point Line::getP2() const { return m_p2; }

int Line::getX1() const { 
  return m_p1.getX(); 
}
int Line::getY1() const { return m_p1.getY(); }
int Line::getX2() const { return m_p2.getX(); }
int Line::getY2() const { return m_p2.getY(); }

void Line::setP1(const Point &pnt) {
  this->m_p1.setX(pnt.getX());
  this->m_p1.setY(pnt.getY());
}
void Line::setP2(const Point &pnt) {
  this->m_p2.setX(pnt.getX());
  this->m_p2.setY(pnt.getY());
}

void Line::setX1(int xval) { this->m_p1.setX(xval); }
void Line::setY1(int yval) { this->m_p1.setY(yval); }
void Line::setX2(int xval) { this->m_p2.setX(xval); }
void Line::setY2(int yval) { this->m_p2.setY(yval); }

double Line::length() {
  double d = getP1().distanceTo(getP2());
  
  return d;
}
void Line::operator=(const Line &rhs) {
  setX1(rhs.getX1());
  setX2(rhs.getX2());
  setY1(rhs.getY1());
  setY2(rhs.getY2());

}
ostream &operator<<(ostream &out, const Line &line) {
  return out << "Line [(x1=" << line.getX1() << ",y1=" << line.getY1()
             << "), (x2=" << line.getX2() << ",y2=" << line.getY2() << ")]";
}

bool operator==(Line a, Line b) {
  return ((a.getX1() == b.getX1() && a.getX2() == b.getX2()) 
      && (a.getY1() == b.getY1() && a.getY2() == b.getY2()));
}

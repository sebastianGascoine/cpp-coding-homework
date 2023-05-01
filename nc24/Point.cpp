#include "Point.h"
#include <cmath>
#include <iomanip>
using namespace std;

Point::Point() : m_x(), m_y() {}

Point::Point(int xval, int yval) : m_x(xval), m_y(yval) {}

int Point::getX() const { return m_x; }

int Point::getY() const { return m_y; }

void Point::setX(int xval) { this->m_x = xval; }

void Point::setY(int yval) { this->m_y = yval; }

double Point::distanceTo(const Point &other) {
  double dy, dx, d;
  dx = (other.getX() - getX());
  dx = dx * dx;
  dy = (other.getY() - getY());
  dy = dy * dy;

  d = dx + dy;
  if (d > 0) {
    d = sqrt(d);
  } else {
    d *= -1;
    d = sqrt(d);
  }
  return d;
}
void Point::operator=(const Point &rhs) {
  setX(rhs.getX());
  setY(rhs.getY());
}
bool operator==(Point a, Point b) {
  return ((a.getX() == b.getX()) && (a.getY() == b.getY()));
}

ostream &operator<<(ostream &out, const Point &pnt) {
  return out << "Point [(x=" << pnt.getX() << ",y=" << pnt.getY() << ")]";
}

#ifndef LINE_H
#define LINE_H

#include "Point.h"
#include <iostream>
using namespace std;

class Line {
private:
  Point m_p1;
  Point m_p2;

public:
  Line(int x1, int x2, int y1, int y2);
  Line(const Point& p1, const Point& p2);
  Point getP1() const;
  Point getP2() const;
  int getX1() const;
  int getY1() const;
  int getX2() const;
  int getY2() const;
  void setP1(const Point &pnt);
  void setP2(const Point &pnt);
  void setX1(int xval);
  void setY1(int yval);
  void setX2(int xval);
  void setY2(int yval);
  double length();
  void operator=(const Line&);
  friend ostream &operator<<(ostream &out, const Line &line);
  friend bool operator==(Line a, Line b);
  
};

#endif
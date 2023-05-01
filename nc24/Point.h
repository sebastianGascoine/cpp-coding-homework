#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point {
    private:
        int m_x;
        int m_y;
    public:
        Point();
        Point(int x, int y);
        int getX() const;
        int getY() const;
        void setX(int inputX);
        void setY(int inputY);
        double distanceTo(const Point& other);
        void operator=(const Point&);
        friend bool operator==(Point a, Point b);
        friend ostream& operator<<(ostream& out, const Point& pnt);

};


#endif
#include "Line.h"
#include "Point.h"
#include <iostream>
using namespace std;

int main() {
  Line l1(1, 1, 4, 4);       // 1
  Point p1;                  // 2
  Point p2(0, 4);            // 2
  Line l2(p1, p2);           // 3
  cout << p1 << endl;        // 4
  cout << p2 << endl;        // 4
  cout << l1 << endl;        // 5
  cout << l2 << endl;        // 5
  if (p1 == p2) {            // 6
        cout << "Point objects are equal" << endl;
  } else {
        cout << "Point objects are NOT equal" << endl;
  }
  if (l1 == l2) {            // 6
        cout << "Line objects are equal" << endl;
  } else {
        cout << "Line objects are NOT equal" << endl;
  }
  cout << "Distance between points " <<p1.distanceTo(p2) << endl; // 7
  cout << "Length of line " << l2.length() << endl;               // 8
  l2 = l1;                   // 9
  if (l1 == l2) {            // 10
        cout << "Line objects are equal" << endl;
  } else {
        cout << "Line objects are NOT equal" << endl;
  }
}
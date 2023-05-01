#include "Month.h"
#include <iostream>
using namespace std;

int main() {
  Month m1("December", 12);  // 1
  Month m2;                  // 2
  cout << m1 << endl;        // 3
  cout << m2 << endl;        // 3
  if (m1 == m2) {            // 4
        cout << "Month objects are equal" << endl;
  } else {
        cout << "Month objects are NOT equal" << endl;
  }
  m1++;                      // 5
  cout << m1 << endl;        // 5
  m2--;                      // 6  
  cout << m2 << endl;        // 6
  if (m1 == m2) {            // 7
        cout << "Month objects are equal" << endl;
  } else {
        cout << "Month objects are NOT equal" << endl;
  }
  m1 = m2;                   // 8
  cout << m1 << endl;        // 9
  cout << m2 << endl;        // 9
  if (m1 == m2) {            // 10
        cout << "Month objects are equal" << endl;
  } else {
        cout << "Month objects are NOT equal" << endl;
  }
}
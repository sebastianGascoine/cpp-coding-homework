#include <iostream>
#include "Measurement.h"
using namespace std;

int main() {
  Measurement m1(5,18);        //1
  Measurement m2(m1);          //2
  cout << m1 << endl;          //3
  cout << m2 << endl;          //3
  if (m1 == m2) {              //4
        cout << "Times objects are equal" << endl;
  } else {
      cout << "Times objects are NOT equal" << endl;
  }
  
  m1++;                        //5
  m2--;                        //6
  if (m1 == m2) {              //7
        cout << "Times objects are equal" << endl;
  } else {
      cout << "Times objects are NOT equal" << endl;
  }
  
  Measurement m3 = m1 + m2;  //8
  cout << m3 << endl;          //9

  Measurement m4 = m1 - m2;    //10
  cout << m4 << endl;          //11
}
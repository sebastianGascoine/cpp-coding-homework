//time
#include <iostream>
#include "Time.h"
using namespace std;


int main() {
    Time t1(11,59,PM);       //1
    Time t2;                 //2
    cout << t1 << endl;      //3
    cout << t2 << endl;      //3
    if (t1 == t2) {          //4
        cout << "Times objects are equal" << endl;
    } else {
        cout << "Times objects are NOT equal" << endl;
    }
    
    t1++;                    //5
    cout << t1 << endl;      //5

    cout << t2 << endl;      //6
    if (t1 == t2) {          //7
        cout << "Times objects are equal" << endl;
    } else {
        cout << "Times objects are NOT equal" << endl;
    }
    
    cout << t1 << endl;      //8
    t2++;                    //9
    cout << t2 << endl;      //9
    if (t1 == t2) {          //10
        cout << "Times objects are equal" << endl;
    } else {
        cout << "Times objects are NOT equal" << endl;
    }
    
    
    return EXIT_SUCCESS;
}
/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #28
* LAST MODIFIED: 5/11/23
*****************************************************/
/****************************************************************************
* Exceptions
*****************************************************************************
* PROGRAM DESCRIPTION:
*Create a C++ program that asks the user to enter a dividend and a divisor and computes the results.
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Enter dividend:
(USER INPUT) //Requires Validation
Enter divisor:
(USER INPUT) //Requires Validation
The Quotient for (dividend) over (divisor) is : (ANSWER)

*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*****************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double dividend, divisor, answer;
    try
    {
      cout << "Enter dividend: " << endl;
      cin >> dividend;
      if(dividend==0)
            throw -1;
      cout << "Enter divisor: " << endl;
      cin >> divisor;
      if(divisor==0)
            throw -1;
    }
    catch (int)
    {
      cout<<"Error: Dividing By Zero."<<endl;
      return 0;
    }
    answer = dividend/divisor;
    cout << "The Quotient for " << dividend << " over " << divisor << " is : " << setprecision(3) << answer << endl;
    return 0;
    
}
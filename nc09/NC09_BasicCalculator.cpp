/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #09
* LAST MODIFIED: 2/26/23
*****************************************************/
/****************************************************************************
* Basic Calculator
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a C++ console application that asks a user to enter an operator (either +, -, *, /, % or ^) 
*and two operands (numbers), then calculates and displays the answer.
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Thank you for choosing Seb's Awesome Calculator
 _        _       _
/ |      | |     / |
  |   _ _| |_ _    |
  |  |_ _   _ _|   |  
  |      | |       |
 _|_     |_|      _|_

Enter operand 1: 
Enter operand 2: 
Enter operator: 
Your answer is: 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* math.h for round() & pow()
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;



int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/
    double operand1,operand2;
    double ans;
    char opertr;

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/
    cout << "Thank you for choosing Seb's Awesome Calculator" <<
        "\n  _        _       _" <<
        "\n/ |      | |     / |"<<
        "\n  |   _ _| |_ _    |" <<
        "\n  |  |_ _   _ _|   |  " <<
        "\n  |      | |       |"  <<                 
        "\n _|_     |_|      _|_"  << endl;

    /***** INPUT SECTION *****/
    cout << "\nEnter operand 1:"<< endl;
    cin >> operand1;
    cout << "Enter operand 1:"<< endl;
    cin >> operand2;
    cout << "Enter operator:"<< endl;
    cin >> opertr;
    
    /***** PROCESSING SECTION *****/
    //switch has name and cost     InterestPaid = round((PaidBack-Amount)*100)/100;
    switch(opertr) {
    case '+': //family
        ans = operand1 + operand2;
        break;
    case '-': //family
        ans = operand1 - operand2;
        break;
    case '*': //family
        ans = operand1 * operand2;
        break;
    case '/': //family
        ans = operand1 / operand2;
        break;
    case '%': //family
        ans = (int)operand1 % (int)operand2;
        break;
    case '^': //family
        ans = pow(operand1,operand2);
        break;
    default:
        cout << "Error! Operator undefined in this version of the calculator." << endl;
        abort();
    }
    //round 2 decimals
    ans = round(ans*100)/100;
    /***** OUTPUT SECTION *****/
    cout <<"Your answer is: "<< ans << endl;
    
    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
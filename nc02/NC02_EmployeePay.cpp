/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #02
* LAST MODIFIED: 1/28/23
*****************************************************/
/****************************************************************************
* Employee Pay
*****************************************************************************
* PROGRAM DESCRIPTION:
* Write a program that defines variables for:  
* 2 variables one for the annual pay and one for the paycheck amount
* 1 constant for how many times the employee is payed per year (26) 
* Print the paycheck amount and the calculated annual pay
*
*****************************************************************************
* ALGORITHM:
* PROMPT: list of Personal Information 
* Enter your paycheck amount: $ 1112.41 
* Your annual pay is $28922.66
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <ex: chrono used for time operations (C++ 11 and on)>
*****************************************************************************/

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    const int PayPeriod = 26;

    /***** DECLARATION SECTION *****/
    float paycheck = 1112.41;
    float annual = 0;

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/

    /***** PROCESSING SECTION *****/
    annual = paycheck * (double) PayPeriod;
    /***** OUTPUT SECTION *****/
    cout << "Enter your paycheck amount: $ "<< paycheck << endl;
    cout << "Enter your paycheck amount: $ "<< annual << endl;


    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
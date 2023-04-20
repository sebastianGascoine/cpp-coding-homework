/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #02
* LAST MODIFIED: 2/5/23
*****************************************************/
/****************************************************************************
* Restaurant Bill
*****************************************************************************
* PROGRAM DESCRIPTION:
* Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge. 
* The tax should be 7.75 percent (Oceanside sales tax) of the meal cost . 
* The tip should be 20 percent of the total after adding the tax. 
*
*****************************************************************************
* ALGORITHM:
* PROMPT: Example Restaurant Bill
* What was the meal charge: $88.67
*
*Tax (7.75%): $ 6.87
*Subtotal: $95.54
*Tip (20%): $19.10
*Total: $114.64
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

    /***** DECLARATION SECTION *****/
    float mealcharge = 88.67;
    float tax =0;
    float subtotal = 0;
    float tip = 0;
    float total = 0;

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/

    /***** PROCESSING SECTION *****/
    tax = 0.0775 * mealcharge;
    subtotal = tax +  mealcharge;
    tip = 0.2 * subtotal;
    total = subtotal + tip;
    /***** OUTPUT SECTION *****/
    cout << "What was the meal charge: $"<< mealcharge << endl;
    cout << "Tax (7.75%): $ "<< tax << endl;
    cout << "Subtotal: $ "<< subtotal << endl;
    cout << "Tip (20%): $ "<< tip << endl;
    cout << "Total: $ "<< total << endl;


    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
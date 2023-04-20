/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #04
* LAST MODIFIED: 2/5/23
*****************************************************/
/****************************************************************************
* Distance Per Tank Of Gas
*****************************************************************************
* PROGRAM DESCRIPTION:
* Write a program that calculates and displays the distance the car can travel on one tank of gas when driven in town and when driven on the highway.  
*
*****************************************************************************
* ALGORITHM:
* PROMPT:
*Welcome to the Gasomatic fuel calculator. 
*Gas tank capacity in gallons: 12
*City mpg: 20.4
*Highway mpg: 27.1
*Price per gallon: $4.49

*Your city range is 244.8 miles and your highway range is 325.2 miles.
*A tank of gas costs $53.88 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <ex: chrono used for time operations (C++ 11 and on)>
* cmath for rounding floats for pennies
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/

    /***** DECLARATION SECTION *****/
    float gastank = 12;
    float citympg =20.4;
    float highmpg =27.1;
    float pergal = 4.49;
    float crange = 0;
    float hrange = 0;
    float gascost = 0;

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/

    /***** PROCESSING SECTION *****/
    crange = gastank * citympg;
    hrange = gastank * highmpg;
    gascost = gastank * pergal;
    
    /***** OUTPUT SECTION *****/
    cout << "Welcome to the Gasomatic fuel calculator. \n" 
    "Gas tank capacity in gallons: " << gastank << "\n" 
    "City mpg: " << citympg << "\n"
    "Highway mpg: " << highmpg << "\n"
    "Price per gallon: $" << pergal << "\n"
    "Your city range is " << crange << " miles and your highway range is " << hrange << " miles. \n" 
    "A tank of gas costs $" << gascost << endl;

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
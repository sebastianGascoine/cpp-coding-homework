/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #06
* LAST MODIFIED: 2/12/23
*****************************************************/
/****************************************************************************
* PizzaPi
*****************************************************************************
* PROGRAM DESCRIPTION:
* Write a program to calculate the number of slices a pizza of any size can be divided into.
*
*****************************************************************************
* ALGORITHM:
* PROMPT: 
What is the diameter of the pizza inches? 10
How many people are coming to the party? 4
Each pizza has 5.6 slices and you will need 2 pizzas for your party. 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <ex: chrono used for time operations (C++ 11 and on)>
* math.h for round()
* cmath for pi
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    const float slicearea = 14.125;
    const float averageslices = 2.5;

    /***** DECLARATION SECTION *****/

    float diameter, numberpeople, numslices, pizzaArea, radius, numpizzas;   

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/
    cout << "What is the diameter of the pizza inches? ";
    cin >> diameter;
    cout << "How many people are coming to the party? ";
    cin >> numberpeople;

    /***** PROCESSING SECTION *****/
    radius = diameter/2;
    pizzaArea = M_PI*(pow(radius,2.0));
    numslices = round((pizzaArea/slicearea)*10)/10; 

    numpizzas = round((numberpeople*averageslices)/numslices);

    /***** OUTPUT SECTION *****/
    cout << "Each pizza has "<< numslices << " slices and you will need "<< numpizzas <<" pizzas for your party. "<< endl;


    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
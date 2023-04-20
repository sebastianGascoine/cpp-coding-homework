/****************************************************s
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #04
* LAST MODIFIED: 2/5/23
*****************************************************/
/****************************************************************************
* Basal Metabolic Rate
*****************************************************************************
* PROGRAM DESCRIPTION:
* Write a C++ program that estimates the number of calories your body expends at rest (without exercise)
*
*****************************************************************************
* ALGORITHM:
* PROMPT:
*Welcome to the Basal Metabolic Rate calculator.

*Your weight in pounds: 200
*Your height in inches: 72
*Your age: 35
*
*If you are a woman then to maintain your weight you will need 1698.9 calories.
*If you are a man then to maintain your weight you will need 1988.4 calories.
*You should be able to consume about 8.0 chocolate bars per day. 
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
    float weight = 200;
    float height =72;
    float age =35;
    float BMRwoman = 0;
    float BMRman = 0;
    float choclatebar = 230;
    float chocamt = 0;

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/

    /***** PROCESSING SECTION *****/
    BMRwoman = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
    BMRman = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
    chocamt = (BMRman/2 + BMRwoman/2)/(choclatebar);
    /***** OUTPUT SECTION *****/
    cout << "Welcome to the Basal Metabolic Rate calculator. \n\n" 
    "Your weight in pounds: " << weight << "\n" 
    "Your height in inches: " << height << "\n"
    "Your age: " << age << "\n\n"
    "If you are a woman then to maintain your weight you will need " << BMRwoman << " calories \n"
    "If you are a man then to maintain your weight you will need " << BMRman << " calories \n"
    "You should be able to consume about " << chocamt<< " chocolate bars per day. " << endl;

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
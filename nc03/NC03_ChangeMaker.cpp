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
* Write a C++ console application that determines the dollars and change to be dispensed from the register at a grocery store
* Your program should output how many $10, $5 and $1 bills -AND- quarters, dimes, nickels and pennies should be given for an amount between 1 to 99 cents.
*
*****************************************************************************
* ALGORITHM:
* PROMPT: Example Restaurant Bill
* What is your change amount? $14.06
*Change:
*$10 - 1
*$5 - 0
*$1 - 4
*$0.25 - 0
*$0.10 - 0
*$0.05 - 1
*$0.01 - 1
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
    float change = 5.35;
    float tens =0;
    float fives = 0;
    float ones = 0;
    float quarters = 0;
    float dimes = 0;
    float nickels = 0;
    float pennies = 0;

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/

    /***** PROCESSING SECTION *****/
    float temp = change;
    //tens max 1
    if((temp - 10) >= 0){
        temp = temp -10;
        tens++;
    }
    //fives max 1
    if((temp - 5) >= 0){
        temp = temp -5;
        fives++;
    }
    //gets rid of extra ones max 4
    ones += (int)temp;
    temp = temp - ones;
    //gets rid of multiple quarters max 3
    while((temp - .25) >= 0){
        temp = temp -0.25;
        quarters++;
    }
    
    //gets rid of extra dimes max 2
    if((temp - .1) >= 0){
        temp = temp -0.1;
        if((temp - .1) >= 0){
            temp = temp -0.1;
        }
        dimes++;
    }
    if((temp - .05) >= 0){
        temp = temp -0.05;
        
        nickels++;
    }
    //gets rid of extra pennies max 4
    pennies += round(temp*100);
    temp = temp - (pennies/100);


    /***** OUTPUT SECTION *****/
    cout << "What is your change amount? $"<< change << endl;
    cout << "$10 - "<< tens << endl;
    cout << "$5 - "<< fives << endl;
    cout << "$1 - "<< ones << endl;
    cout << "$0.25 - "<< quarters << endl;
    cout << "$0.10 - "<< dimes << endl;
    cout << "$0.05 - "<< nickels << endl;    
    cout << "$0.01 - "<< pennies << endl;

    

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
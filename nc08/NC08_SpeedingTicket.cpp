/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #08
* LAST MODIFIED: 2/19/23
*****************************************************/
/****************************************************************************
* Speeding Ticket 
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that accepts a speed limit and a clocked speed and either prints a message 
*indicating the speed was legal or prints the amount of the fine, if the speed is illegal. 
*****************************************************************************
* ALGORITHM:
* PROMPT: 
This Progran will accept a clocked speed and a speed linit and will output a fine if the speed limit was exceeded.
Please enter the clocked speed of the vehicle: 
Please Enter a speed limit:
Your fine is 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* algorithm, string for converting gender to all lowercase
* math.h for round
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>


using namespace std;



int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/
    int speed, limit, fine;

    /***** INITIALIZATION SECTION *****/
    
    /***** INTRO SECTION *****/
    cout << "This Progran will accept a clocked speed and a speed linit and will output a fine if the speed limit was exceeded." << endl;
    /***** INPUT SECTION *****/
    cout << "Please enter the clocked speed of the vehicle: "<< endl;
    cin >> speed;
    cout << "Please Enter a speed limit:"<< endl;
    cin >> limit;

    /***** PROCESSING SECTION *****/
    if(limit >= speed){
        fine = 0;
    }
    else{    
        fine = ((speed-limit)*5);
        if(speed >= 90){
            fine += 200;
        }
        fine += 50;
    }
    /***** OUTPUT SECTION *****/
    cout <<"Your fine is $ "<< fine << endl;

    

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
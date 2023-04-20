/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #07
* LAST MODIFIED: 2/19/23
*****************************************************/
/****************************************************************************
* Roman Numeral Converter
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that asks the user to enter a number within the range of 1 through 10. 
*Use a decision statement to display the Roman numeral version of that number.  *
*****************************************************************************
* ALGORITHM:
* PROMPT: 
    #1) Error

    Please enter a number between 1 and 10: 85
    Invalid input
    OR
    #2) Success

    Please enter a number between 1 and 10: 6
    Convesion: VI
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <ex: chrono used for time operations (C++ 11 and on)>
vector: for array 
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <vector>


using namespace std;



int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/
    vector <string> roman = {"I","II","III","VI","V","VI","VII","VIII","IV","X"};
    int input;
    string out = "";

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/
    cout << "Please enter a number between 1 and 10:"<< endl;
    cin >> input;
    /***** PROCESSING SECTION *****/
    input--;
    if(input < roman.size()){
        out = roman[input];
    }
    else{
        out = "Invalid Input";
    }


    /***** OUTPUT SECTION *****/
    cout <<"Conversion: "<< out << endl;

    

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
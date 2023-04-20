/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #03
* LAST MODIFIED: 2/5/23
*****************************************************/
/****************************************************************************
* CyborgDataTypes
*****************************************************************************
* PROGRAM DESCRIPTION:
* Write a program that tells you how many bytes the following data types use:  
* bool , char , short , int , long , 
* long long ,  float , double and long double
*
*****************************************************************************
* ALGORITHM:
* PROMPT: list of data types and byte size
* bool:           ? byte(s) 
* char:           ? byte(s) 
* short:          ? byte(s) 
* int:            ? byte(s) 
* long:           ? byte(s) 
* long long:      ? byte(s) 
* float:          ? byte(s) 
* double:         ? byte(s) 
* long double:    ? byte(s) 
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

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/

    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    cout << "bool:              "<<sizeof(bool) <<" byte(s)"<< endl;
    cout << "char:              "<<sizeof(char) <<" byte(s)"<< endl;
    cout << "short:             "<<sizeof(short) <<" byte(s)"<< endl;
    cout << "int:               "<<sizeof(int) <<" byte(s)"<< endl;
    cout << "long:              "<<sizeof(long) <<" byte(s)"<< endl;
    cout << "long long:         "<<sizeof(long long) <<" byte(s)"<< endl;
    cout << "float:             "<<sizeof(float) <<" byte(s)"<< endl;
    cout << "double:            "<<sizeof(double) <<" byte(s)"<< endl;
    cout << "long double        "<<sizeof(long double) <<" byte(s)"<< endl;


    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
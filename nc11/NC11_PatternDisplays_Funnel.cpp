/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #11
* LAST MODIFIED: 3/5/23
*****************************************************/
/****************************************************************************
* Average Rainfall
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that produces a funnel using nested for loops 
*****************************************************************************
* ALGORITHM:
* PROMPT: 
!!!!!!!!!!!!!!!!!!!!!!
\\!!!!!!!!!!!!!!!!!!//
\\\\!!!!!!!!!!!!!!////
\\\\\\!!!!!!!!!!//////
\\\\\\\\!!!!!!////////
\\\\\\\\\\!!//////////
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*
*****************************************************************************/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/
    const int LINES = 6;
    const int Max_CHAR = 11;
    string exc = "!!";
    string slash1 = "\\\\";
    string slash2 = "//";

    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    for(int j = 0; j<LINES;j++){
        for(int i = 0; i<j;i++)
        {
            cout << slash1;
        }
        for(int i = 0; i<(Max_CHAR-j*2);i++)
        {
            cout << exc;
        }
        for(int i = 0; i<j;i++)
        {
            cout << slash2;
        }
        cout << endl;
    }
   
    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
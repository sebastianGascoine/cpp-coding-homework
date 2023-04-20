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
    int LINES;  
    int PANES;
    string section1 = "+===";
    string section2 = "|   ";

    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    /***** INPUT SECTION *****/
    cout << "Enter amount of rows" << endl;
    cin >> LINES;
    LINES = LINES*4 + 1;
    cout << "Enter amount of columns" << endl;
    cin >> PANES;
    /***** PROCESSING SECTION *****/
    for(int j = 0; j<LINES;j++){ 
        for(int i = 0; i<PANES;i++)
        {
            if(j % 4 == 0){
                cout << section1;
            }
            else{
                cout << section2;
            }
        }
        if(j % 4 == 0){
                cout << '+';
        }
        else{
            cout << '|';
        }
        cout << endl;
    }
   
    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
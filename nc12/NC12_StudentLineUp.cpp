/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #11
* LAST MODIFIED: 3/5/23
*****************************************************/
/****************************************************************************
* Student Lineup
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a that opens the file "LineUp.txt" (attached to this assignment) then loops to read each of the names.  
Once read report which student would be at the front of the line and which one would be at the end of the line in alphabetical order. 
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Lined Up:
Aaron
Alejandra
...
Ty
Yvonne 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* fstream : open and read files
* vector : convert list of students to a vector array
* algorithm : sort vector list of students
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    /***** CONSTANT SECTION *****/
    ifstream inFile;
    vector<string> lineup;

    /***** DECLARATION SECTION *****/
    
    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/
    cout << "Lined Up list of Students:\n" << endl;
    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    inFile.open("C:/Users/sebbi/Documents/code/C++Code/nc12/lineup.txt");
    string words;
    while(inFile >> words) {
        lineup.push_back(words);
    }
    sort(lineup.begin(),lineup.end());
    
    /***** OUTPUT SECTION *****/
    for(auto i: lineup)
      cout << i << ' '<<endl;
    
    inFile.close();
    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
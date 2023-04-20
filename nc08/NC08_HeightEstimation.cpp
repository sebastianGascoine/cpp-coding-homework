/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #08
* LAST MODIFIED: 2/19/23
*****************************************************/
/****************************************************************************
* Height Estimation 
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that takes as input the gender of the child, the height of the mother in inches 
*and the height of the father in inches. Output the estimated adult height of the child in inches.  
*Convert this to feet, and inches
*****************************************************************************
* ALGORITHM:
* PROMPT: 
This Progran will calculate the height of a child based on their biological sex and the height of both their mother and father
Please Enter the biological sex of the child: 
Please Enter the height of the child's mother in inches:
Please enter the height of the child's father in inches:
The calculated height of the child is 5 and 8 inches
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
    string gender;
    int momheight, dadheight;
    float height;
    int heightfeet;


    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/
    cout << "Please Enter the biological sex of the child:"<< endl;
    cin >> gender;
    cout << "Please Enter the height of the child's mother in inches:"<< endl;
    cin >> momheight;
    cout << "Please enter the height of the child's father in inches:"<< endl;
    cin >> dadheight;

    /***** PROCESSING SECTION *****/
    transform(gender.begin(),gender.end(),gender.begin(), ::tolower);
    cout <<gender<<endl;
    
    if(gender == "male"){        
        height = (13.0/12.0);
        height *= momheight;
        height +=  dadheight;
        height /= (float) 2;
    }
    else{
        height = ((12.0/13.0)* dadheight);
        height +=(float) momheight;
        height /= 2.0;
    }
    heightfeet = round((height/12)*10)/10;
    height = (int) height%12;
    /***** OUTPUT SECTION *****/
    cout <<"The calculated height of the child is "<< heightfeet <<" and "<< height<< " inches" << endl;

    

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #13
* LAST MODIFIED: 3/12/23
*****************************************************/
/****************************************************************************
* InputValidation
*****************************************************************************
* PROGRAM DESCRIPTION:
*Create a set of functions that will handle input validation that should be able to handle the 
* following user transactions with both whole number (int) and decimal values (double).
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Enter a number greater than 5.
Enter a number less than 10.
Enter a number between 1 and 4. 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*****************************************************************************/

#include <cstdlib>
#include <iostream>

using namespace std;
int greaterthan(int val); 
int lessthan(int val);
int between(int lowval,int highval);

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/

    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    cout << "Welcome to the input validation.\n" << endl;

    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    //greaterthan(5);
    //lessthan(10);
    between(1,4);

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
int greaterthan(int val){
    int retint = val-1;
    while(retint <= val)
    {
        cout << "Enter a number greater than " << val << "." << endl;
        cin >> retint;
        if(retint <= val){
            cout << "Invalid entry, you must enter a value greater than " << val << "."<< endl;
        }
    }
    return retint;
}
int lessthan(int val){
    int retint = val+1;
    while(retint >= val)
    {
        cout << "Enter a number less than " << val << "." << endl;
        cin >> retint;
        if(retint >= val){
            cout << "Invalid entry, you must enter a value less than " << val << "."<< endl;
        }
    }
    return retint;
}
int between(int lowval,int highval){
    int retint = lowval-1;
    string menu = "********************************************************************\n";
    menu += "** **\n";
    menu += "** THE SUPER DUPER MENU **\n";
    menu += "** **\n";
    menu += "********************************************************************\n";
    menu += "** Please select from the following choices: **\n";
    menu += "** 1) Have some fun(ctions) **\n";
    menu += "** 2) Write some code **\n";
    menu += "** 3) Study for the midterm **\n";
    menu += "** 4) Exit **\n";
    menu += "********************************************************************";

    while(retint <= lowval || retint >= highval)
    {
        cout << "Enter a number between " << lowval << " and " << highval << "."<< endl;
        //cout << menu << endl;
        cin >> retint;
        if(retint <= lowval || retint >= highval){
            cout << "Invalid entry, you must enter a value between " << lowval << " and " << highval << "." << endl;
        }
    }
    return retint;
}

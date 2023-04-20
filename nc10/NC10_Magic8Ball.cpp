/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #10
* LAST MODIFIED: 2/26/23
*****************************************************/
/****************************************************************************
* Magic 8 Ball
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that simulates the Magic 8 Ball game. 
*****************************************************************************
* ALGORITHM:
* PROMPT: 
What question would you like to ask the Magic 8 ball?

Will it rain today?   [user input]
The answer is: Reply hazy, try again
Would you like to play again? no

Thank you for playing with the Magic 8 ball. 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* ctime for random
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <ctime>


using namespace std;



int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/
    bool end = true;
    int answer;
    string again = "";
    string userinput = "";
    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/
    

    /***** INPUT SECTION *****/
    
    /***** PROCESSING SECTION *****/
    
    //code snippet
    srand(time(NULL));
    while(end){
        if(again == "no" || again == "n"){
            end = false;
            cout << "Thank you for playing with the Magic 8 ball." << endl;
            abort();
        }        
            cout << "What question would you like to ask the Magic 8 ball?" << endl;
            getline(cin, userinput);
            int answer = rand() % 8 + 1;
        /***** OUTPUT SECTION *****/
            switch(answer) {
            case 1: 
                cout << "It is certain" << endl;
                break;
            case 2: 
                cout << "It is decidedly so" << endl;
                break;
            case 3: 
                cout << "Most likely" << endl;
                break;
            case 4: 
                cout << "Signs point to yes" << endl;
                break;
            case 5: 
                cout << "Reply hazy, try again" << endl;
                break;
            case 6: 
                cout << "Ask again later" << endl;
                break;
            case 7: 
                cout << "Don't count on it" << endl;
                break;
            default:
                cout << "My sources say no" << endl;
            }
            cout <<"Would you like to play again?"<< endl;
            getline(cin, again); 
    }
    
    
    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
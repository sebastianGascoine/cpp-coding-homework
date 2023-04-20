/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #10
* LAST MODIFIED: 2/26/23
*****************************************************/
/****************************************************************************
* Guessing Game
*****************************************************************************
* PROGRAM DESCRIPTION:
*Have the computer generate a random number between 1 and 100 and then have the user guess the number.
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Welcome to the Guess Game where you can win millions*!!
(*grains of sand)

Let's see how many guesses you need to guess my number between 1 - 100:
Guess: 50
Your guess was too low.
Guess: 75
Your guess was too high.
Guess 62 
Your guess was too low.
Guess 68
Great guess!  You found the correct answer in 4 guesses.  
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
    int answer,guesses = 0,userinput;
    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/
    cout << "Welcome to the Guess Game where you can win millions*!! \n(*grains of sand)" << endl;
    cout << "\nLet's see how many guesses you need to guess my number between 1 - 100:" << endl;

    /***** INPUT SECTION *****/
    
    /***** PROCESSING SECTION *****/
    
    //code snippet
    srand(time(NULL));
    answer = rand() % 100 + 1;
    while(userinput != answer){
        guesses++;
        cout << "Guess:" << endl;
        cin >> userinput;

    /***** OUTPUT SECTION *****/
        if(answer > userinput){
            cout << "Your guess was too low." << endl; 
        }
        else if(answer < userinput){
            cout << "Your guess was too high." << endl;
        }
        else{
            cout << "Great guess! You found the correct answer in " << guesses << " guesses" << endl;
        }
                
           
    }
    
    
    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #16
* LAST MODIFIED: 4/2/23
*****************************************************/
/****************************************************************************
* Diving
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a computer program that inputs a degree of difficulty and seven judges score's and outputs the over score for that dive.
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Welcome to the judge diver program. 

Enter the difficulty of the dive (1.2-3.8): (difficulty)

Enter judge 1 score: (Input => array[0])
Enter judge 2 score: (Input => array[1])
...Enter judge 7 score: (Input => array[7])

The total score for the dive is (totalscore)
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
void diverprogram();
double between(double lowval,double highval);


int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    cout << setprecision(2) << fixed;

    /***** DECLARATION SECTION *****/

    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    cout << "Welcome to the judge diver program.\n" << endl;

    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    diverprogram();


    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
void diverprogram(){
    int retint = -1;
    double lowest = 11;
    double highest = -1;
    double judgearr[7] = {-1,-1,-1,-1,-1,-1,-1};
    double total = 0;
    //difficulty
    cout << "Enter the difficulty of the dive (1.2-3.8): ";
    double difficulty = between(1.2,3.8);

    cout << "\n"; //spacing
    for(int i = 0; i<7;i++){ //input to array
        cout << "Enter judge "<< (i + 1) << " score: ";
        judgearr[i] = between(0,10);
    }
    
    for(const double &index : judgearr){
        if(lowest > index){ //if lowest value saved is greater than current index, lowest becomes index
            lowest = index;
        }
        if(highest < index){ //if highest value saved is lower than current index, highest becomes index
            highest = index;
        }
        total += index; 
    }
    total -= (lowest + highest); //removes highest and lowest scores
    total *= difficulty; 
    total *= 0.6;
    cout << "The total score for the dive is "<< total << "." << endl;
}
double between(double lowval,double highval){
    double retint = lowval-1;

    while(retint <= lowval || retint >= highval)
    {
        cin >> retint;
        if(retint <= lowval || retint >= highval){
            cout << "Invalid entry, you must enter a value between " << lowval << " and " << highval << "." << endl;
        }
    }
    return retint;
}
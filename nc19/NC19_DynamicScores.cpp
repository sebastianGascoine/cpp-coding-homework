/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #19
* LAST MODIFIED: 4/9/23
*****************************************************/
/****************************************************************************
* Dynamic Scores
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that dynamically allocates an array large enough to hold a user-defined
number of test scores sort them, give the average, and mode.
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Enter the total amount of scores: n

Enter score 1: 
Enter score 2: 
...
Enter score n: 

Sorted Score 1: 
Sorted Score 2: 
...
Sorted Score n: 

Average Score: 

Mode: 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
void diverprogram();
double greaterthan(double val); //input validation
void sorter(double scores[], int n);
double average(double scores[],int totalscores);
double mode(double scores[],int totalscores);

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    cout << setprecision(2) << fixed;

    /***** DECLARATION SECTION *****/

    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    cout << "Welcome to the Dynamic Scores program.\n" << endl;

    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    diverprogram();


    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
void diverprogram(){
    
    //difficulty
    cout << "Enter the total amount of scores: ";
    int totalscores = greaterthan(0);

    double scores[totalscores];


    cout << "\n"; //spacing
    for(int i = 0; i<totalscores;i++){ //input to array
        cout << "Enter score "<< (i + 1) << ": ";
        *(scores + i) = greaterthan(0);
    }

    int N = sizeof(scores) / sizeof(scores[0]);
    sorter(scores, N);

    cout << "\n";
    for(int i = 0; i<totalscores;i++){ //output sorted array
        cout << "Sorted Score "<< (i + 1) << ": " << *(scores + i) << endl;
    }

    cout << "Average Score: "<< average(scores,totalscores) << endl;
    cout << "Mode : "<< mode(scores,totalscores) << endl;

}

double greaterthan(double val){
    double retint = val-1; 
    while(retint <= val)
    {
        cin >> retint;
        if(retint <= val){
            cout << "Invalid entry, you must enter a value greater than " << val << "."<< endl;
        }
    }
    return retint;
}

void sorter(double scores[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++){
 
        for (j = 0; j < n - i - 1; j++){
            if (scores[j] > scores[j + 1]){
                swap(scores[j], scores[j + 1]);
            }
        }
    }

}   
double average(double scores[], int totalscores){
    int j;
    double total = 0;
    for (j = 0; j <totalscores; j++){
        total += scores[j];
    }
    total = total / totalscores;

    return total;
}  
double mode(double scores[], int totalscores){
    double number = scores[0];
    double mode = number;
    int count = 0;
    int modecount = 0;
    for(int i = 0; i<totalscores;i++){
        if(scores[i] == number){
            count++;
        }
        else{
            if(count > modecount){ //
                modecount = count;
                mode = number;
            }
            count = 0;
            number = scores[i];
        }
    }
    if(modecount <= 1){
        mode = -1;
    }
    return mode;
}
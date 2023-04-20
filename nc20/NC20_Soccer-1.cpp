/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #20
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
Enter player name:
(USER INPUT)
Enter player number:
(USER INPUT) //Requires Validation
Enter player goals:
(USER INPUT) //Requires Validation
LA Galaxy Starting Roster

Name              Number   Goals
Kevin Cabral      9        0
Javier Hernandez  14       4
...
Derrick Williams  3        0
 
Total Goals: 6

Leading Scorer Javier Hernandez - 4.


*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*****************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;


int greaterequalthan(int val); //input validation for player# & goals

struct SoccerPlayer {
    string name;
    int number;
    int goals;
};

const int SOCCER_PLAYERS = 11;

int main() {
    
    SoccerPlayer players[SOCCER_PLAYERS];
    int mostgoals = -1, mostindex = 0, totalgoals = 0;

    for (int i = 0; i < SOCCER_PLAYERS; i++) {
        cout << "Enter player name: " << endl; 
        //doing this will remove whitespace from the line,
        //this happens on the second iteration of the loop
        getline(cin >> ws, players[i].name);

        cout << "Enter player number: " << endl;
        players[i].number = greaterequalthan(0);
        
        cout << "Enter player goals: " << endl;
        int goals = greaterequalthan(0);
        players[i].goals = goals;
        if(mostgoals < goals){
           mostgoals = goals;
           mostindex = i;
        }
        totalgoals += goals;
    }
    cout <<"LA Galaxy Starting Roster\n" <<endl;
    cout << "Name\t\t\tNumber\tGoals" << endl;
    for (int i = 0; i < SOCCER_PLAYERS; i++) {
        //star player 
        if(i == mostindex)
            cout << players[i].name << "*" << setw(26-players[i].name.length()-1) << players[i].number
            << "\t" << players[i].goals << "*" << endl;
        else{
            string temp = to_string(players[i].number);
            cout << players[i].name << setw(24-players[i].name.length() + temp.length() ) << right << players[i].number
            << "\t" << players[i].goals << endl;
        }
    }
    cout << "\nTotal Goals: "<< totalgoals << endl;
    cout << "\nLeading Scorer "<< players[mostindex].name << " - "<< players[mostindex].goals << "." << endl;
    return EXIT_SUCCESS;
}

int greaterequalthan(int val){
    int retint = val-1; 
    while(retint < val)
    {
        cin >> retint;
        if(retint < val){
            cout << "Invalid entry, you must enter a value greater than " << val << "."<< endl;
        }
    }
    return retint;
}

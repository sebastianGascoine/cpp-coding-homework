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
*Write a program that calculates the average rainfall over a period of years. 
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Welcome to the average rainfall calculator.  

How many years would you like to calculate your average rainfall for? 1
Enter rainfall in inches for <each month>? 

Your average rainfall is 2.46 inches for 12 months for a total of 29.5 inches of rain.
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* vector to store rainfall
*math.h for round
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>



using namespace std;



int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/
    vector<double> rainfall;
    double totalrainfall;
    double avgrainfall;
    int years = -1;
    int totalmonths;

    string month[] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/
    cout << "Welcome to the average rainfall calculator.  " << endl;


    /***** INPUT SECTION *****/
    while(years < 0)
    {
        cout << "How many years would you like to calculate your average rainfall for? "<< endl;
        cin >> years;
        if(years <= 0){
            cout << "Invalid entry, you must enter a value greater than 0."<< endl;
        }
    }
    totalmonths = years*12;
    /***** PROCESSING SECTION *****/
    int yeartemp = 0;
    while(yeartemp < years){
        for(int i = 0; i<12;i++)
        {
            double temp;
            cout << "Enter rainfall in inches for "<<month[i]<< "? " << endl;
            cin >> temp;

            if(temp < 0){
                cout << "Invalid entry, you must enter a value greater than or equal to 0."<< endl;
                i--;
            }
            else{
                rainfall.push_back(temp);

            }
        }
        yeartemp++;
    }
    for (double x : rainfall)
    {
        totalrainfall += x;
    }  
    avgrainfall = totalrainfall/(years*12);
    avgrainfall = round(avgrainfall*100)/100;
    cout << "Your average rainfall is " << avgrainfall << " inches for " << (years*12) << " months for a total of " << totalrainfall << " inches of rain" << endl;
    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
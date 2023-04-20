/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #16
* LAST MODIFIED: 4/2/23
*****************************************************/
/****************************************************************************
* i Sleepy
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that will monitor how much sleep you obtained each night last week and 
*based on average number of hours slept per night, determine the person's overall sleep health category
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Welcome to the sleep recommendation program for (AgeGroup)

Please enter your Age Group:
1 - Newborn
2 - Infant
...10 - Quit
Enter your choice:

Enter your last 7 days of sleep please.

Enter your sleep hours on day 1: 
Enter your sleep hours on day 2:
...Enter your sleep hours on day 7: 
You slept a total of (totalHrs) hours, for a total average of (AvgHrs) hours.
You had (recsleep) days of recommended sleep, (appsleep) days of may be appropriate sleep, and (notsleep) days of not recommended sleep. 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int between(int lowval,int highval);
int sleepprogram();


int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    cout << setprecision(1) << fixed;

    /***** DECLARATION SECTION *****/

    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    cout << "Welcome to the sleep recommendation program\n" << endl;

    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    sleepprogram();


    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
int sleepprogram(){
    int retint = -1;
    int agegroup = -1; 
    double totalsleep = 0;
    double averagesleep = 0;

    int lowapp = 0;
    int highapp = 0;
    int lowrec = 0;
    int highrec = 0;

    int recsleep = 0;
    int appsleep = 0;
    int notsleep = 0;

    string dashboardMenu = "Please enter your Age Group:\n";
    dashboardMenu += "1 - Newborn\n";
    dashboardMenu += "2 - Infant\n";
    dashboardMenu += "3 - Toddler\n";
    dashboardMenu += "4 - Preschool\n";
    dashboardMenu += "5 - School Age\n";
    dashboardMenu += "6 - Teen\n";
    dashboardMenu += "7 - Young Adult\n";
    dashboardMenu += "8 - Adult\n";
    dashboardMenu += "9 - Older Adult\n";
    dashboardMenu += "10 - Quit\nEnter your choice:";

    double sleeparr[7] = {-1,-1,-1,-1,-1,-1,-1};

    while((retint < 1 || retint >= 9) && retint != 10)
    {
        cout << dashboardMenu << endl;
        cin >> retint;

        if(retint == 1){ //newborn
            lowapp = 11;
            highapp = 19;
            lowrec = 14;
            highrec = 17;
            agegroup = retint;
        }
        else if(retint == 2){ //infant
            lowapp = 10;
            highapp = 18;
            lowrec = 12;
            highrec = 15;
            agegroup = retint;
        }
        else if(retint == 3){ //toddler
            lowapp = 9;
            highapp = 16;
            lowrec = 11;
            highrec = 14;
            agegroup = retint;
        }
        else if(retint == 4){ //preschool
            lowapp = 8;
            highapp = 14;
            lowrec = 10;
            highrec = 13;
            agegroup = retint;
        }
        else if(retint == 5){ //school-age
            lowapp = 7;
            highapp = 13;
            lowrec = 9;
            highrec = 11;
            agegroup = retint;
        }
        else if(retint == 6){ //teen
            lowapp = 7;
            highapp = 11;
            lowrec = 8;
            highrec = 10;
            agegroup = retint;
        }
        else if(retint == 7){ //young adult
            lowapp = 6;
            highapp = 11;
            lowrec = 7;
            highrec = 9;
            agegroup = retint;
        }
        else if(retint == 8){ //adult
            lowapp = 6;
            highapp = 10;
            lowrec = 7;
            highrec = 9;
            agegroup = retint;
        }
        else if(retint == 9){
            lowapp = 5;
            highapp = 9;
            lowrec = 7;
            highrec = 8;
            agegroup = retint;
        }
        else if(retint == 10){
            cout << "Thank you for using the sleep recommendation program. " << endl;
        }
        else{
                cout << "Error" << endl;
        }
    }
    cout << "Enter your last 7 days of sleep please.\n" << endl;
    for(int i = 0; i<7;i++){ //input to array
        cout << "Enter your sleep hours on day "<< (i + 1) << ": " << endl;
        cin >> sleeparr[i];
    }
    for(const double &index : sleeparr){
        totalsleep += index;

        if(index >= lowapp && index <=  highapp){ 
            if(index >= lowrec && index <=  highrec)
                recsleep++; //reccomended sleep
            else
                appsleep++; //appropriate sleep
        }
        else
            notsleep++; //not reccomended sleep

    }
    averagesleep = totalsleep/7.0;
    cout << "You slept a total of "<< totalsleep << " hours, for a total average of " << averagesleep << " hours." << endl;
    cout << "You had "<< recsleep <<" days of recommended sleep, "<< appsleep <<" days of may be appropriate sleep, and "<< notsleep <<" days of not recommended sleep." << endl; 

    return retint;
}
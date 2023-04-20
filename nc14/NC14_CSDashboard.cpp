/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #14
* LAST MODIFIED: 3/12/23
*****************************************************/
/****************************************************************************
* CSDashboard
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program to replicate the Data Dashboard from MCC
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
#include <iomanip>

using namespace std;
int between(int lowval,int highval);
int dashboardMenu();
int ethnicityMenu();
int genderMenu();
int ageInputMenu();
double successByAgeGroup(int age);
double successByEthnicity(int eth);
double successByGender(int gen);
int ETHNICITY = -1,GENDER = -1,AGE = -1;


int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    cout << setprecision(1) << fixed;

    /***** DECLARATION SECTION *****/

    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    cout << "Welcome to the MiraCosta Data Dashboard and the CS Success Dashboard.\n" << endl;

    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    dashboardMenu();

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
int dashboardMenu(){
    int retint = -1;

    string dashboardMenu = "Please enter your following choice:\n";
    dashboardMenu += "1 - Ethnicity Choice\n";
    dashboardMenu += "2 - Gender Choice\n";
    dashboardMenu += "3 - Age Input\n";
    dashboardMenu += "4 - Success By Age Group\n";
    dashboardMenu += "5 - Success By Ethnicity\n";
    dashboardMenu += "6 - Success By Gender\n";
    dashboardMenu += "7 - Quit\nEnter your choice:";
    double successAgeGroup[4] = {-100.0,58.4,70.1,60.6};

    while(retint != 7)
    {
        cout << dashboardMenu << endl;
        cin >> retint;

            if(retint == 1){
                ethnicityMenu();
                retint == -1;
            }
            else if(retint == 2){
                genderMenu();
                retint == -1;
            }
            else if(retint == 3){
                ageInputMenu();
            }
            else if(retint == 4){
                if(AGE != -1){
                    cout << "The student success for student's aged 21 - 24 is " << successByAgeGroup(AGE) << "." << endl;
                }
                else{
                    cout << "Age Not Entered" << endl;
                    retint = -1;
                }
            }
            else if(retint == 5){
                if(ETHNICITY != -1){
                    cout << "The student success for ethnicity is " << successByEthnicity(ETHNICITY) << "." << endl;
                }
                else{
                    cout << "Ethnicity Not Entered" << endl;
                    retint = -1;
                }
            }
            else if(retint == 6){
                if(GENDER != -1){
                    cout << "The student success for gender is " << successByGender(GENDER) << "." << endl;
                }
                else{
                    cout << "Gender Not Entered" << endl;
                    retint = -1; 
                }
            }
            else if(retint == 7){
                cout << "Thank you for using the Data Dashboard. " << endl;
            }
            else{
                cout << "Error" << endl;
            }
    }
    return retint;
}
int ethnicityMenu(){
    int retint = -1; 
    string dashboardMenu = "Ethnicity:\n";
    dashboardMenu += "1 - American Indian/Alaska Native\n";
    dashboardMenu += "2 - Asian\n";
    dashboardMenu += "3 - Black/African American\n";
    dashboardMenu += "4 - Hispanic\n";
    dashboardMenu += "5 - Pacific Islander\n";
    dashboardMenu += "6 - Two or More Races\n";
    dashboardMenu += "7 - White\n";
    dashboardMenu += "8 - Unknown";



    while(retint < 1 || retint > 8)
    {
        cout << dashboardMenu << endl;
        cin >> retint;
        if(retint >= 1 || retint <= 8){
            ETHNICITY = retint;
        }
    }
    return retint;
}
int genderMenu(){
    int retint = -1; 
    string dashboardMenu = "Gender:\n";
    dashboardMenu += "1 - Male\n";
    dashboardMenu += "2 - Female\n";
    dashboardMenu += "3 - Unknown";
    while(retint < 1 || retint > 3)
    {
        cout << dashboardMenu << endl;
        cin >> retint;
        if(retint > 1 || retint < 3){
            GENDER = retint;
        }
    }
    return retint;
}
int ageInputMenu(){
    int retint = -1; 
    string dashboardMenu = "Ethnicity:\n";
    dashboardMenu += "1 - 17 and under\n";
    dashboardMenu += "2 - 18 - 20\n";
    dashboardMenu += "3 - 21 - 24\n";
    dashboardMenu += "4 - 25 - 29\n";
    dashboardMenu += "5 - 30 - 34\n";
    dashboardMenu += "6 - 35 - 39\n";
    dashboardMenu += "7 - 40 - 44\n";
    dashboardMenu += "8 - 45 - 54\n";
    dashboardMenu += "9 - 55 - 64\n";
    dashboardMenu += "10 - 65 and Older";



    while(retint < 1 || retint > 7)
    {
        cout << dashboardMenu << endl;
        cin >> retint;
        if(retint >= 1 || retint <= 8){
            ETHNICITY = retint;
        }
    }
    return retint;
}
double successByAgeGroup(int age){
    /*
    17 and under	71.4 %
    18 - 20	60.8 %
    21 - 24	54.6 %
    25 - 29	57.9 %
    30 - 34	62.5 %
    35 - 39	61.7 %
    40 - 44	47.1 %
    45 - 54	65.9 %
    55 - 64	60.7 %
    65 and Older	33.3 %
*/
    double successAgeGroup[10] = {71.4,60.8,54.6,57.9,62.5,61.7,47.1,65.9,60.7,33.3};
    return successAgeGroup[age--];
}
double successByEthnicity(int eth){
    /*
    American Indian/Alaska Native	66.7 %
    Asian	67.2 %
    Black/African American	39.2 %
    Hispanic	48.5 %
    Pacific Islander	20.0 %
    Two or More Races	58.7 %
    White	62.8 %
    Unknown	53.0 %
*/
    double ethgroup[8] = {66.7,67.2,39.2,48.5,20.0,58.7,62.8,53.0};
    return ethgroup[eth--];
}
double successByGender(int gen){
    /*
    Male	58.4 %
    Female	70.1 %
    Unknown	60.6 %
*/
    double gendergroup[3] = {58.4,70.1,60.6};
    return gendergroup[gen--];
}

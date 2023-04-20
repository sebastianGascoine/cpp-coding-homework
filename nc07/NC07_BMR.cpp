/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #07
* LAST MODIFIED: 2/19/23
*****************************************************/
/****************************************************************************
* Basal Metabolic Rate
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that asks the user to enter a number within the range of 1 through 10. 
*Use a decision statement to display the Roman numeral version of that number.  *
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Welcome to the Basal Metabolic Rate calculator.

Enter your gender: male
Enter your weight in pounds: 200
Enter your height in inches: 72
Enter your age: 35

Enter your activity level:
1. Sedentary (not active)
2. Somewhat active (exercise occasionally)
3. Active (exercise 3-4 times per week)
4. Highly Active (exercise every day)
Activity level? 1

To maintain your weight you will need 2386.1 calories.
You should be able to consume about 10.4 chocolate bars per day. 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <ex: chrono used for time operations (C++ 11 and on)>
algorithm, string for converting gender to all lowercase
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>


using namespace std;



int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    const float choclatebar = 230;


    /***** DECLARATION SECTION *****/
    float weight;
    float height;
    float age;
    string gender;
    float BMR;
    float activity;
    float chocamt = 0;


    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/
    cout << "Welcome to the Basal Metabolic Rate calculator.\n" << endl;
    /***** INPUT SECTION *****/
    cout << "Enter your gender:"<< endl;
    cin >> gender;
    cout << "Enter your weight:"<< endl;
    cin >> weight;
    cout << "Enter your height in inches:"<< endl;
    cin >> height;
    cout << "Enter your age:"<< endl;
    cin >> age;
    cout << "\nEnter your activity level:"
        "\n1. Sedentary (not active)"
        "\n2. Somewhat active (exercise occasionally)"
        "\n3. Active (exercise 3-4 times per week)"
        "\n4. Highly Active (exercise every day)"
        "\nActivity Level?"<< endl;
    cin >> activity;

    /***** PROCESSING SECTION *****/
    transform(gender.begin(),gender.end(),gender.begin(), ::tolower);
    cout <<gender<<endl;
    
    if(gender == "male"){
        cout<< "here1" << endl;
        BMR = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
        BMR *= (1.1 + (activity*0.1));
    }else if(gender == "female"){
        cout<< "here2" << endl;

        BMR = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
    }
    chocamt = (BMR)/(choclatebar);

    /***** OUTPUT SECTION *****/
    cout << "To maintain your weight you will need " << BMR << " calories."
            "\nYou should be able to consume about "<< chocamt <<" chocolate bars per day." << endl;
    

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
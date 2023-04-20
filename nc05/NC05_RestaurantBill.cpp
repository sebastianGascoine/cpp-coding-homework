/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #02
* LAST MODIFIED: 2/12/23
*****************************************************/
/****************************************************************************
* Restaurant Bill
*****************************************************************************
* PROGRAM DESCRIPTION:
* Write a program that takes in 3 menu items and displays the total based on the formula from NC03_RestaurantBill.
* The tax should be 7.75 percent (Oceanside sales tax) of the meal cost . 
* The tip should be 20 percent of the total after adding the tax. 
* Display the meal cost, tax amount, tip amount, and total bill on the screen
*output how many $10, $5 and $1 bills -AND- quarters, dimes, nickels and pennies should be given for an amount between 1 to 99 cents
*
*****************************************************************************
* ALGORITHM:
* PROMPT: Example Restaurant Bill
Enter item #1 $49.23
Enter item #2 $22.41
Enter item #3 $17.03

What was the meal charge: $88.67

Tax (7.75%): $ 6.87
Subtotal: $95.54
Tip (20%): $19.10
Total: $114.64

What is your amount paid? $120.00
Change is $5.36
Change:
$10 - 0
$5 - 1
$1 - 0
$0.25 - 1
$0.10 - 1
$0.05 - 0
$0.01 - 1
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <ex: chrono used for time operations (C++ 11 and on)>
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/
    //bill var
    float mealcharge1 = 0;
    float mealcharge2 = 0;
    float mealcharge3 = 0;

    float mealchargeTotal = 0;
    float tax =0;
    float subtotal = 0;
    float tip = 0;
    float total = 0;

    //change var
    float paid = 0;
    float change = 0;
    float tens =0;
    float fives = 0;
    float ones = 0;
    float quarters = 0;
    float dimes = 0;
    float nickels = 0;
    float pennies = 0;


    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION 1*****/
    cout << "Enter item #1 $"<< endl;
    cin >> mealcharge1;
    cout << "Enter item #2 $"<< endl;
    cin >> mealcharge2;
    cout << "Enter item #3 $"<< endl;
    cin >> mealcharge3;

    /***** PROCESSING SECTION 1*****/
    mealchargeTotal =  round((mealcharge1 + mealcharge2 +mealcharge3)*100)/100;
    tax = round((0.0775 * mealchargeTotal)*100)/100;
    subtotal = round((tax +  mealchargeTotal)*100)/100;
    tip = round((0.2 * subtotal)*100)/100;
    total = round((subtotal + tip)*100)/100;
    

    /***** OUTPUT SECTION 1*****/
    cout << "\nWhat was the meal charge: $"<< mealchargeTotal 
         << "\nTax (7.75%): $ "<< tax 
         << "\nSubtotal: $ "<< subtotal 
         << "\nTip (20%): $ "<< tip 
         << "\nTotal: $ "<< total << endl;


    /***** INPUT SECTION 2*****/
    cout << "What is your amount paid? "<< endl;
    cin >> paid;
    
    /***** PROCESSING SECTION *****/
    //added extra .0001
    change = paid-total+0.0001;
    float temp = change;
    //tens max 1
    if((temp - 10) >= 0){
        temp = temp -10;
        tens++;
    }
    //fives max 1
    if((temp - 5) >= 0){
        temp = temp -5;
        fives++;
    }
    //gets rid of extra ones max 4
    ones += (int)temp;
    temp = temp - ones;
    //gets rid of multiple quarters max 3
    while((temp - .25) >= 0){
        temp = temp -0.25;
        quarters++;
    }
    
    //gets rid of extra dimes max 2
    if((temp - .1) >= 0){
        temp = temp -0.1;
        if((temp - .1) >= 0){
            temp = temp -0.1;
        }
        dimes++;
    }
    if((temp - .05) >= 0){
        temp = temp -0.05;
        
        nickels++;
    }
    //gets rid of extra pennies max 4
    pennies += round(temp*100);
    temp = temp - (pennies/100);
    change =  round(change*100)/100;

    /***** OUTPUT SECTION 2*****/
    cout << "\nChange is $"<< change 
         << "\nChange:\n$10 - "<< tens 
         << "\n$5 - "<< fives 
         << "\n$1 - "<< ones 
         << "\n$0.25 - "<< quarters 
         << "\n$0.10 - "<< dimes 
         << "\n$0.05 - "<< nickels    
         << "\n$0.01 - "<< pennies << endl;

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
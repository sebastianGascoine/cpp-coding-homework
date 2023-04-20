/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #21
* LAST MODIFIED: 4/15/23
*****************************************************/
/****************************************************************************
* Budget
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that creates a Monthly Budget structure designed to hold each expense
And one to hold what the user actually spent, and give a report on over/under spending on each
category and total budget
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Enter your housing cost:
(USER INPUT) 
Enter your utilities cost:
(USER INPUT) 
...
Enter your Miscellaneous cost:
(USER INPUT) 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*****************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct MonthlyBudget {
    //total of 10 categories
    double housing;
    double utilities;
    double HouseExpenses;
    double Transportation;
    double Food;
    double Medical;
    double Insurance;
    double Entertainment;
    double Clothing;
    double Misc;


    //default constructor, needed since all-args constructor
    //was created, leverage that
    MonthlyBudget() {
        MonthlyBudget(0,0,0,0,0,0,0,0,0,0);
    }
    //all-args constructor
    MonthlyBudget(double h, double u,double x, double t, double f, 
    double m, double i, double e,double c, double s) {
        housing = h;
        utilities = u;
        HouseExpenses = x;
        Transportation = t;
        Food = f;
        Medical = m;
        Insurance = i;
        Entertainment = e;
        Clothing = c;
        Misc = s;

    }
};

void displayBudget(const MonthlyBudget &budget, const MonthlyBudget &expenses);
double outputCategory(string category, double budget, double expense);

int main() {
    MonthlyBudget budget(500, 150, 65, 50, 250, 30, 100, 150, 75, 50);
    MonthlyBudget expenses;
    
    cout << "Welcome to the student budget planner" << endl;

    cout << "Let's see how your budget worked out for the month" << endl;

    cout << "Enter your housing costs: ";
    cin >> expenses.housing;

    cout<< "Enter your utilities cost: ";
    cin >> expenses.utilities;

    cout<< "Enter your Household Expenses cost: ";
    cin >> expenses.HouseExpenses;

    cout<< "Enter your Transportation cost: ";
    cin >> expenses.Transportation;

    cout<< "Enter your Food cost: ";
    cin >> expenses.Food;

    cout<< "Enter your Medical cost: ";
    cin >> expenses.Medical;

    cout<< "Enter your Insurance cost: ";
    cin >> expenses.Insurance;

    cout<< "Enter your Entertainment cost: ";
    cin >> expenses.Entertainment;

    cout<< "Enter your Clothing cost: ";
    cin >> expenses.Clothing;

    cout << "Enter your Miscellaneous costs: ";
    cin >> expenses.Misc;

    displayBudget(budget, expenses);

    return EXIT_SUCCESS;
}

void displayBudget(const MonthlyBudget &budget, const MonthlyBudget &expenses) {
    double spendingtotal = 0; //positive is under over negative is under budget
    double totalbudget = 1420; //sum of each category
    string budstring = "under"; //changes if spending total is over 0
    //adding up total budget
    spendingtotal += outputCategory("Housing", budget.housing, expenses.housing);
    spendingtotal += outputCategory("Utilities", budget.utilities, expenses.utilities);
    spendingtotal += outputCategory("Household Expenses", budget.HouseExpenses, expenses.HouseExpenses);
    spendingtotal += outputCategory("Transportation", budget.Transportation, expenses.Transportation);
    spendingtotal += outputCategory("Food", budget.Food, expenses.Food);
    spendingtotal += outputCategory("Medical", budget.Medical, expenses.Medical);
    spendingtotal += outputCategory("Insurance", budget.Insurance, expenses.Insurance);
    spendingtotal += outputCategory("Entertainment", budget.Entertainment, expenses.Entertainment);
    spendingtotal += outputCategory("Clothing", budget.Clothing, expenses.Clothing);
    spendingtotal += outputCategory("Miscellaneous", budget.Misc, expenses.Misc);


    //You were under/over the budget of (monthlybudget) by (spendingtotal)
    if (spendingtotal > 0) 
        budstring = "over";
    
    cout << "Your total budget was " << totalbudget << " and you were " << budstring << " your budget by $" << spendingtotal << endl;
}

double outputCategory(string category, double budget, double expense) {
    string spendState;
    double expenses = abs(budget - expense);
    if (budget >= expense) {
        spendState = "under";
    } else  {
        spendState = "over";
    }
    cout << fixed << setprecision(2);
    cout << "You spent $" <<  expenses
        << " " << spendState << " budget on " << category << "." << endl; 
    if(spendState == "under"){
        return expenses * -1;
    }
    return expenses;
}
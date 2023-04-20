/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #02
* LAST MODIFIED: 2/12/23
*****************************************************/
/****************************************************************************
* Loan Calculator
*****************************************************************************
* PROGRAM DESCRIPTION:
* Write a program that asks for annual interest rate, number of payments, loan amount and print out a report on the loan
*
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Loan Amount:              $10000.00 
Annual Interest Rate:     12%
Monthly Interest Rate:    1%
Number of Payments:       36
Monthly Payment:          $332.14
Amount Paid Back:         $11957.15
Interest Paid:            $1957.15
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <ex: chrono used for time operations (C++ 11 and on)>
* math.h for round()
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/

    double Amount, AnnualInterest, MonthlyInterest, numPayments, MonthlyPayment, PaidBack, InterestPaid;   

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/
    cout << "Enter Annual Interest Rate %"<< endl;
    cin >> AnnualInterest;
    cout << "Enter Number of Payments"<< endl;
    cin >> numPayments;
    cout << "Enter Loan Amount $"<< endl;
    cin >> Amount;

    /***** PROCESSING SECTION *****/
    AnnualInterest = AnnualInterest/100;
    MonthlyInterest = AnnualInterest/12;
    double temp1=0;
    double temp2=0;
    temp1 = pow((1+MonthlyInterest),numPayments) -1;

    temp2 =  pow((1+MonthlyInterest),numPayments)*MonthlyInterest;

    MonthlyPayment = (temp1/temp2);
    MonthlyPayment = Amount/MonthlyPayment;
    PaidBack = MonthlyPayment*numPayments; //not sure why I lose precision only on paid back
    InterestPaid = round((PaidBack-Amount)*100)/100;
    MonthlyPayment = round(MonthlyPayment*100)/100;

    /***** OUTPUT SECTION *****/
    cout << "\nLoan Amount: $ "<< Amount 
         << "\nAnnual Interest Rate: "<< (AnnualInterest*100.00) <<"%" 
         << "\nMonthly Interest Rate: "<< (MonthlyInterest*100.00)  <<"%" 
         << "\nNumber of Payments: "<< numPayments 
         << "\nMonthly Payment: "<< MonthlyPayment 
         << "\nAmount Paid Back: "<< PaidBack 
         << "\nInterest Paid: "<< InterestPaid << endl;


    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
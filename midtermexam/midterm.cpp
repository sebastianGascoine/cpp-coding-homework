/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* Midterm Exam
* LAST MODIFIED: 3/26/23
*****************************************************/
/****************************************************************************
* Midterm Exam: Programming Exercise
*****************************************************************************
* PROGRAM DESCRIPTION:
*In this programming exercise, you will be creating a menu-driven console 
*application in C++ to demonstrate student learning outcomes, including 
*switch statements, nested loops, functions and use of files in C++.  
*****************************************************************************
* ALGORITHM:
* PROMPT: 

*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* fstream : open files
* math.h : round average
* iomanip : set precision of numbers
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>


using namespace std;
void nestedloop();
void functions();
void files();

void menu();

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    /***** DECLARATION SECTION *****/
    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/ 
    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    cout << setprecision(2) << fixed;
    menu();
    return EXIT_SUCCESS;
}
void nestedloop(){
    const int LINES = 7;
    const int Max_CHAR = 28;
    string dollar = "$";
    string star = "*";
    for(int j = 0; j<LINES;j++){
        for(int i = 0; i<j*2;i++)
        {
            cout << "o";
        }
        for(int i = 0; i<(Max_CHAR-j*4);i++)
        {
            if(i>=LINES-j ){ //I couldnt get the other side of the funnel to work
                cout << star;
            }
            else{
                cout << dollar;
            }
            
        }
        for(int i = 0; i<j*2;i++)
        {
            cout << "o";
        }
        cout << endl;
    }

}
void functions(){
    double numshares = 0;
    double saleprice = 0;
    double salecomm = 0;
    double purcprice = 0;
    double purccomm = 0;
    double profit = 0;
    cout << "Enter the number of shares of stock:" << endl;
    cin >> numshares;
    cout << "Enter sale price of stock: "<< endl;
    cin >> saleprice;
    cout << "Enter sale commission of stock: " << endl;
    cin >> salecomm;
    cout << "Enter purchase price of stock: " << endl;
    cin >> purcprice;
    cout << "Enter purchase commission of stock: " << endl;
    cin >> purccomm;

    profit =  ((numshares * saleprice) - salecomm) - ((numshares * purcprice) + purccomm);
    cout << "Profit from sale of stick is $" << profit << endl;
}
void files(){
    double small;
    double large;
    double total;
    double input;
    double average;
    int largestdonate = 0;
    int smallestdonate = 0;
    int count = 0;
    ifstream infile;
    //smallest donation is from FREEDOM AND PROSPERITY PAC
    //largest donation is from ACTBLUE

    infile.open("C:/Users/sebbi/Documents/code/C++Code/midtermexam/PACContributions2020-21.txt");
    infile >> input;
    small = input;
    large = input;
    do  
    {
        if(input > large)
        {
            large = input;
        }
        if(input < small)
        {
            small = input;
        }
        count++;
        total += input;
    } while(infile >> input);

    average = total/(double)count;
    //average = round(average*100)/100;
    cout << "All 2017-2018 Political Action Campaign (PAC) Contributions:" << endl;
    cout << "\nTotal number of PACs : "<< count<< endl;
    cout << "Total contributions $ "<< total << endl;

    cout << "\nMinimum contribution $ "<< small << endl;
    cout << "Maximum contribution $ "<< large << endl;
    cout << "Average contribution $ "<< average << endl;

    infile.close();
}
void menu(){
    int input = -1;
    string menu = "********************************************************************\n";
    menu += "**                                                                **\n";
    menu += "**                 WELCOME TO SEBASTIAN GASCOINE's                **\n";
    menu += "**                          MIDTERM EXAM                          **\n";
    menu += "**                                                                **\n";
    menu += "********************************************************************\n";
    menu += "** Please select from the following choices:                      **\n";
    menu += "** 1)  Demo Use of Nested Loops                                   **\n";
    menu += "** 2)  Demo Use of Functions                                      **\n";
    menu += "** 3)  Demo Use of Files                                          **\n";
    menu += "** 4)  Exit                                                       **\n";
    menu += "********************************************************************";
    cout << menu << endl;
    while(input < 1 || input > 4)
    {
        cin >> input;
        if(input < 1 || input > 4){
            cout << "Error: Please enter a choice between 1-4."<< endl;
        }
        else if(input == 1){
            //nested loops
            nestedloop();
        }
        else if(input == 2){
            //functions
            functions();
        }
        else if(input == 3){
            //files
            files();
        }
        else{
            //exit
            cout << "That's a wrap! Time for the weekend :)" << endl;
        }
    }
}

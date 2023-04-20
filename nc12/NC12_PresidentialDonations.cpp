/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #11
* LAST MODIFIED: 3/5/23
*****************************************************/
/****************************************************************************
* Presidential Donations
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a  that searches through the file and displays the largest contribution, 
the smallest contribution and the average of all contributions made to the 2020 
presidential campaign from zipcode 92056 for both Joe Biden and Donald Trump
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Donation Figures for 2020 Presidental Election
Joe Biden 
Average Donation: $ Smallest: $ Largest: $

Donald Trump
Average Donation: $ Smallest: $ Largest: $
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* fstream : open files
* math.h : round average
* iomanip : set precision of numbers
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    /***** CONSTANT SECTION *****/
    ifstream infile;
    ifstream infile2;
    double small,small2;
    double large,large2;
    double total,total2,input,input2,average,average2;
    int count,count2;
    
    
    cout << setprecision(2) << fixed;

    /***** DECLARATION SECTION *****/
    
    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    cout << "Donation Figures for 2020 Presidental Election" << endl;
    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/


    infile.open("C:/Users/sebbi/Documents/code/C++Code/nc12/biden2020donation_simple-1.txt");
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
    average = round(average*100)/100;


    infile2.open("C:/Users/sebbi/Documents/code/C++Code/nc12/trump2020donation_simple-1.txt");
    infile2 >> input2;
    small2 = input2;
    large2 = input2;
    do  
    {
        if(input2 > large2)
        {
            large2 = input2;
        }
        if(input2 < small2)
        {
            small2 = input2;
        }
        count2++;
        total2 += input2;
    } while(infile2 >> input2);

    average2 = total2/(double)count2;
    average2 = round(average2*100)/100;

    cout << "Joe Biden \n"<< "Average Donation: $"<<average<<" Smallest: $"<<small<<" Largest: $"<<large<< endl;
    cout << "\nDonald Trump \n"<< "Average Donation: $"<<average2<<" Smallest: $"<<small2<<" Largest: $"<<large2<< endl;

    infile.close();
    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
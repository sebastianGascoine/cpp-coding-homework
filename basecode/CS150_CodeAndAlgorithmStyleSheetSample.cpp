/****************************************************
* AUTHOR: Miguel O’Spartan
* COURSE: CS 150: C++ Programming 1
* SECTION: T/R 11:00am – 12:50pm
* NC (PROJECT)#: NC #01
* LAST MODIFIED: 01/01/2099
*****************************************************************************
* Average of Two
*****************************************************************************
PROGRAM DESCRIPTION:
* Reads two integers from the user and computes their average.
****************************************************************************
* ALGORITHM:
* 1. PROMPT “Please enter first number: ”
* 2. READ num1
* 3. PROMPT “Please enter second number: ”
* 4. READ num2
* 5. CALCULATE sum = num1 + num2
* 6. CALCULATE average = sum / 2
* 7. OUTPUT average
*****************************************************************************
ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <cstdlib> Provides standard functions, including dynamic memory management,
* random number generation, communication with the environment,
* integer arithmetics, searching, sorting and converting.
* <iostream> Used for console input and output (cin and cout)
*****************************************************************************/
#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    const int NUMS = 2;
    /***** DECLARATION SECTION *****/
    int num1, num2, sum;
    double average;
    /***** INITIALIZATION SECTION *****/
    // No initialization needed for this program.
    /***** INTRO SECTION *****/
    cout << "Welcome to My Average-of-Two Program!\n\n";
    /***** INPUT SECTION *****/
    cout << "Please enter first number : ";
    cin >> num1;
    cout << "Please enter second number: ";
    cin >> num2;
    /***** PROCESSING SECTION *****/
    sum = num1 + num2;
    average = sum / (double) NUMS; // Cast to double to retain decimal places.
    /***** OUTPUT SECTION *****/
    cout << "Your average = " << average << endl;
    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
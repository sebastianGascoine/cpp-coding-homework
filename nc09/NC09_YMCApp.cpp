/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #09
* LAST MODIFIED: 2/26/23
*****************************************************/
/****************************************************************************
* YMCA App
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a C++ console application providing the functionality for a user to enroll in a 
*membership at the Joe and Mary Mottino Family YMCA
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Welcome to the 
 _   _ _ __ ___   ___ __ _ 
| | | | '_ ` _ \ / __/ _` |
| |_| | | | | | | (_| (_| |
 \__, |_| |_| |_|\___\__,_|
  __/ |                    
 |___/    

Joe and Mary Mottino Falimy Center


Please choose your membership option:
1 - Family I (1 adult and children 25 and under)
2 - Adult (ages 26-64)
3 - Dual Adult (2 adults at the same address)
4 - Family II (2 adult and children 25 and under)
5 - Teen/Young Adult (ages 13 - 25)
6 - Senior (Ages 65+)

How many months would you month(s) would you like to purchase? 
Are you a new member? (y/n) 

You chose the Family I membership for 1 month(s).  

You are a returning member, welcome back.
Your total cost is 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* 
*****************************************************************************/

#include <cstdlib>
#include <iostream>


using namespace std;



int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/
    int membership,months;
    double cost;
    char mem;
    bool member = true;
    string memberstring;

    /***** INITIALIZATION SECTION *****/

    /***** INTRO SECTION *****/
    cout << "Welcome to the," <<
        "\n _   _ _ __ ___   ___ __ _" <<
        "\n| | | | '_ ` _ \\ / __/ _` |"<<
        "\n| |_| | | | | | | (_| (_| |" <<
        "\n \\__, |_| |_| |_|\\___\\__,_|" <<
        "\n __/ | "  <<                 
        "\n|___/ "  << 
        "\n\nJoe and Mary Mottino Falimy Center" << endl;

    /***** INPUT SECTION *****/
    cout << "\nPlease choose your membership option:" <<
    "\n1 - Family I (1 adult and children 25 and under)" <<
    "\n2 - Adult (ages 26-64)" <<
    "\n3 - Dual Adult (2 adults at the same address)" <<
    "\n4 - Family II (2 adult and children 25 and under)" <<
    "\n5 - Teen/Young Adult (ages 13 - 25)" <<
    "\n6 - Senior (Ages 65+) \nChoose:" << endl;
    cin >> membership;
    if(membership > 6 || membership < 1)
    {
        cout << "Invalid choice.  Please select from the options above." << endl;
        abort();
    }

    cout << "How many months would you month(s) would you like to purchase?" << endl;
    cin >> months;
    cout << "Are you a new member? (y/n)" << endl;
    cin >> mem;

    /***** PROCESSING SECTION *****/
    //switch has name and cost 
    switch(membership) {
    case 1: //family
        cost = 75 * months;
        memberstring = "Family I";
        break;
    
     case 2: //adult
        cost = 54 * months;
        memberstring = "Adult";   
        break;
    
     case 3: //dual adult
        cost = 84 * months;
        memberstring = "Dual Adult";
        break;
    
     case 4: //family 2
        cost = 95 * months;
        memberstring = "Family II";
        break;
    
     case 5: //teen
        cost = 37 * months;
        memberstring = "Teen/Young Adult";
        break;
    
     case 6: //senior
        cost = 47 * months;
        memberstring = "Senior";
        break;
    
    default:
        cost = 0;
    }
    //ASCII 'n' == 110 adds unless not member
    if(mem != 110){
        member = false;
        if(membership == 5){
            cost += 30.0;
        }
        else{
            cost += 60;
        }
    }

    /***** OUTPUT SECTION *****/
    cout <<"You chose the "<< memberstring <<" membership for "<< months<< " month(s).  " << endl;
    if(member){
    cout <<"You are a returning member, welcome back."<< endl;
    }
    else{
        cout <<"You are not a returning member, welcome."<< endl;

    }
    cout <<"Your total cost is $"<< cost << endl;


    

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
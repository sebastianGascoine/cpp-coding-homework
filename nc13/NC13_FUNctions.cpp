/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #13
* LAST MODIFIED: 3/12/23
*****************************************************/
/****************************************************************************
* FUNctions
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a function that counts the capitals, lowercase, vowels, and consonants in a string
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Welcome to the character counter program we will count all sorts of strings.

Please enter your string:
Welcome to CS 150.

Number of capitols = 3
Number of lowercase = 8
Number of vowels = 4
Number of consonants = 7
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* cctype for check vowel/const methods
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <cctype>

using namespace std;
int countCapitols(string str);
int countLowercaseLetters (string str);
int countVowels (string str);
int countConsonants  (string str);

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    

    /***** DECLARATION SECTION *****/
    string InputString;
    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    cout << "Welcome to the character counter program we will count all sorts of strings.\n" << endl;
    /***** INPUT SECTION *****/
    cout << "Please enter your string:" << endl;
    getline(cin, InputString);

    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    cout << "Number of capitols = " << countCapitols(InputString) << endl;
    cout << "Number of lowercase = " << countLowercaseLetters(InputString) << endl;
    cout << "Number of vowels = " << countVowels(InputString) << endl;
    cout << "Number of consonants = " << countConsonants(InputString) << endl;

    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
int countCapitols(string str){
    int count = 0;
    for(int i = 0; i < str.size(); i++){
        if(isupper(str[i])){
            count++;
        }
    }
    return count;
}
int countLowercaseLetters (string str){
    int count = 0;
    for(int i = 0; i < str.size(); i++){
        if(islower(str[i])){
            count++;
        }
    }
    return count;
}
int countVowels  (string str){
    int count = 0;
    for(int i = 0; i < str.size(); i++){
        char ls = tolower(str[i]);
        if(ls == 'a' || ls == 'e' || ls == 'i' ||  ls == 'o' || ls == 'u'){
            count++;
        }
    }
    return count;
}
int countConsonants  (string str){
    int count = 0;
    for(int i = 0; i < str.size(); i++){
        char ls = tolower(str[i]);
        if(isalpha(ls)){ 
            if(ls != 'a' && ls != 'e' && ls != 'i' &&  ls != 'o' && ls != 'u'){
                count++;
            }
        }
    }
    return count;
}

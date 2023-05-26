#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;
void diverprogram();
double between(double lowval,double highval);


int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    cout << setprecision(2) << fixed;

    /***** DECLARATION SECTION *****/

    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    cout << "Welcome to the judge diver program.\n" << endl;

    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    diverprogram();


    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
void diverprogram(){
    int totalscores = 7;
    double total;
    vector<double> myvector;
    //difficulty
    cout << "Enter the difficulty of the dive (1.2-3.8): ";
    double difficulty = between(1.2,3.8);

    cout << "\n"; //spacing
    for(int i = 0; i<totalscores;i++){ //input to array
        cout << "Enter judge "<< (i + 1) << " score: ";
        myvector.push_back(between(0,10));
    }
    
    //sort(myvector.begin(),myvector.end());
    int size = myvector.size();
    for (int step = 0; step < size - 1; step++) { //goes to the end of array
      int min_idx = step; 
      for (int i = step + 1; i < size; i++) { //loops through array at step + 1
      if (myvector[i] < myvector[min_idx]) //if current val is < min_idx val
        min_idx = i; //min_idx is smallest value
      
      }

      double temp = myvector[min_idx];     //temp variable to hold onto the min_idx
      myvector[min_idx] = myvector[step];  //swap the values
      myvector[step] = temp;
    }
    
    total = accumulate(myvector.begin()+1, myvector.end()-1, 0.0);
    total *= difficulty; 
    total *= 0.6;
    cout << "\nThe total score for the dive is "<< total << "." << endl;
}

double between(double lowval,double highval){
    double retint = lowval-1;

    while(retint <= lowval || retint >= highval)
    {
        cin >> retint;
        if(retint <= lowval || retint >= highval){
            cout << "Invalid entry, you must enter a value between " << lowval << " and " << highval << "." << endl;
        }
    }
    return retint;
}
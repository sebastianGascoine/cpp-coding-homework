#include <iostream>
#include <cstdlib>
#include <vector>

#include "Computer.h"
#include "Laptop.h"

using namespace std;
int between(int lowval,int highval);


int main(int argc, char* argv[])
{
  bool quit = false;
  int retint;
  int Compindex = 0;
  int Lapindex = 0;

  vector< Computer > ComputerList;  
  vector< Laptop > LaptopList;  

	cout
		<< "*************************************************************************\n"
		<< "**                 Welcome to the Computer Depot                       **\n";
  
  while(!quit){
      cout 
      << "*************************************************************************\n"
      << "** Please enter choice :                                               **\n"
      << "** 1) Add computer to inventory                                        **\n"
      << "** 2) Display entire inventory                                         **\n"
      << "** 3) Quit                                                             **\n"
      << "*************************************************************************\n";
      cin >> retint;
      if(retint == 1){
        int CompOrLap = -1;
        string inMake,inModel;
        double inPrice;
        cout << "Enter 1 for Computer or 2 for Laptop >> ";
        CompOrLap = between(1,2);
        cout << "Enter make               >> ";
        cin >> inMake;
        string emptystr = ""; //gets \n so getline doesnt take it
        getline(cin,emptystr);
        cout << "Enter model              >> ";
        getline(cin,inModel);
        cout << "Enter price              >> $";
        cin >> inPrice;
        if(CompOrLap == 2){
          double inbatt, inweight;
          cout << "Enter battery life (hrs) >> ";
          cin >> inbatt; 
          cout << "Enter weight (lbs)       >> ";
          cin >> inweight;
          Laptop temp(inMake,inModel,inPrice,inbatt,inweight);
          
          LaptopList.insert((LaptopList.begin() + Lapindex),temp);
          Lapindex++;
        }
        else{
          Computer temp(inMake,inModel,inPrice);
          
          ComputerList.insert((ComputerList.begin() + Compindex),temp);
          Compindex++;
        }

      }
      else if(retint == 2){
        cout
        << "*************************************************************************\n"
        << "**                          Entire Inventory                           **\n"
        << "*************************************************************************\n"
        << "| Id # | Make  | Model         | Price  | Battery (hrs) | Weight (lbs)  |\n";
        for(Computer comp : ComputerList){
          cout << comp << endl;
        }
        for(Laptop comp : LaptopList){
          cout << comp << endl;
        }
        cout 
        << "*************************************************************************\n";
      }
      else if(retint == 3){
        quit = true;
        cout << "Thank You for Using Computer Depot" << endl;
      }
      else{
        cout << "Invalid entry" << endl;
      }
  }
  return EXIT_SUCCESS;
}


int between(int lowval,int highval){
    int retint = lowval-1;

    while(retint < lowval || retint > highval)
    {
        cin >> retint;
        if(retint < lowval || retint > highval){
            cout << "Invalid entry, you must enter a value between " << lowval << " and " << highval << "." << endl;
        }
    }
    return retint;
}
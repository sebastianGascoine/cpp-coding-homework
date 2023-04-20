/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #18
* LAST MODIFIED: 4/8/23
*****************************************************/
/****************************************************************************
* Concert Seating
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program to handle seat reservations at a concert hall.
*****************************************************************************
* ALGORITHM:
* PROMPT: 
Enter Row 1 cost: (USER INPUT)
Enter Row 2 cost: (USER INPUT)
...
Enter Row 15 cost: (USER INPUT)


                Seating Chart
        123456789012345678901234567890
Row 1   ##############################
Row 2   ##############################
Row 3   ##############################
Row 4   ##############################
Row 5   ####**########################
Row 6   ##############################
Row 7   ##############################
Row 8   ##############################
Row 9   ##############################
Row 10  #########*####################
Row 11  ##############################
Row 12  ##############################
Row 13  ##############################
Row 14  ##############################
Row 15  #############################*

Row 1 -         $0.00
Row 2 -         $0.00
...
Row 15 -        $0.00

Please enter your following choice:
1 - Reserve a Seat
2 - Check Availability in Row
3 - Check Total Availability
4 - Total Amount of Sold Seats
5 - Quit
Enter your choice:


*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_ROWS = 15;
const int MAX_SEATS_PER_ROW = 30;
const char AVAILABLE_SEAT = '#';
const char TAKEN_SEAT = '*';

void initializeSeating(char seats[][MAX_SEATS_PER_ROW] );
void displaySeating(char seats[][MAX_SEATS_PER_ROW] );
void displayTicketPrices(double prices[]); 
double calculateTxSales(char seats[][MAX_SEATS_PER_ROW], double prices[]);  //total sales
int calculateTxSeats(char seats[][MAX_SEATS_PER_ROW], double prices[]);     //total seats taken & used for total seats left

int dashboardMenu(char seats[][MAX_SEATS_PER_ROW], double tktPrice[]);      //for menu
double greaterthan(double val);                                             //input validation for seat prices
int calculateRowAvail(int row, char seats[][MAX_SEATS_PER_ROW]);            //checks total seats on (USER INPUT) row
int between(int lowval,int highval);                                        //checks if (USER INPUT) is between 2 numbers

int main() {
    cout << "Welcome to the seating chart program" << endl;;
    char seats[MAX_ROWS][MAX_SEATS_PER_ROW];
    //double ticketPrices[MAX_ROWS];
    /*for(int i = 0; i<MAX_ROWS;i++){ //input to array
        cout << "Enter Row "<< (i + 1) << " cost: ";
        ticketPrices[i] = greaterthan(0);
    } */

    double ticketPrices[] = {
        5, 5, 5, 5, 5, //first 5 rows are premium seats
        3, 3, 3, 3, 3, // middle 5 rows are general
        1, 1, 1, 1, 1 //last 5 rows are nose bleed
    };
    


    initializeSeating(seats);
    //test seating chart
    seats[4][4] = TAKEN_SEAT;
    seats[4][5] = TAKEN_SEAT;
    seats[9][9] = TAKEN_SEAT;
    seats[14][29] = TAKEN_SEAT;
    
    displaySeating(seats);
    displayTicketPrices(ticketPrices);

    dashboardMenu(seats,ticketPrices);

}
//Added programs
int dashboardMenu(char seats[][MAX_SEATS_PER_ROW], double tktPrice[]){
    int retint = -1;

    string dashboardMenu = "\nPlease enter your following choice:\n";
    dashboardMenu += "1 - Reserve a Seat\n";
    dashboardMenu += "2 - Check Availability in Row\n";
    dashboardMenu += "3 - Check Total Availability\n";
    dashboardMenu += "4 - Total Amount of Sold Seats\n";
    dashboardMenu += "5 - Total Amount of Tickets Sold\n";

    dashboardMenu += "6 - Quit\nEnter your choice:";
    string input;
    while(retint != 6)
    {
        cout << dashboardMenu << endl;
        cin >> retint;

        if(retint == 1){
            //reserve seat
            //ethnicityMenu();
            cout << "Enter a row between " << 1 << " and " << 15 << "."<< endl;
            int row = between(1,15);
            cout << "Enter the column of the seat between " << 1 << " and " << 30 << "."<< endl;
            int col = between(1,30);

            while(seats[row-1][col-1] != AVAILABLE_SEAT){
                cout << "Seat is taken." << endl;
                
                cout << "Enter a row between " << 1 << " and " << 15 << "."<< endl;
                row = between(1,15);
                cout << "Enter the column of the seat between " << 1 << " and " << 30 << "."<< endl;
                col = between(1,30);
            }
            seats[row-1][col-1] = TAKEN_SEAT;
            displaySeating(seats);
            retint == -1;
        }
        else if(retint == 2){
            //check row availability
            cout << "Enter a row between " << 1 << " and " << 15 << "."<< endl;
            int row = between(1,15);
            
            cout << "Total Amount Seats in Row: " << calculateRowAvail(row-1,seats)  << endl;

            retint == -1;
        }
        else if(retint == 3){
            //check total availability total seats = 450
            int totalseats = MAX_SEATS_PER_ROW * MAX_ROWS;
            cout << "Total of Seats Available: " << (totalseats - calculateTxSeats(seats, tktPrice)) << endl;
            retint == -1;

        }
        else if(retint == 4){
            //check total sold seats
            cout << "Total of Seats Taken: " << calculateTxSeats(seats, tktPrice) << endl;
            retint == -1;
        }
        else if(retint == 5){
            //check total sold tickets
            cout << "Total Amount Sales: $" << calculateTxSales(seats, tktPrice) << endl;
            retint == -1;
        }
        else if(retint == 6){
            cout << "Thank you for using the seating chart program. " << endl;
        }
        else{
            cout << "Error" << endl;
            retint == -1;
        }
    }
    return retint;
}

double greaterthan(double val){
    double retint = val-1; 
    while(retint <= val)
    {
        cin >> retint;
        if(retint <= val){
            cout << "Invalid entry, you must enter a value greater than " << val << "."<< endl;
        }
    }
    return retint;
}

int between(int lowval,int highval){
    int retint = lowval-1;

    while(retint < lowval || retint > highval)
    {
        //cout << menu << endl;
        cin >> retint;
        if(retint < lowval || retint > highval){
            cout << "Invalid entry, you must enter a value between " << lowval << " and " << highval << "." << endl;
        }
    }
    return retint;
}

int calculateRowAvail(int row, char seats[][MAX_SEATS_PER_ROW]) {
    int FreeSeats = 0;
    for(int j = 0; j < MAX_SEATS_PER_ROW; j++) {
        if(seats[row][j] == AVAILABLE_SEAT) {
            FreeSeats++;
        }
    }
    return FreeSeats;
}

void initializeSeating(char seats[][MAX_SEATS_PER_ROW] ) {
    for(int i = 0; i < MAX_ROWS; i++) {
        for(int j = 0; j < MAX_SEATS_PER_ROW; j++) {
            seats[i][j] = AVAILABLE_SEAT;
        }
    }
}

void displaySeating(char seats[][MAX_SEATS_PER_ROW] ) {
    cout << "\t\tSeating Chart\n"; 
    cout << "\t123456789012345678901234567890\n";
    for(int i = 0; i < MAX_ROWS; i++) {
        cout << "Row " << i+1 <<"\t";
        for(int j = 0; j < MAX_SEATS_PER_ROW; j++) {
            cout << seats[i][j];
        }
        cout << endl;
    }
}

void displayTicketPrices(double prices[]) {
    cout << fixed << setprecision(2) << setfill('0');
    cout << "\tTicket Prices\n";
    for(int i = 0; i < MAX_ROWS; i++) {
        cout << "Row " << i+1 << " - \t$" << prices[i] << endl;
    }
}

double calculateTxSales(char seats[][MAX_SEATS_PER_ROW], double prices[]) {
    double totalSales = 0;
    for(int i = 0; i < MAX_ROWS; i++) {
        for(int j = 0; j < MAX_SEATS_PER_ROW; j++) {
            if(seats[i][j] == TAKEN_SEAT) {
               totalSales += prices[i]; 
            }
        }
    }
    return totalSales;
}
int calculateTxSeats(char seats[][MAX_SEATS_PER_ROW], double prices[]) {
    int totalSeats = 0;
    for(int i = 0; i < MAX_ROWS; i++) {
        for(int j = 0; j < MAX_SEATS_PER_ROW; j++) {
            if(seats[i][j] == TAKEN_SEAT) {
                totalSeats++;
            }
        }
    }
    return totalSeats;
}


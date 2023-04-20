/****************************************************
* AUTHOR: Sebastian Gascoine
* COURSE: CS 150: C++ Programming 1
* SECTION: <class days + time>
* NC (PROJECT)#: NC #17
* LAST MODIFIED: 4/2/23
*****************************************************/
/****************************************************************************
* TicTacToe
*****************************************************************************
* PROGRAM DESCRIPTION:
*Write a program that allows two players to play a game of tic-tac-toe.
*****************************************************************************
* ALGORITHM:
* PROMPT: 

*   *   *
*   *   *
*   *   *

*   *   *
*   X   *
*   *   *
...
X   X   O
*   O   X
O   *   O
WIN by diagonal Player O

*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
*****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
void tictactoe();

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/

    /***** DECLARATION SECTION *****/

    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    cout << "Welcome to TicTacToe.\n" << endl;

    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    tictactoe();


    // system("PAUSE"); //for DevC++ on windows
    return EXIT_SUCCESS;
}
void tictactoe(){
    int retint = -1;
    bool win = false;
    char player1 = 'X';
    char player2 = 'O';
    int turn = 1;
    //row 1st column second
    char board[3][3] = { 
    {'*','*','*'},
    {'*','*','*'},
    {'*','*','*'}
    };
    int i,j;
    
    while(!win){
        int draw = 0; //resets each loop
        //board display
        for(i=0;i<3;i++) //rows
        {                   
            for(j=0;j<3;j++) //column
            {   
                cout<<"\t"<<board[i][j]; //rows then columns
                if(board[i][j] != '*'){
                    //if draw == 9 win is true
                    draw++;
                }
            }
            cout<<endl;
        }
        //check for win/draw
        if(draw >= 9){
            win = true;
            cout << "draw";
        }
        for(int i=0; i<3; i++)
            if(board[i][0] != '*' && board[i][0] == board[i][1] && board[i][0] == board[i][2]){ //check if the rows equal eachother
                win = true;
                cout << "Win by rows Player " << board[i][0];
            }
            if(board[0][i] != '*' && board[0][i] == board[1][i] && board[0][i] == board[2][i]){ //check if the columns equal eachother 
                win = true;
                cout << "Win by columns Player " << board[0][i];
            }
        
        //diagonal wins 00 11 22 & 20 11 02  
        // x   |   x
        //  x  |  x
        //   x | x
        if(board[0][0] != '*' && board[0][0] == board[1][1] && board[0][0] == board[2][2]){
            win = true;
            cout << "Win by diagonal Player " << board[0][0];
        }
        if(board[2][0] != '*' && board[2][0] == board[1][1] && board[2][0] == board[0][2]){
            win = true;
            cout << "Win by diagonal Player " << board[2][0];
        }

        if(!win){ //player turns
            if(turn == 1)
            {
                int row, col;
                cout << "Player 1 enter row:";
                cin >> row;
                cout << "Player 1 enter column:";
                cin >> col;
                while(board[(row - 1)][(col - 1)] != '*'){
                    cout << "That row and column is Out of Bounds or Filled"<< endl;

                    cout << "Player 1 enter row:";
                    cin >> row;
                    cout << "Player 1 enter column:";
                    cin >> col;
                }
                board[(row - 1)][(col - 1)] = player1;
                turn *= -1;
            }
            else
            {
                int row, col;
                cout << "Player 2 enter row:";
                cin >> row;
                cout << "Player 2 enter column:";
                cin >> col;
                while(board[(row - 1)][(col - 1)] != '*'){
                    cout << "That row and column is Out of Bounds or Filled"<< endl;
                    cout << "Player 2 enter row:";
                    cin >> row;
                    cout << "Player 2 enter column:";
                    cin >> col;
                }
                board[(row - 1)][(col - 1)] = player2;
                turn *= -1;
            }
        }
    }   
}
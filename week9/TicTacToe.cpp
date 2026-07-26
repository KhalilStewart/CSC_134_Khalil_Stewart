/*
@Author: Khalil Stewart
@Date: 7/20/26
@Purpose: This program plays a game of tic tac toe with the user
*/

//include all required libraries/directives
#include <iostream>
using namespace  std;
    //store the empty box spaces as characters
    char b[9] = {'1','2','3','4','5','6','7','8','9'};

    //set up the table using a void function to avoid a return value
    void board() {
        //print space
        cout << "\n";
        //print three empty boxes in the first row
        cout << b[0] << "|" << b[1] << "|" << b[2] << endl;
        //print lines to seperate row
        cout << "-+-+-" << endl;
        //print three empty boxes on the second row
        cout << b[3] << "|" << b[4] << "|" << b[5] << endl;
        //print lines to seperate row
        cout << "-+-+-" << endl;
        //print three empty boxes in the last row
        cout << b[6] << "|" << b[7] << "|" << b[8] << endl;
    }

    //set all the possible win conditions that are diagnal and horizontal
    bool win() {
        //stores all 8 wining combinations
        int w[8][3] = {
            {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}
        };

        //loop 8 times to check all wining combiniations
        for (int i = 0; i < 8; i++)
            if(b[w[i][0]] == b[w[i][1]] && b[w[i][1]] == b[w[i][2]])
            //return true if their is a wining combination
            return true;

        //return false if their is no winin combination
        return false;
    }

    //main function begins
    int main(){
        //store p (player) as the user
        char p = 'X';

        //nine loops because there are nine boxes in Tic Tac Toe that need to be filled
        for (int turn = 0; turn < 9; turn++){
            //from the void function at the beginning
            board();

            //store position as a number
            int position;

            //prompt user for their first position
            cout << " \nPlayer " << p << ", chose a position (1-9)";
            cin >> position;

            //conditions for the position chosen by the player
            while(position < 1 || position > 9 || b[position - 1] == 'X' || b[position - 1] == 'O') {
                //prompt user for another position if it is not valid
                cout << "invalid move. please try again: ";
                cin >> position;
            }

            //place player's symbol(X) in side of their requested position 
            b[position - 1] = p;

            //check winner
            if (win()) {
                //if player wins then print the board and player wins
                board;
                cout << "\n player " << p << " wins " << endl;
                //end the program if someone wins
                return 0;
            }

            //enables alternating turns between player X and O
            p = (p == 'X') ? 'O' : 'X';
        }

        //if all 9 turns are played but there is no winner
        board();
        cout << "\nit's a draw" << endl;
    }
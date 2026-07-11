/*
@Author: Khalil Stewart
@Date: 7/9/26
@Purpose: This program prints a chessboard pattern to the console
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main(){

    int size; //store size as an integer

    //prompts the user to enter size
    cout << " enter the size you want for your chessboard ";
    //user enters size
    cin >> size;

    //initialize row as 1 and update it until it is 1 less than the size entered by the user
    for ( int row = 1; row < size; row++){

        //initialize column as 1 and update it until it is 1 less than size
        for (int col = 1; col < size; col++){
            //condition is the sum of row and column must have a remainder of zero
            if((row + col) % 2 == 0)
                //print asterick if the condition is met
                cout << "*";
            
                //if condition is not met
            else
                //print a blank space
                cout << " ";
        }
        //print a new line at the end of each loop
        cout << endl;
    }

    //end of program
    return 0;
}
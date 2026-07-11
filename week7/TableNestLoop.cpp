/*
@Author: Khalil Stewart
@Date: 7/8/26
@Purpose: This program prints a multiplication table for numbers 1 through 10
*/

//include all required libraries/directives
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //console prints the width between each value 
    cout << setw(4) << " ";

    //initialize as zero and set the condition to: initializer adds up and stops when it reaches 10
    for (int i = 0; i <= 10; i++) {
        //after each value is updated after the loop, console prints 4 blank spots between the updated initializer
        cout << setw(4) << i;
    }

    //print a new line
    cout << endl;
    
    //set row as 1 and update row until it becomes 10
    for (int row = 1; row <= 10; row++){
        //print a space of 2 between each row
        cout << setw(2) << row;
        
        //set column as 1 and update until it reaches 10
        for (int col = 1; col <= 10; col++){
            //print a space of 4 between each product of the row and column
            cout << setw(4) << row * col;
        }
        //print a new line after the forloop ends to begin another loop
        cout << endl;
    }
    
    //end of program
    return 0;
}
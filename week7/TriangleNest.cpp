/*
@Author: Khalil Stewart
@Date: 7/8/26
@Purpose: This program prints a right triangle to the console
*/

#include <iostream>
using namespace std;

int main(){

    //store row as an integer
    int row;

    //Prompt the user to enter number of rows
    cout << " How many rows do you want?: ";
    //user enters number of rows
    cin >> row;

    //initialize as 1 and update until initializer equals the number of rows entered by the user
    for (int i = 1; i <= row; i++){
        //set star as 1 and update until star equals initializer from the first loop
        for (int star = 1; star <= i; star++){
            //print a star
            cout << " * ";
        }

        //print a new line after each loop ends
        cout << endl; 
    }

    //end of program
    return 0;
}
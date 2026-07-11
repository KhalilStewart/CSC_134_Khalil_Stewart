/*
@Author: Khalil Stewart
@Date: 7/9/26
@Purpose: This program prints a square pattern of asterisks
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main(){
    //store length of the square
    int length;

    //prompt the user for side length
    cout << " enter the side length of the square ";
    //user enters side length
    cin >> length;

    //initialize row as 1 and update row until it equals length entered by the user
    for (int row = 1; row <= length; row++){
        //initialize column as 1 and update until it equals length
        for (int col = 1; col <= length; col++){
            //print astericks
            cout << " * ";
        }

        //print a new line at the end of each loop
        cout << endl;
    }

    //end of program
    return 0;
}
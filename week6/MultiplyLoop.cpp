/*
@Author: Khalil Stewart
@Date: 7/3/26
@Purpose: This program takes user input and displays a multiplication table
*/

#include <iostream>
using namespace std;

int main(){

    int num; //store number as an integer

    //console prompts user to enter a number
    cout << " enter an integer:";
    cin >> num;

    //Display multiplication table
    for ( int i = 0; i <= 12; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }

    //end of program
    return 0;
}
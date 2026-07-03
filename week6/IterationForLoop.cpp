/*
@Author: Khalil Stewart
@Date: 7/2/26
@Purpose: This program completes the number of iterations the user enters starting from 0
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main(){

    int num; //store number

    //console asks user to enter number
    cout << " enter a number: ";
    //user enters number
    cin >> num;

    //number entered by user is 1 greater than the number of iterations that occur
    for ( int i = 0; i < num; i++){

        // print number of iterations in each loop
        cout << i << endl;
    }

    //end of program
    return 0;
}
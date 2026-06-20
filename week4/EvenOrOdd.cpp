/*
@Author: Khalil Stewart
@Date: 6/17/26
@Purpose: Determine if a number is even or odd
*/

//Include the required libraries/directives
#include <iostream>
using namespace std;

int main(){
    int number; //stores the value the user enters
    cout << " enter an integer: ";
    cin >> number; //the user enters a number here

    //if a number has a remainder of 0 when divided by 2, then it's even
    if ( number % 2 == 0) {
        cout << number << " is an even number " << endl;
    }
    //if a number has a remainder other than 0 when divided by 2 it is odd
    else {
        cout << number << " is an odd number " << endl;
    }

    return 0;
}
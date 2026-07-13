/*
@Author: Khalil Stewart
@date: 7/11/26
@Purpose: this program takes the membership of a coutry club and calcultes its inceasing fee over the span of 5 years
*/

//include all required libraries/directives
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //store the fee as a number with a decimal
    double fee = 250000.00;
    //store the rate as a decimal
    const double rate = 0.06;

    //round the numbers to the 2nd decimal place
    cout << fixed << setprecision(2);

    //print the membership fee for the next 5 years
    cout << "The membership fee for the next 5 years are: " << endl;

    //initialize year as 1 and update it 5 times
    for ( int year = 1; year <= 5; year++){

        //during each loop increase the fee by 6 percent
        fee = fee * (1 + rate);

        //print the year and its corresponding fee
        cout << "year" << year << ": $" << fee << endl;
    }

    //end of program
    return 0;
}
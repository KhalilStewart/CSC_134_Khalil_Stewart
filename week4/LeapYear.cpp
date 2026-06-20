/*
@Author: Khalil Stewart
@Date: 6/18/26
@Purpose: This program determines if the year the user enters is a leap year or not
*/

//include required libraries/directives
#include <iostream>
using namespace std;

int main(){
    int year; //hold the value of the year the user puts in as a number

    //have the console ask the user for a year
    cout << " enter a year " << endl;
    //user enters year
    cin >> year;
    
    // a multiple of 400 is something that can be divided evenly by 400 
    if( (year % 400 == 0) || (( year % 4 == 0) && ( year % 100 != 0 )) ){
        cout << " the year you entered " << year << " is a leap year";
    }
    //if the conditions from the if statement aren't met then this is what the cosole says:
    else {
        cout << " The year you entered " << year << " is NOT a leap year " << endl;
    }
}
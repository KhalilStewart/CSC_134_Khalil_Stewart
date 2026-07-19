/*
@Author: Khalil Stewart
@Date: 7/15/26
@Purpose: This program lists the months of the year and how many days are in each month
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main(){


    const int months = 12; //store the amount of months
    int days[months] = {31,28,31,30,31,30,31,31,30,31,30,31}; //array for days in each month

    //set initializer as zero and update until it reachs the amount of months in a year
    for (int count = 0; count < months; count++){
        //print the month starting at 2 and its corresponding days and update it each loop
        cout << "month " << (count + 1) << " has " << days[count] << " days.\n " << endl;

    }

    //end of program
    return 0;
}
/*
@Author: Khalil Stewart
@Date: 7/16/26
@Purpose: This program prints the days of the week using an array
*/

//include all required libraries/directives
#include <iostream>
#include <string>
using namespace std;

int main(){

    //store the days as a string datatype 
    string days[7]={"sunday", "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    //set initializer as zero and update it seven times
    for (int i = 0; i < 7; i++){

        // print the day number and it corresponding name
        cout << "day " << (i + 1) << ": " << days[i] << endl;
    }

    //end of program
    return 0;
}
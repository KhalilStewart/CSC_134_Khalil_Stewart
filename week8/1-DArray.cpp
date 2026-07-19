/*
@Author: Khalil Stewart
@Date: 7/14/26
@Purpose: This program finds the sum of 5 integer values in a 1-D array
*/

#include <iostream>
using namespace std;

int main(){

    //array of 5 numbers that each have their own value
    int numbers[5] = {10,20,30,40,50};

    //hold the sum as an integer
    int sum = 0;
    
    //set initializer as 0 and update until it reaches 5
    for (int i = 0; i < 5; i++) {
        //update the sum during each loop
        sum += numbers[i];
    }

    //print the sum
    cout << "the sum is: " << sum << endl;

    //end of program
    return 0;
}
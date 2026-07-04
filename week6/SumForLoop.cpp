/*
@Author: Khalil Stewart
@Date: 7/3/26
@Purpose: This program creates a for loop that loops 50 times and sums the counter
*/

#include <iostream>
using namespace std;

int main(){

    //store variables
    int sum0p = 0;
    int adder = 10;

    //creat for loop that loops 50 times
    for ( int i = 0; i < 50; i++){
        sum0p = i + adder; //the sum is i added to adder
        cout << sum0p << endl; //The value of sum is printed
    }

    return 0;
}
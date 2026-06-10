/*
@author: Khalil Stewart
@date 6/9/2026
@Purpose: This program calculates velocity using the equation D = v * t
*/

//include all required libraries/directives for this program
#include <iostream>
using namespace std;

int main(){
    //int num1 represents distance
    int num1 = 400;
    //int num2 represents time
    int num2 = 4;
    //use the int qoutient to allow the numbers to be divided
    int qoutient = num1 / num2;
    cout << " the velocity of an object that travelled " << num1 << " miles in " << num2 << " seconds is " << qoutient << endl;
    return 0;
}
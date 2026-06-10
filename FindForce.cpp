/*
@author: Khalil Stewart
@date: 6/9/2026
@purpose: This prgram calculates the force of an object
*/

//include all required libraries and directives
#include <iostream>
using namespace std;

int main(){
    int num1 = 10;
    int num2 = 9.81;
    int product = num1 * num2;
    cout << " the force of an object moving at " << num2 << " m/s^2 and weighs " << num1 << " kg is " << product << endl;
    return 0;
}
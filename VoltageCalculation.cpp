/*
@author: Khalil Stewart
@Date: 6/9/2026
@Purpose: This program calculates voltage using the equation V = IR
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main(){
    //num1 represents current in amps
    int num1 = 10;
    //num2 represents resistence
    int num2 = 2;
    int product = num1 * num2;
    cout << " when something has a current of " << num1 << " amps and a resistence of " << num2 << " ohms, then the voltage is " << product << endl;
    return 0;
}
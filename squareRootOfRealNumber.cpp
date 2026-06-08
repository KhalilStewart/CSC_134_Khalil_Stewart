/*
@author: Khalil Stewart
@Date: 6/4/2026
@Purpose: take the square root of a real number
*/

// include required directives/libraries for this program
#include <iostream>
#include <cmath>
using namespace std;

int main (){
    //declare variables for this program
    double num, result;
    //ask the user for a number and store it in the variable num
    cout << " enter a real number: ";
    cin >> num;
    //calculate the square root of the number and store it in the variable result
    result = sqrt(num);
    //print the result to the user
    cout << " the square root of " << num << " is " << result << endl;
    
    return 0;
}
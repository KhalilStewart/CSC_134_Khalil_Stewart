/*
@author: Khalil Stewart
@date:6/3/2026
@purpose: divide two numbers by zero
*/

//include iostream for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard libraary function
using namespace std;

int main(){
    int num1 = 5;
    int quotient = num1 / 0;
    cout << " the quotient of " << num1 << " and " << 0 << " is " << quotient << endl;
    return 0;
}
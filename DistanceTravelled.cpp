/*
@author: Khalil Stewart
@date: 6/7/2026
@purpose: This program calculates the distance travelled using velocity and time.
*/

//include the required libraries/directives for this program
#include <iostream>
using namespace std;

int main() {
    //int num1 will represent velocity in this program
    int num1 = 80;
    //int num2 represents time
    int num2 = 2;
    int product = num1 * num2;
    cout << "the distance travelled of an object moving " <<  num1  << " mph in " << num2 << " hours is " << product << " miles " << endl;
    return 0;
}
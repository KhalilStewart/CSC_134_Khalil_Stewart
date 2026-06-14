/*
@author: Khalil Stewart
@date: 6/14/26
@Purpose: calculate the square footage of a home
*/

#include <iostream>
using namespace std;

int main(){
    int length = 50;
    int width = 32;
    double Area;
    // A = L * W
    Area = length * width;

    cout << " The area of the new home is " << Area << " square feet " << endl;

    return 0;
}
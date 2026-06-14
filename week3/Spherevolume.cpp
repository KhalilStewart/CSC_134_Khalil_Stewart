/*
@Author: Khalil Stewart
@Date: 6/14/26
@Purpose: calculate the volume of a sphere
*/

//include all required libraries/directives
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Equation: A = 4/3 * pi * r * r * r
    float area;
    float fraction = 4.0/3.0;
    float pi = 3.1415;
    float radius = 7;

    area = fraction * pi * radius * radius * radius;
    cout << " the volume of the sphere is " << area << " square feet " << endl;

    return 0;
}
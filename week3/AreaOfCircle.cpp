/*
@Author: Khalil Stewart
@Date: 6/12/26
@purpose: Calculate the area of a circle given the radius
*/

//include all required libraries/directives
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Equation: A = pi * r * r
    float area;
    float pi = 3.1415;
    float radius = 19;

    area = pi * radius * radius;
    cout << " the area of the circle is " << area << " square feet " << endl;

    return 0;
}
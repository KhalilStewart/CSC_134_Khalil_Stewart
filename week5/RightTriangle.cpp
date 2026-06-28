/*
@Author: Khalil Stewart
@Date: 6/23/26
@Purpose: this program calculates the degree of a triangle and determines if it's a right triangle
*/

//include all required libraries/directives
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){

    double x = 3, y = 4;
    //use the arctangent to find the angle in radians
    double angle = atan2(y,x);
    //use double to allow the degrees to be a decimal
    double degrees = angle * (180.0/M_PI);

    //round the result to the second decimal place
    cout << " angle theta in degress is: "<< fixed << setprecision(2) << degrees << endl;

    //find the hypotenuese using x^2 + y^2 = c^2
    double c = sqrt((x*x) + ( y * y));
    //print the hypotenuse
    cout << " hypotenuse c is: " << c << endl;
    

    // if the degrees are 53.13 then it is a 3-4-5 triangle
    if ( degrees = 53.13 ){
        cout << " This is a 3-4-5 triangle " << endl;
    }

    // if conditions are not met then the console prints this
    else {
        cout << " This is NOT a 3-4-5 triangle " << endl;
    }

    //end of program
    return 0;
}
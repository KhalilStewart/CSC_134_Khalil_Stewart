/*
@Author: Khalil Stewart
@Date: 6/14/26
@Purpose: convert temperature from farenheit to celcius
*/

//include required directives/libraries
#include <iostream>
using namespace std;


int main(){
    double celcius;

    // C = (F - 32) * 5/9
    celcius = (80 - 32) * (5.0/9.0);

    cout << " the degree in celcius is " << celcius << endl;

    return 0;
}
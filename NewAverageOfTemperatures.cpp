/*
@Author: Khalil Stewart
@Date: 6/10/26
@Purpose: This program takes calculates the average of three city temperatures
*/

// include all required direcctives/libraries
#include<iostream>
using namespace std;

int main(){
   
    cout << " the average temperature in New York City is 85 " << endl;
    
    cout << " the average temperature in Denvar is 88 " << endl;

    cout << " the average temperature in Pheonix is 106 " << endl;

    //multiply the averages by 0.02
    int num1 = 85 * (double)(0.02);
    int num2 = 88 * (double)(0.02);
    int num3 = 106 * (double)(0.02);

    //add the result to the averages to get the new averages
    cout << " After the temperatures raise by 2 percent, the new temperatures are: " << endl;
    cout << " New York: " << 85 + num1 << endl;
    cout << " Denvar: " <<  88 + num2 << endl;
    cout << " Pheonix: " << 106 + num3 << endl;
}
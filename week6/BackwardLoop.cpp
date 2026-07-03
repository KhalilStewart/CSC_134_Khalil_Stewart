/*
@Author: Khalil Stewart
@Date: 7/2/26
@Purpose: This program uses a loop that counts backwards from 100 to 1
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main(){

    //loop starts at 100 and subtracts until 1
    for( int num = 100; num >= 1; num-- ){

        //print number after each loop
        cout << num << endl;
    }

    //end of program
    return 0;
}
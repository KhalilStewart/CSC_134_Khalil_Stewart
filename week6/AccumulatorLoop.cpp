/*
@Author: Khalil Stewart
@Date: 7/2/26
@Purpose: This program uses an accumulator to count the number of iterations in a for loop
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main(){
    
    //store the accumulator
    int accumulator = 0;

    //loop 100 times
    for (int i = 0; i < 100; i++){

        //accumulator increases after each loop and the final amount is stored
        accumulator += 1;
    }

    //console prints the accumulator value
    cout << " The accumulator value is: " << accumulator << endl;

    //end of program
    return 0;
}
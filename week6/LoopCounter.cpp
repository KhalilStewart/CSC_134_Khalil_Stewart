/*
@Author: Khalil Stewart
@Date: 6/30/26
@Purpose: This program counts the number of times a loop executes and prints the result to console
*/

//include required libraries/directives
#include <iostream>
using namespace std;

int main(){
    int count = 0; //store count as an integer starting from zero

    //loop that executes 10 times
    for (int i = 0; i < 10; i++){
        //increment counter variable
        count++;
        //print the amount of loops completed
        cout << " the loop executed " << count << " times " << endl;
    }

    //end of program
    return 0;
}
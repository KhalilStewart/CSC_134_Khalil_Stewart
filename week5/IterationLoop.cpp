/*
@Author: Khalil Stewart
@Date: 6/26/26
@Purpose: This program uses a while loop that loops until it reaches the 100th iteration
*/

//include required libraries/directives
#include <iostream>
using namespace std;

int main(){

    //store the count
    int counter = 0;

    //while counter is less than 100 the loop continues
    while (counter < 100) {

        //counter starts from 0 and keeps adding up until it reaches 100
        counter++;
    }

    //console prints this message
    cout << " The loop completed " << counter << " iterations. " << endl;

    //end of program
    return 0;
}
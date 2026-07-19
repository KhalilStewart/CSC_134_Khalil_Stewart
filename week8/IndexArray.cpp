/*
@Author: Khalil Stewart
@Date: 7/17/26
@Purpose: This program takes the value of an array's indexes and prints the value of each array element
*/

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 7; //store size of the number list
    int numberList[SIZE] = {1,2,4,8}; //enter the array elements

    //print this message to the console
    cout << "Here are the contents of the array:\n";

    //set initializer as zero and update it until it reaches desired size
    for ( int i = 0; i < SIZE; i++){
        //print the index and its corresponding element
        cout << "Index " << i << ": " << numberList[i] << endl;
    }

    //end of program
    return 0;
}
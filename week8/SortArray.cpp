/*
@Author: Khalil Stewart
@Date: 7/17/26
@Purpose: This program manually sorts the array in acending order by using the selection sort
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main(){

    //store size of array
    const int TOTAL_SIZE = 10;
    //assign numbers in array
    int numbers[TOTAL_SIZE] = {10,90,2,25,44,88,0,4};
    

    //use a buble sort to sort the array's elements
    for (int i = 0; i < TOTAL_SIZE - 1; i++) { 
        for (int j = 0; j < TOTAL_SIZE - 1 - i; j++){
            if(numbers[j] > numbers[j + 1]){
                //swap elements that are next to eachother if they aren't in order
                int temp = numbers[j]; //store number temporarily
                numbers[j] = numbers[j + 1]; //move number j into number[j+1]
                numbers[j + 1] = temp; //put temp in the place of number[j+1]
            }
        }
    }

    //print numbers after being sorted
    cout << "Numbers in acsending order: " << endl;

    //begin a loop that updates 10 times
    for (int i = 0; i < TOTAL_SIZE; i++) {
        //print the numbers during each loop
        cout << numbers[i] << " ";
    }

    //print a new line
    cout << endl;

    //end of program
    return 0;
}
/*
@Author: Khalil Stewart
@Date: 7/14/26
@Purpose: This program uses an array to hold 10 integer elements as grades
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main(){

    const int SIZE = 10; //store the number of grades
    int grade[SIZE];  //array of 10 integers
    int sum = 0;    //store sum as an integer starting at zero
    double average; //store average as a number with a decimal

    //set initializer as 0 and update it until it reaches size
    for (int i = 0; i < SIZE; i++) {
        //prompt the user to enter a grade
        cout << "enter grade " << (i + 1) << ": ";
        //user enters grade
        cin >> grade[i];
        //grade is added to the sum during each loop
        sum += grade[i];
    }

    //calculate the average
    average = sum/SIZE;

    //print a space to seperate the average of the grades and print the average
    cout << "\nThe average of your grades is: " << average << endl;

    //end of program
    return 0;
}
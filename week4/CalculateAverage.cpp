/*
@Author: Khalil Stewart
@Date: 6/17/26
@Purpose: calculate the average of three numbers entered by the user
*/

//include required libraries/directives
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int score1, score2, score3; // Variables to hold numbers
    double average; // Variable to hold the average of the numbers

    // console askes user for three numbers
    cout << " enter three numbers: ";
    // user inputs three numbers
    cin >> score1 >> score2 >> score3;
    // average is the sum of the numbers divided by how many numbers there are
    average = (score1 + score2 + score3) / 3.0;
    // allows the answer to be rounded to a certain decimal place
    cout << fixed << setprecision(1);
    //console prints the message in qoutation marks
    cout << " The average of your three numbers is " << average << endl;

    return 0;
}
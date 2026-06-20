/*
@Author: Khalil Stewart
@Date: 6/17/26
@Purpose: calculate the average of three numbers entered by the user
*/

//include all required directives/libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int score1, score2, score3; // Variables to hold grades
    double average; // Variable to hold average grade

    cout << " enter three grades: "; //prompts the user to enter the user's three grades
    cin >> score1 >> score2 >> score3; 
    // average is the sum of the numbers divided by how many numbers there are
    average = (score1 + score2 + score3) / 3.0;
    //rounds the decimal to the second place
    cout << fixed << setprecision(2);
    
    //repeat the if function to match any average the user recieves
    //between 90 and 100 is an A
    if (average >= 90 and average <= 100) {
        cout << " your grade is an A " << endl;
    }
    //between 80 and 89 is a B
    if (average >= 80 and average <= 89) {
        cout << " your grade is a B " << endl;
    }
    //between 70 and 79 is a C
    if (average >= 70 and average <= 79) {
        cout << " your grade is a C " << endl;
    }
    // between 60 and 69 is a D
    if (average >= 60 and average <= 69) {
        cout << " your grade is a D " << endl;
    }
    //anything below 60 is an F
    if (average < 60) {
        cout << " your grade is an F " << endl;
    }

    return 0;

}
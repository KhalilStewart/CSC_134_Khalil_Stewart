/*
@Author: Khalil Stewart
@Date: 7/3/26
@Purpose: This program asks the user how many times they would like to role a die and responds with a random number between 1 and 6
*/

//Include all required libraries/directives
#include <iostream>
#include <cstdlib> // needed to use rand and srand
#include <ctime> //needed for time
using namespace std;

int main(){
    
    int roll; // store rolls as an integer

    srand(static_cast<unsigned int>(time(0)));

    //prompt user to enter dice rolls
    cout << " How many times do you want to roll the die? ";
    cin >> roll;

    //the die is rolled as many times as the user entered
    for ( int i = 1; i <= roll; i++){
        //store dieroll as a random number between 6 and 1
        int dieroll = rand() % 6 + 1;
        //print roll number and the random number
        cout << " roll " << i << " : " << dieroll << endl;
    }

    //end of program
    return 0;
}
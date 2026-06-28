/*
@Author: Khalil Stewart
@Date: 6/25/26
@Purpose: This program prompts user for 10 grades and finds the average
*/

#include <iostream>
using namespace std;

int main(){
    
    float grade; //stores the grade as a number
    float total; //stores the sum of the grades
    int count = 0; //stores the required count of the grades and starts it as zero

    //while count is less than 10
    while ( count < 10 ){

        //prompts user to enter grade
        cout << " enter grade " << (count + 1) << " : ";
        cin >> grade;

        // total of grades gets added to the grade entered by the user and then that result becomes the new total
        total += grade;
        //count adds up all the way to 10 and until it equals 10 and the loop stops
        count++;

}

//hold value of average as a decimal
float average = total / 10;

//console prints message and average
cout << " your average is: " << average << endl;

//end of program
return 0;
}
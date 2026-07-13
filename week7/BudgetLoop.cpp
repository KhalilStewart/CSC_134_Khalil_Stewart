/*
@Author: Khalil Stewart
@date: 7/12/26
@Purpose: This program takes the users budget for a month and asks for expenses during that month to see if they're over or under their budget
*/

//include all required libraries/directives
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //store budget, expense, and total and start them at 0
    double budget, expense, total = 0.0;

    //prompt the users budget for the month
    cout << " Enter your budget for the month: ";
    //user enters budget
    cin >> budget;

    //prompt the user for their expenses
    cout << "Enter an expense (type -1 to finish): ";
    //user enters expense
    cin >> expense;

    //condition is that if the users expense is not -1, then the user is prompted to enter another expense
    while (expense != -1){

        //add previous total to expense
        total += expense;

        //propmt user for a new expense
        cout << " enter another expense (type -1 to finish): ";
        //user enters expense
        cin >> expense;
    }

    //print a line to seperate the results from the numbers entered by the user
    cout << endl;

    //round total to the 2nd decimal place if needed
    cout << fixed << setprecision(2);
    //print total
    cout << " Your total expense is " << total << endl;

    //print if the total expense is under or over budget
    if ( total > budget ) {
        //print how much the user is over their budget
        cout << " You are over your budget by $" << (total - budget) << endl;
    }

    else if( total < budget ){
        //print how much the user is under their budget
        cout << " You are under your budget by $" << (budget - total) << endl;
    }

    //if the user is not over or under budget
    else {
        //print that the user met their budget
        cout << " you met your budget " << endl;
    }

    //end of program
    return 0;
}
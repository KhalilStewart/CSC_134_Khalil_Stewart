/*
@Author: Khalil Stewart
@Date: 6/30/26
@Purpose: This program takes the scores the user enters, finds the average and prints if they're passing
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main()
{
    int score; //store score as an integer
    int count = 0;  //store count as an integer starting from zero
    int passingScores = 0; //store passing scores as an integer starting from 0
    float total = 0.0f;  //store total as a possible decimal
    bool continueEntering = true; //store continue entering as true

    //condition is continueEntering is true
    while (continueEntering)
    {
        //console prompts user for a a test score between 0-100
        cout << "Enter a test score (0 - 100): ";
        //user inputs score
        cin >> score;

        //scores continue to add up and equal total
        total += score;
        //count of scores continues to add up with each new input from the user
        count++;

        //condition is that score is greater than or equal to 70
        if (score >= 70)
        {
            //if condition is met, then the number of pasing scores increases
            passingScores++;
        }

        //console asks if user wants to enter another score
        cout << "Enter another score? (1 for true, 0 for false): ";
        //if user puts 1 which stands for true because of the boolean operator then the loop restarts
        cin >> continueEntering;
    }

    float average = 0.0f; //store average as a possible decimal

    //condition is that count is greater than zero
    if (count > 0)
    {
        //if condition is met then the averge is stored from the result of dividing total by count
        average = total / count;
    }

    // console prints result
    cout << "\nResults" << endl;
    //console prints lines to seperate the word result from the actual results
    cout << "-------" << endl;
    //console prints the amount of scores entered
    cout << "Scores Entered: " << count << endl;
    //console prints the amount of passing scores
    cout << "Passing Scores: " << passingScores << endl;
    //console prints the average of the scores
    cout << "Average Score: " << average << endl;

    //store class passed as true if the average is greater than or equal to 70
    bool classPassed = average >= 70.0f;

    //console prints the class average passing
    cout << "Class Average Passing: " << classPassed << endl;

    //end of program
    return 0;
}

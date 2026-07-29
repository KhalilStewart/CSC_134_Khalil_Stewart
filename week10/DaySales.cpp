/*
@Author: Khalil Stewart
@Date: 7/27/26
@purpose: This program takes the amount of daily sales and writes a new line with a file
*/

//include all required libraries/directives
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    //store number of days
    int numdays;

    //prompt user to enter the number of days
    cout << "Enter the number of days: ";
    cin >> numdays;

    //open the output file to store the sales values
    ofstream outFile("week9_lab1.txt");

    //check if the file was opened successfully
    if(!outFile) { 
        cout << " error opening file. " << endl;
        return 1;
    }

    //loop to get sales for each day
    for ( int day = 1; day <= numdays; day++){

        //store sales as a number with a possible decimal
        double sales;

        //prompt the user for the sales
        cout << "enter sales for day " << day << ": $";
        cin >> sales;

        //write the sales to the other file
        outFile << sales << endl;
    }

    //close the file after all the sales are written
    outFile.close();

    //print the completion of writing the sales to the output file
    cout << "data of sales has been written to week9_lab1.txt" << endl;

    //end of program
    return 0;
}
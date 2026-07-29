/*
@Author: Khalil Stewart
@Date: 7/27/26
@Purpose: This program writes the sales and the total amount of sales to a file
*/

//include all required libraries/directives
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
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

    //store total as a number with a decimal starting from zero
    double total = 0.0;

    //loop to get sales for each day
    for ( int day = 1; day <= numdays; day++){

        //store sales as a number with a possible decimal
        double sales;

        //prompt the user for the sales
        cout << "enter sales for day " << day << ": $";
        cin >> sales;

        //write the sales to the other file
        outFile << sales << endl;
        //sum up all the sales to equal total
        total += sales;
    }

    //create empty string stream and store it as ss
    stringstream ss; 
    //round the total to two decimal places
    ss << fixed << setprecision(2) << total;

    //write the total to the file
    outFile << endl;
    outFile << "==============" << endl;
    outFile << total << endl;
    outFile << "==============" << endl;

    //close the file after all the sales are written
    outFile.close();

    //print the completion of writing the sales to the output file
    cout << "data of sales has been written to week9_lab1.txt" << endl;

    //end of program
    return 0;
}
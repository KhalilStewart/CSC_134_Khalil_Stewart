/*
@Author: Khalil Stewart
@Date: 6/26/26
@Purpose: This program prompts the user to enter a temperature until they enter the right temperature
*/

//include required libraries/directives
#include <iostream>
using namespace std;

int main(){
    //store the temperature
    float Temperature = 0.0;
    //store required temperature as a float
    float num = 212.34;

    while (Temperature != num){

        //Prompts the user to enter a temperature
        cout << " enter temperature ";
        //user enters temperature
        cin >> Temperature;
    }

    //when loop ends, console prints this message
    cout << " The temperature has been successfully set, thank you. ";

    //end of program
    return 0;
}
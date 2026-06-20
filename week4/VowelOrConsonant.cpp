/*
@Author: Khalil Stewart
@Date: 6/17/26
@Purpose: determine whether or not a letter is a vowel or consonant
*/

//include required libraries/directives
#include <iostream>
using namespace std;

int main(){
    char letter; //holds the letter that the user enters

    cout << " enter an alphabetic character: " << endl;
    cin >> letter;
//have an if function inside of an if function
// the first f function capture the entire alphabet and allows for two else functions to exist
if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')){
    //the inner if function defines what is a constant and what is a vowel
    if ( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
    cout << " your letter is a vowel ";
}
// this else is paired with the second if
    else {
    cout << letter << " is a consonant ";
}}

// the second "else" goes with the first "if" and defines all other characters as invalid
else {
    cout << " invalid input ";
}

return 0;
}
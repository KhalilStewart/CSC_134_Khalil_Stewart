/*
@Author: Khalil Stewart
@Date: 6/13/26
@Purpose: use the c++ string class to print a statement to the console
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string verbiage;
    string age;
    string verbiage_end;

    verbiage = " Today I am";
    age = " 25 ";
    verbiage_end = "years old! ";

    cout << verbiage << age << verbiage_end << endl;

    return 0;
}
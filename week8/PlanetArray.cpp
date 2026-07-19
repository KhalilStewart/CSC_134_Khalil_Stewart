/*
@Author: Khalil Stewart
@Date: 7/15/26
@Purpose: This program prints all 8 planets in our solar system including Pluto
*/

//include all required libraries/directives
#include <iostream>
#include <string>
using namespace std;

int main(){

    const int SIZE = 9;

    //store planets as a string datatype 
    string planets[SIZE] = {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune","Pluto (dwarf planet)"};

    //set initializer as zero and update it 9 times
    for(int i = 0; i < SIZE; i++){
        cout << planets[i] << endl;
    }

    //end of program
    return 0;
}
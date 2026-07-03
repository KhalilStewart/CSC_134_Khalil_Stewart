/*
@Author: Khalil Stewart
@Date: 7/2/26
@Purpose: this program prints a table that shows a number on one side and it squared on the other side
*/

//include all required libraries/directives
#include <iostream>
using namespace std;

int main(){

   const int MIN_NUM = 0, //store minimum value
   MAX_NUM = 100; //store maximum value

   int num; // store number as an integer

   //console prints number and number squared
   cout << " Number Number squared\n ";
   //console prints a line to seperate the numbers from the tables header
   cout << " ----------------------- \n";

   //initialize the minimum value, keep the condition as equal to or less than max, and update the number after each loop
   for (num = MIN_NUM; num <= MAX_NUM; num++)
   //console prtints the num^2 on the right side by placing two tabs between the numbers on the left and the right
   cout << num << "\t\t" << ( num * num ) << endl;

   //end of program
   return 0;
}
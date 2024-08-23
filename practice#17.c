/*Programmer: Melchor Espedillon
Description: Create a program that prompts the user to enter weight of a person in kilograms
and outputs the equivalent weight in pounds.
Time/Date: 7:38/Sept. 28

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variables
   int kilograms;
   float pounds;

   //ask user to enter the weight of the person
   printf("Enter weight in kilograms: ");
   scanf("%d", &kilograms);

   //provide formula of conversion
   pounds= kilograms * 2.2;

   //print output
   printf("The weight of the person converted into pounds is %.2f\n", pounds);

   //terminate program
   return 0;


}

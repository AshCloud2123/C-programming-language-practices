/*
Programmer: Melchor Espedillon
Description: How to use temp variables.
Time/Date: 8:09/Sept. 21
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variable
   float a,b,c;

   //ask user to input the first and second number then assign it to there respected variables.
   printf("Enter the first number: ");
   scanf("%f", &a);
   printf("Enter the second number: ");
   scanf("%f", &b);


   //provide a formula in which the variables flow
   c=a;
   a=b;
   b=c;

   //print the first and second number but already interchanged.

   printf("After swapping, the first number is %.2f\n", a);
   printf("After swapping, the second number is %.2f\n", b);

    getch();








    return 0;
}

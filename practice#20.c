/*Programmer: Melchor Espedillon
Description: Create a program that prompts the user to input the elapsed time for an event in hours, minutes,
and seconds. The program then outputs the elapsed time in seconds.
Time/Date: 10:09/Sept. 28

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //decalre variable
   int hours, minutes, seconds, elapsed_hours, elapsed_minutes, elapsed_sec;


   //User input the data
   printf("Input hours\n");
   scanf("%d", &hours);
   printf("Input minutes\n");
   scanf("%d", &minutes);
   printf("Input seconds\n");
   scanf("%d", &seconds);


   //formula for calculating elapsed time in seconds
   elapsed_hours= hours * 3600;
   elapsed_minutes= minutes * 60;
   elapsed_sec= elapsed_hours + elapsed_minutes + seconds;

   //print out the output
   printf("The total elapsed second is %d\n\n", elapsed_sec);

   //terminate the program

   return 0;


}




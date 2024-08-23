/*Programmer: Melchor Espedillon
Description: Write a program that prompts the user to input the elapsed time for an event in seconds.
The program then outputs the elapsed time in hours, minutes and seconds(for example, if
the elapsed time is 9630 seconds, then the output is 2:40:30).
Time/Date: 5:16/Sept. 30

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variables
    int hours, minutes, seconds, total_elapsed_sec;

    //prompts user to input the seconds
 printf("Input seconds: \n");
 //storing the data into the variable
 scanf("%d", &total_elapsed_sec);

 //provide formula
 hours = (total_elapsed_sec/3600);
 minutes = (total_elapsed_sec -(3600*hours))/60;
 seconds = (total_elapsed_sec -(3600*hours)-(minutes*60));

//print out the output
 printf("H:M:S - %d:%d:%d\n",hours,minutes,seconds);
//terminate the program
 return 0;
}





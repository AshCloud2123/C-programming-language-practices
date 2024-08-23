    /*
Programmer: Melchor Espedillon
Description: Input the verse "computer" then run the program to display the verse.
Time/Date: 7:08/Sept. 21
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variables
   int num1, num2, num3;
   //ask for the phone number
   printf("Input phone number[(xxx)-xxx-xxxx]:");
   //after getting the value put it inside on the variable that you declare
   scanf("(%d)%d%d", &num1, &num2, &num3);
   //print the output
   printf("You entered %d.%d.%d", num1, num2, num3);

    getch();








    return 0;
}

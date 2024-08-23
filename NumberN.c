#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

Midterm practical examination
*/

/*declare a variable and we give it a starting value of 1 on odd, even, and zero since we are going to identify how many odd, even, and zero input */
int main() {
   int odd=1;
   int even=1;
   int zero=1;
   int num;

/* I use a for loop to get a data from the user under the parameter of 20 inputs and identify how many odd, even, and zero there is. */

   for(int i=1; i<20; ++i)
   {
// prompts the user to enter a data

       printf("Enter a number: ");

// store the data into the variable

       scanf("%d", &num);

/* If num is modulo 2 equal to zero it means the number is even so the body of if statement will be executed */

       if(num%2==0)
       {
           even++;
       }

/* If num is modulo 2 equal to 1 it means the number is odd so the body of if statement will be executed */

       else if(num%2==1)
       {
           odd++;
       }

/* If num is equal to 0  the body of if statement will be executed*/
       else if(num==0)
       {
           zero++;
       }
   }
   printf("\n");
//print the output
   printf("Even = %d\nOdd = %d\nZero = %d\n", even, odd, zero);

    return 0;
}

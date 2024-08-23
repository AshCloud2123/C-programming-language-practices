#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

5. Multiplication Table up to a range (entered by the user)
Output
Enter an integer: 12
Enter the range: 8
12 * 1 = 12
12 * 2 = 24
12 * 3 = 36
12 * 4 = 48
12 * 5 = 60
12 * 6 = 72
12 * 7 = 84
12 * 8 = 96

Date: October 26, 2022
Time: 12:50
*/
int main()
 {

 //declare variable
  int n;
  int i;

  //prompts the user to input positive integer
  printf("Enter an integer: ");
  //store the data into the variable
  scanf("%d", &n);

  //execute repetition using for loops
  for (i = 1; i <= 8; ++i)
    {
        //printout result
    printf("%d * %d = %d \n", n, i, n * i);
    }
  //terminate the program
  return 0;
}


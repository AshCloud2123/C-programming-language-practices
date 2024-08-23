#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

*/
int main()
{
    //declare variables
    int num[50];
    int sum;
    //repetition structure that will prompt user to enter number trice
    for(int i=1; i<4; ++i)
    {
        //prompts message to the user to input a number
        printf("Enter num%d: \n", i);
        //stores the data to the data declared
        scanf("%d", &num[i]);
        //every time the user input a data it will be directly added
        sum+=num[i];
    }
    //print out the result
    printf("Sum = %d", sum);
    //terminates the program
    return 0;
}

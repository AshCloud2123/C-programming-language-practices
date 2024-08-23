#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

*/
int main()
{
    //declare the variables
    int para;
    int num[50];
    int sum;

    //prompts a message to the user to enter number as parameter
    printf("Enter number: \n");
    //store the parameter into the variable
    scanf("%d", &para);
    //repetition structure that will prompt user to enter number based on the parameter
    for(int i=1; i<=para; ++i)
    {
        //prompts message to the user to input a number
       printf("Enter number %d: \n", i);
        //stores the data to the data declared
        scanf("%d", &num[i]);
         //every time the user input a data it will be directly added
        sum+=num[i];
    }
    //print out the result
    printf("Sum = %d", sum);
}

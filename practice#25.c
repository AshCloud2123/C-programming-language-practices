#include<stdio.h>
#include<stdlib.h>
/*
practice #25

Programmer: Melchor Espedillon
Description: Create a C program to the following problem. After, write the code in your notes and capture it. Upload it. Upload the c.,main program and image
file to our class code which indicate practice#-#.
*/
int main()
{
    //first we need to declare the variables in where we can store the data from the user
    int num1;
    int num2;
    int num3;

    //prompts the user to input the required data
    printf("Enter the first number: ");
    //we store the data to the variable we make
    scanf("%d", &num1);
    //prompts the user to input the required data
    printf("Enter the second number: ");
    //we store the data to the variable we make
    scanf("%d", &num2);
    //prompts the user to input the required data
    printf("Enter the third number: ");
    //we store the data to the variable we make
    scanf("%d", &num3);


    //using the if statement we are going to find the biggest number
    if(num1>num2 && num2>num3)
    {
        printf("The biggest number is %d", num1);
    }
    if(num2>num3 && num3>num1)
    {
        printf("The biggest number is %d", num2);
    }
    else
    {
        printf("The biggest number is %d", num3);
    }

    //terminate the program

    return 0;
}








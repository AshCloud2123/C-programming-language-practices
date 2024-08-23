#include<stdio.h>
#include<stdlib.h>
/*
practice #26

Programmer: Melchor Espedillon
Description: A student letter grade is calculated according to the following schedule. Write a C program that  accepts a student’s numerical grade, converts the numerical grade to an equivalent letter grade  displays the letter grade
Numerical grade Letter grade
Greater than 100 Not valid marks
Greater than or equal to 90 Your grade is A
Less than 90 but greater than or equal to 80 Your grade is B
Less than 80 but greater than or equal to 70 Your grade is C
Less than 70 but greater than or equal to 60 Your grade is D
Less than 60 Your grade is F

*/

int main()
{
    //first we declare the variables
    int numericalGrade;

    //prompts the user to enter the data
    printf("Enter your numerical grade: ");
    scanf("%d", &numericalGrade);

    //using a if statement we will convert the numerical grade to a letter grading

    //first we provide a condition to execute and if it is true a output will be printed out
    if(numericalGrade>=90 && numericalGrade<=99)
    {
        printf("Your grade is A");
    }
    if(numericalGrade>=80 && numericalGrade<=89)
    {
        printf("Your grade is B");
    }
    if(numericalGrade>=70 && numericalGrade<=79)
    {
        printf("Your grade is C");
    }
    if(numericalGrade>=60 && numericalGrade<=69)
    {
        printf("Your grade is D");
    }
    if(numericalGrade<59)
    {
        printf("Your grade is F");
    }
    //if the the inputed is not on the grading system then it will prompt invalid remarks
    if(numericalGrade>=100)
    {
        printf("Invalid remarks");
    }
    //terminate the program
    return 0;
}








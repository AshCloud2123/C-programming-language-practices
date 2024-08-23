/*Programmer: Melchor Espedillon
Description:A. Write a C program that displays the following prompts:
Enter a number:
Enter a second number:
Enter a third number:
Enter a fourth number:
After the prompt is displayed, your program should use a scanf() function call to accept a
number from the keyboard for the displayed prompt. After the fourth number has been
entered, your program should calculate and display the average should be included in an
appropriate message. Check the average displayed by your program using the following test
data:
Test data set 1: 100, 100, 100, 100
Then, use your program to complete the following table:
Numbers Average
92,98,79,85
86,84,75,86
B. Repeat Exercise 9a, making sure that you use the same variable name, number, for each
number input. Also use the variable sum for the sum of the numbers (Hint: To do this you
must use the statement sum=sum+number; after each number is accepted.)

Time/Date: 9:11/Sept. 30
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variable
    int num1, num2, num3, num4, sum=0, average= 0;

    //prompts the user to input the data required
    printf("Enter a number: \n");
    //store the data to the declared variable
    scanf("%d", &num1);
    //prompts the user to input the data required
    printf("Enter a second number: \n");
     //store the data to the declared variable
    scanf("%d", &num2);
    //prompts the user to input the data required
    printf("Enter a third number: \n");
     //store the data to the declared variable
    scanf("%d", &num3);
    //prompts the user to input the data required
    printf("Enter a fourth number:\n");
     //store the data to the declared variable
    scanf("%d", &num4);

    //to get the sum we need to have the formula

    sum= num1+num2+num3+num4;

    //formula for getting average
    average= sum / 4;

    //print out result
    printf("The average is = %d\n\n", average);

    // declare variable
    int a= (92 + 98 +79 + 85) /4;
    int b= (86 +84 + 75 +86) / 4;

    //print out result with average

    printf("\t\tNumbers\t\t\tAverage\t\n");
    printf("\t\t92,98,79,85\t\t%d\n", a);
    printf("\t\t86,84,75,86\t\t%d\n", b);

    //terminate the program

 return 0;
}





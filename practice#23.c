/*Programmer: Melchor Espedillon
Description: 3. A. Write a C program that displays the following prompts:
Enter the miles driven:
Enter the gallons of gas used:
After each prompt is displayed your program should use a scanf() function call to accept
data from the keyboard for the displayed prompt. After the gallons of gas used has been
entered, your program should calculate and display miles per gallon obtained. This value
should be included in an appropriate message and calculated using the equation miles per
gallon=miles/gallons. Verify your program using the following test data:
Test data set1: Miles=276, Gas=10 gallons.
Test data set2: Miles=200, Gas=15.5 gallons.

When you have completed your verification, use your program to complete the following
table:
Miles driven Galloons used MPG
250 16.00
275 18.00
312 19.54
296 17.39

Time/Date: 8:52/Sept. 30
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variables
    double miles, gallon, total;

    //prompts the user to enter the data
    printf("Enter the miles driven: \n");
    //store it to the specific variable
    scanf("%lf", &miles);
    printf("Enter the gallons of gas used: \n");
    //prompts the user to enter the data
    scanf("%lf", &gallon);
    //store it to the specific variable
    printf("\n\n");

    //execute a formula
    total = miles / gallon;

    //result
    printf("It shows that every gallon of gas is equivalent to: %.2f miles\n\n", total);


    //declare a variable
    double a= 276 / 10, b= 200 / 15.5;
    //print out the result
    printf("Test data set1: Miles=276, Gas=10 gallons.\n %.2f mile/gallon\n\n", a);
    printf("Test data set1: Miles=200, Gas=15.5 gallons.\n %.2f mile/gallon\n\n", b);

    //declare another set of variables
    double e=250 / 16.00, f= 275 / 18.00;
    double c= 312 / 19.54, d=296 / 17.39;
    //print out the result with the specifier
    printf("\tMiles Driven\t\t\tGallon used\t\tMPG\n");
    printf("\t250\t\t\t\t16.00\t\t\t%.2f\n", e);
    printf("\t275\t\t\t\t18.00\t\t\t%.2f\n", f);
    printf("\t312\t\t\t\t19.54\t\t\t%.2f\n", c);
    printf("\t296\t\t\t\t17.39\t\t\t%.2f\n", d);



    //terminate the program

 return 0;
}





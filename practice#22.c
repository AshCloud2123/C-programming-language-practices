/*Programmer: Melchor Espedillon
Description: A. Write a C program that displays the following prompt:
Enter the radius of a circle:
After accepting a value for the radius, your program should calculate and display the
circumference of the circle. Note: circumference=2*3.1416*radius.
B. Check the value displayed by the program written in 20a by calculating the result
manually. After manually determining that the result produced by your program is correct,
use your program to complete the following table:

Radius Circumference
1.0
1.5
2.0
2.5
3.0
3.5

Time/Date: 6:16/Sept. 30
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variables
    double Rcircle, circumference;

    // prompts the user to input the radius
    printf("Enter the radius of a circle: \n");
    //store the data into the declared variable
    scanf("%lf", &Rcircle);

    //formula in getting the circumference of a circle
    circumference = 2 * 3.1416 * Rcircle;

    //print out the result
    printf("\nThe circumference of the circle is %.5f\n\n", circumference);

    //declare another variable
    double a= 1.0;
    //print out the table
    printf("Complete the table below:\n\n");
    printf("Radius          Circumference\n");
    printf("1.0\n");
    printf("1.5\n");
    printf("2.0\n");
    printf("2.5\n");
    printf("3.0\n");
    printf("3.5\n\n");



    //output the result together with the circumference
    printf("Radius          Circumference\n");
    printf("1.0                 %.4f      \n", 2 * 3.1416 * 1.0);
    printf("1.5                 %.4f      \n", 2 * 3.1416 * 1.5);
    printf("2.0                %.4f      \n", 2 * 3.1416 * 2.0);
    printf("2.5                %.4f      \n", 2 * 3.1416 * 2.5);
    printf("3.0                %.4f      \n", 2 * 3.1416 * 3.0);
    printf("3.5                %.4f      \n", 2 * 3.1416 * 3.5);

    //terminate the program
 return 0;
}





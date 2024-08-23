#include<stdio.h>
#include<stdlib.h>
/*practice# 29

Programmer: Espedillon Melchor
1. Write and run a C program that displays a table of 20 temperature conversion from Fahrenheit to
Celsius. The table should start with a Fahrenheit value of 20 degrees and be incremented in values of 4
degrees.

Date: October 26, 2022
Time: 7:41
*/


int main()
{
    //declare variable
    double fahrenheit;
    double celsius;
    int i;


    printf("\tTable\tFahrenheit\tCelsius\n");

    //for loop
    for(fahrenheit=20; fahrenheit<=96; fahrenheit= fahrenheit + 4)
    {
        //formula on how to convert from fahrenheit to celsius
        celsius= (5.0/9.0)*(fahrenheit-32.0);
        //printout the output
        printf("\t%d\t%.2f\t\t%.2f\n",++i, fahrenheit, celsius);
    }
    //terminate the program
    return 0;
}

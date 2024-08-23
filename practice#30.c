#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

2. Write a C program that calculates and displays the amount of money available in a bank account that
initially has 1000 deposited in it and that earns 8 percent interest a year. Your program should display
the amount available at the end of each year for a period of ten years. Use the relationship that the
money available at the end of each year equals the amount of money in the account at the start of the
year plus .08 times the amount available at the start of the year.

Date: October 26, 2022
Time: 8:32
*/
int main()
{
    //declare variable
    int period = 9;
    int initial = 1000;
    double balance = 1000;

    //execute the repetition for loops
    for(int i=0; i<=period; ++i)
    {
        //to get the interest every year this is the formula
        balance = balance * 1.08;
        //print out the result
        printf("Year %d: %.2f\n",(i+1), balance);
    }
    //print out the result
    printf("\nThe deposited amount of %d has grown up to %.2f after %d years", initial, balance, period);

    //terminate the program
    return 0;

}

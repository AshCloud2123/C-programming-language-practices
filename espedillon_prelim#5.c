/*You found an exciting summer job for 5 weeks. It pays 15.50 per hour.
Suppose that the total tax you pay on your summer job income is 14%.
 After paying the taxes, you spend 10% of your net income to buy new clothes
 and other accessories for the next school year and 1% to buy school supplies.
 After buying them, you use 25% of the remaining money to buy savings bonds.
 For each time you spend to buy savings bonds, your parents spend 0.50 to buy
 additional savings bonds for you. Write a program the prompts the user to enter
 the pay rate for an hour and the number of hours you worked each week.
 The program then outputs the following:

a) Your income before and after taxes from your summer job.
b) The money you spend on clothes and other accessories.
c) The money you spend on school supplies.
d) The money you spend to buy savings bonds.
e) The money you spend to buy additional savings bonds for you.*/
#include<stdio.h>
#include<stdlib.h>
//main function
int main()
{
    //declare variable
    double rate_per_hour;
    double workingHours_per_week;
    double total_earning_per_week;
    double tax;
    double clothes;
    double school_supplies;
    double you_bonds;
    double Abonds;

    //prompts the user to input the data
    printf("Enter your rate per hour: \n");
    //store the data to a variable
    scanf("%lf", &rate_per_hour);
    printf("Enter the number of hours you work in a week: \n");
    scanf("%lf", &workingHours_per_week);

    //process of getting the total income throughout the summer job
    total_earning_per_week = rate_per_hour * workingHours_per_week;
    tax = (total_earning_per_week * 0.14);
    clothes = (total_earning_per_week * .10);
    school_supplies = (total_earning_per_week * .1);
    you_bonds = (total_earning_per_week * .25);
    Abonds = (total_earning_per_week * .50);

    printf("Your total earning of the week is %.2f\n", total_earning_per_week);
    printf("Your income before %.2f and %.2f after taxes from your summer job.\n", total_earning_per_week, tax);
    printf("The money you spend on clothes and other accessories = %.2f.\n", clothes);
    printf(" The money you spend on school supplies = %.2f.\n", school_supplies);
    printf("The money you spend to buy savings bonds.= %.2f\n", you_bonds);
    printf("The money you spend to buy additional savings bonds for you.= %.2f\n", Abonds );



    return 0;
}









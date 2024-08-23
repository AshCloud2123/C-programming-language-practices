#include<stdio.h>
#include<stdlib.h>
//main function
int main()
{
    //declare variable and specify what data type
    int years, weeks, days, specified_day;

    //prompts the user to input number
    printf("Enter number of days: \n");
    //store the data to the variable
    scanf("%d", &specified_day);

    //provide a process
    years = (specified_day / 365);
    weeks = (specified_day - (365 * years))/52;
    days = (specified_day - (365 *years) - (weeks * 52));

    //print output
    printf("Y:W:D: = Years:%d Weeks:%d Days:%d", years, weeks, days);
    //terminate the program
    return 0;
}









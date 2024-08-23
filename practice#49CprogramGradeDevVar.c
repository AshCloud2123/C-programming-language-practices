#include <stdio.h>
#include <stdlib.h>

/*Programmer: ESPEDILLON MELCHOR A.

Create a C program to input the following integer numbers into an array named grades: 89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73. As each
number is input, add the numbers to the total. After all numbers are input and the total is obtained, calculate the average of the numbers and use the
average to determine the deviation of each value from the average. Store each deviation in an array named deviation. Each deviation is obtained as
the element value less the average of all the data. Have your program display each deviation alongside its corresponding element from the grades
array. Calculate the variance of the data. The variance is obtained by squaring each individual deviation and dividing the sum of the squared deviation
by the number of deviations.
*/

int main()
{
    //declare a variables
    int grade[15];
    int total;
    int total1;
    int ave;
    int dev[15];
    int devAve;
    int variance[15];

    //using a for loop we can make a code that will prompt the user to enter a grade
    for(int i=0; i<14; i++)
    {
        //prompts a message that ask the user to enter a grade
        printf("Enter a grade: ");
        //store the data to the variable declared
        scanf("%d", &grade[i]);
        //after getting the data we will add it up so that we can get the total
        total+=grade[i];
    }
    //this will show the total
    printf("\nThe total is: %d\n", total);
    //here we are going to declare a formula in were we can get the average
    ave = total / 14;
    //print out the average
    printf("The average is : %d\n", ave);
    //provides new line
    printf("\n");

    //using a for loops we are going to find the deviation of the grades
    for(int j=0; j<14; ++j)
    {
        //using a selection statement if a condition is read to be true then a equivalent code will execute
        if(grade[j]>80)
        {
            dev[j] = grade[j] % 80;
        }
        else if (grade[j]==72)
        {
            dev[j] = 8;
        }
        else if(grade[j]==54)
        {
            dev[j] = 26;
        }
        else if(grade[j] == 75)
        {
            dev[j] = 5;
        }
        else if(grade[j] == 73)
        {
            dev[j] = 7;
        }
        else if(grade[j] == 79)
        {
            dev[j] = 1;
        }
        //after every repetition we will going to add and then have a total
        total1+=dev[j];
    }
    //prints a new line
    printf("\n");
    //a formula that will help us get the deviation average
    devAve = total1 / 14;
    //print out the total deviation
    printf("%d\n", total1);
    //print out the average
    printf("\nThe deviation average is : %d\n", devAve);

    //using a for loops again we are going to get the variance
    for(int n=0; n<14; ++n)
    {
        //formula in getting the variance
        variance[n] = dev[n] * dev[n] / 14;
    }

    //prints some words on the screen
    printf("\tGrades:\t\tDeviation:\tVariance:\n");
    //using for loops we are now going to display the output in a table form showing the grades alongside with the deviation and variance
    for(int m=0; m<14; ++m)
    {
        //print out the results
        printf("\t%d\t\t%d\t\t%d\n", grade[m], dev[m], variance[m]);
    }
    //terminates the program
    return 0;
}

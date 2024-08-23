#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

4. Write a C program that continuously requests a grade to be entered. If the grade is less than 0 or
greater than 100, your program should print an appropriate message informing the user that an invalid
grade has been entered, else the grade should be added to a total. When a grade of 999 is entered the
program should exit the repetition loop and compute and display the average of the valid grades
entered.

Date: October 26, 2022
Time: 11:30
*/
int main()
{
    //declare the variables
    int grade, quant=0;
	double sum=0, avg;
	//prompts the user to enter a valid number and caution user of the parameter
	printf("Note: If you have exited the program without entering a single valid digit, average result will be 'nan' (not a number).\n");

	do
	{
	    //test expression  that will be executed over and over again until the condition is proven false
		printf("\nEnter your grade (Use '999' to exit and calculate the average): ");
		//store the data from user to the assign variable
		scanf("%d",&grade);

		//since we need to setup a program with parameter we need to add selection statement that will terminate the program
		//if the parameter is entered
		if (grade<0 || (grade>999 || (grade>100 && grade<999)))
		{
		    //once the parameter is enter this statement will printout on the screen
			printf("Invalid grade! Please try again.\n");
		}

		else if(grade == 999)
		{
			break;
		}

		else
		{
		    //provide formula
			quant+=1;
			sum+=grade;
		}

		//the condition set up in do while loop
	} while (grade != 999);

	//if the do while loop is already a false and move out of the loop this statement will be printed
	avg=sum/quant;
	printf("\nYour average based on valid numbers you entered: %.2lf",avg);


    //terminate the program
    return 0;
}



#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

Using a do statement, write a C program to accept a grade. The program should request a grade
continuously until invalid grade is entered. An invalid grade is any grade less than 0 or greater than
100. After a valid grade has been entered, your program should display its value.

Date: October 26, 2022
Time: 9:50
*/
int main()
{
   //declare the variable
	int grade;

	do
	{
	    //the test expression of do while loop that will be executed every time the condition is evaluated to true
	    //prompts the user to enter a grade
		printf("Enter your grade: ");
		//stores the data into the variable
		scanf("%d",&grade);

		//selection statement that will help add a parameter of our code
		if (grade>100 || grade<0)
		{
		    //if the if statment is true this will be executed
			printf("Invalid grade.");
			//using the break function after the program read inside the if statement it will be forcibly terminated
			break;
		}

		//if the if statement is proven false then this statement will be executed
		printf("Your grade is %d.\n",grade);

		//condition of do while loop
	} while (grade>=0 && grade<=100);

	//terminate the program
    return 0;
}


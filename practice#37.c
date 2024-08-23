#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

NO ARGUMENTS BUT HAVE RETURN VALUE
*/
//declare the function
int check();
float check1();
double check2();

int main()
{
    //declare a variable
    int choice;
    //using a while loop we can make our code menu driven
    while(1)
    {
        //prints the a letter into the users screen
    printf("SELECT YOUR OPTION!\n");
    //prompts the user to choose
    printf("1.[integer]\n2.[floating point]\n3.[two precision floating point]\n");
    //store the data into the variable declared
    scanf("%d", &choice);
    //using if statement we can forcefully terminate the program once user enter more than 3
    if(choice>3)
    {
        break;
    }
    //prints double next line
    printf("\n\n");

    //use switch statement to cater the choice made by the user
     switch(choice)
     {
         //declare variable
         int result;
         int num;
         //case number 1 the integer
        case 1:
        //calls the value under the function check()
        result = check();
        //prints the result
        printf("The number is %d\n", result);
        //terminate the program
        break;

        //declare variable
        float result1;
        //case number 2 the floating point numbers
        case 2:
        //calls the value under the function check1()
        result1 = check1();
        //prints the result
        printf("The number is %f\n", result1);
         //terminate the program
        break;

        //declare variable
        double result2;
        //case number 3 the 2 precision floating point numbers
        case 3:
        //calls the value under the function check1()
        result2 = check2();
        //prints the result
        printf("The number is %.2lf\n", result2);
        //terminate the program
        break;
     }

      }

      return 0;
}
int check()
{
    int result;
     printf("Enter a [number(1,2,3....)]: \n");
     scanf("%d", &result);
     return result;
}
float check1()
{
    float result1;
    printf("Enter a [number(1.5,2.6....)]: \n");
    scanf(" %f", &result1);
   return result1;
}
double check2()
{
    double result2;
     printf("Enter a [number(1.5,2.6....))]: \n");
    scanf(" %lf", &result2);
    return result2;
}

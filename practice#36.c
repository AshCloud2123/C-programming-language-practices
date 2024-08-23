#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

WITH ARGUMENTS BUT NO RETURN VALUE

*/
//declare function
void check(int num);
void check1(float num1);
void check2(double num2);

int main()
{
    //declare variable
    int choice;
    //Use looping structure to have a menu driven output
    while(1)
    {
        //Printout a word to notify the user
    printf("SELECT YOUR OPTION!\n");
    //prompts the user to enter his/her choice
    printf("1.[integer]\n2.[floating point]\n3.[two precision floating point]\n");
    //store the data into the variable declared
    scanf("%d", &choice);
    //prints next line
    printf("\n\n");

    //base on the user choice a equivalent case will be executed
     switch(choice)
     {
         //the first case will be executed if the user choose the integer
         int num;
        case 1:
        check(num);
        break;

        //the first case will be executed if the user choose the floating point number
        float num1;
        case 2:
        check1(num1);
        break;

        //the first case will be executed if the user choose the two precision floating point number
        double num2;
        case 3:
        check2(num2);
        break;


      }
    }
      return 0;
}
//this function definition is for integer
void check(int num)
{
    int result;
     printf("Enter a [number(1,2,3....)]: \n");
     scanf("%d", &result);
     printf("The number is %d\n", result);
}
//this function definition is for floating point number
void check1(float num1)
{
    float result1;
    printf("Enter a [number(1.5,2.6....)]: \n");
    scanf(" %f", &result1);
    printf("The number is %f\n", result1);
}
//this function definition is for two precision  floating point number
void check2(double num2)
{
    double result2;
     printf("Enter a [number(1.5,2.6....))]: \n");
    scanf(" %lf", &result2);
    printf("The number is %.2lf\n", result2);
}

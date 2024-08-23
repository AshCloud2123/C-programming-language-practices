#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

NO ARGUMENTS BUT HAVE RETRUN VALUE

*/
//declare the faction but no argument
int check();
float check1();
double check2();
int main()
{
    //declare variable inside the main body
    int num;
    //to make it infinite loop I use while repetition
    while(1)
    {
        //prints the a letter into the users screen
    printf("SELECT YOUR OPTION!\n");
    //prompts the user to choose
    printf("1.[integer]\n2.[floating point]\n3.[two precision floating point]\n");
    //store the data into the variable declared
    scanf("%d", &num);
    //prints double next line
    printf("\n\n");

    //use switch statement to cater the choice made by the user
    switch(num)
    {
        //declare variable
        int result;
        float result1;
        double result2;
        int num1;

        //case number 1 the integer
        case 1:
        //calls the value under the function check()
        num1 =check();
        //prints the result
        printf("The number is %d\n", num1);
        //terminate the program
        break;

        //declare variable
        float num2;
        //case number 2 the floating point numbers
        case 2:
        //calls the value under the function check1()
        num2 = check1();
        //prints the result
        printf("The number is %f\n", num2);
        //terminate the program
        break;

        //declare variable
        double num3;
        //case number 3 the 2 precision floating point numbers
        case 3:
        //calls the value under the function check1()
        num3 = check2();
        //prints the result
        printf("The number is %.2lf\n", num3);
        //terminate the program
        break;
    }
    }
}

int check()
{
    int result;
    int num=0;
    printf("Enter a [number(1,2,3....)]: \n");
    scanf("%d", &num);
   result=num;
    return result;
}

float check1()
{
    float result1;
   float num=0.00;
    printf("Enter a [number(1.5,2.6....)]: \n");
    scanf(" %f", &num);
  result1=num;
  return result1;
}
double check2()
{
    double result2;
    double num=0.00;
    printf("Enter a [number(1.5,2.6....))]: \n");
    scanf(" %lf", &num);
  result2=num;
    return result2;
}

#include<stdio.h>
#include<stdlib.h>

//declare main function
int main()
{
    //declare variable and specify what data type
  int num1, num2, num3;

  //prompts the user to input three numbers
  printf("Enter three number:\n ");
  //store the numbers that the user input to specific variable
  scanf("%d%d%d",  &num1, &num2, &num3);

  //perform boolean or decision making using logical operator
  if(num1 == num2 && num1 > num3){

  //if the expression are both evaluated as true then print 1= true
    printf("1");
  }
  //if the expression is evaluated as false provide another action.
  else {
        //if the expression is evaluated as false then output 0 or false.
    printf("0");
  }
  //terminate the programn.

  return 0;
}









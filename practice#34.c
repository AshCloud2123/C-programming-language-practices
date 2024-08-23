#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

NO ARGUMENTS AND NO RETURN VALUE!

*/
int main()
{
    //use the while loop to make it infinite loop and make it a menu driver
    while(1)
    {
        // //recall the value of the function
    check();
    check1();
    check2();
    }
}
//first function that determines the integer
void check()
{
    //declare a variable and initialize it to 0
    int num=0;
    //prompts the user to enter the number
    printf("Enter a [number(1,2,3....)]: \n");
    //store the data into the variable declared
    scanf("%d", &num);
    //print the result
    printf("The number is: %d\n", num);
}
//first function that determines the floating point number
void check1()
{
    //declare a variable and initialize it to 0.00
   float num=0.00;
    //prompts the user to enter the number
    printf("Enter a [number(1.5,2.6....)]: \n");
    //store the data into the variable declared
    scanf(" %f", &num);
  //print the result
  printf("The number is: %f\n", num);

}
//first function that determines the 2 precision floating points
void check2()
{
     //declare a variable and initialize it to 0.00
    double num=0.00;
    //prompts the user to enter the number
    printf("Enter a [number(1.5,2.6....))]: \n");
    //store the data into the variable declared
    scanf(" %lf", &num);
    //print the result
  printf("The number is: %.2f\n", num);
}

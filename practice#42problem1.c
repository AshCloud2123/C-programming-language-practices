#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

*/
#include <stdio.h>
//function with no return value
void tempvert(int choice);

int main()
{
    //declare a variable
    int choice;
    //calls the tempvert function
    tempvert(choice);

    //terminate the program
    return 0;
}
void tempvert(int choice)
{
    //declare a variable
    char letter;
    float temp;
    float celsius;
    float farenheit;
    //prompts the user to enter the temperature
    printf("Enter a temperature: ");
    //store the data into the variable
    scanf("%e", &temp);
    //print out the choices where he can view it in Celsius or Fahrenheit
    printf("Press \n[1] If you want to have temperature in Celcius \n[2] If you want to have temperature in Farenheit: \n");
    //store the choice to the variable
    scanf("%d", &choice);
    //base on the choice a equivalent code will be executed inside the if statement
    if(choice == 1)
    {
        //formula
        celsius = (5.0/9.0)*(temp-32.0);
        //print out the result
        printf("The temperature is = %.2f celsius", celsius);
    }
    else if(choice ==2)
    {
        //formula
        farenheit = ((9.0/5.0)*temp+32.0);
        //print out the result
        printf("The temperature is = %.2f farenheit", farenheit);

    }

}

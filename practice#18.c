/*Programmer: Melchor Espedillon
Description: Create a program that prompts the user to input the temperature in Fahrenheit and output the
equivalent temperature in celcius.
Time/Date: 7:56/Sept. 28

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variables
  int Fahrenheit, celsius;

  //user input the data

  printf("Input temperature in Fahrenheit: ");

  // store it into the variable
  scanf("%d", &Fahrenheit);

  //provide formula of conversion
  celsius = (Fahrenheit - 32) * 5/9;

  //print output

  printf("The temperature is %d celsius", celsius);

  //terminate the program

  return 0;

}

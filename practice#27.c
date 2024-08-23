#include<stdio.h>
#include<stdlib.h>
/*
practice #27

Programmer:  Write a C program that accepts a number followed by one space and then a letter. If the letter
following the number is f, the program is to treat the number entered as a temperature in degrees
Fahrenheit, convert the number to the equivalent degrees Celsius, and print a suitable display
message. If the letter following the number is c, the program is to treat the number entered as a
temperature in Celsius, convert the number to the equivalent degrees Fahrenheit, and print a
suitable display message. If the letter is neither f nor c the program is to print a message that the
data entered is incorrect and terminate. And make use the conversion formulas:
Celsius=(5.0/9.0)*(Fahrenheit-32.0)
Fahrenheit=(9.0/5.0)*Celsius+32.0

*/


int main()
{
    //declare the variable in which we can store the data
  double temp;
  double farenheit;
  double celsius;
  char type;

  //prompts the user to input the data
  printf("Enter temperature: ");
  //store the data to the variable based on their data type
  scanf("%lf %c", &temp, &type);


//use boolean statement based on the data specified by the user
  if ((type == 'F')||(type == 'f'))
  {
      //if the temp type is F then the output will be celsius
    celsius = (5.0/9.0)*(temp-32.0);
    printf("From %.1f Farenheit to %.1f Celsius", temp, celsius);
  }
  else if ((type == 'C') || (type == 'c'))
  {
      //if the temp type is F then the output will be fahrenheit
    farenheit = (9.0/5.0)*temp+32.0;
    printf("From %.1f Celcius to %.1f Farenheit", temp, farenheit);
  }

  //terminate the program
  return 0;
}







#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor


*/
int main()
 {
  //declare the variable
    double sum = 0.10;

    //using a for loop repetition structure we will get the total amount of money after 15 days
    for(int i = 2; i <= 15;)

    {

    //fomula
        sum = sum + sum;

        //print the output
        printf("Total money for day %d is %.2f\n", i, sum);

       //increment
        i++;

    }
    return 0;
}

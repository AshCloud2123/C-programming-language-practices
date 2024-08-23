/*Programmer: Melchor Espedillon
Description: Create a program that implements different specifier
Time/Date: 10:28/Sept. 23

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
   //declare variables
   char letter, word;
   int num=0;
   float num_with_decimal, negaNum_with_decimal, O_num_decimal;




    //Input user the required data and store it on variables

      /*input the data and store it
    to there respective variable*/

    printf("Enter a letter: ");


    scanf("%c", &letter);

    printf("Enter a word: ");
    scanf("%c", &word);

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a number with decimal: ");
    scanf("%f", &num_with_decimal);

    printf("Enter a number with negative decimal: ");
    scanf("%f", &negaNum_with_decimal);

    printf("Enter another number with decimal: ");
    scanf("%f", &O_num_decimal);

    //display the gathered data together with the spcifier
    printf("\n THIS ARE THE FOLLOWING OUTPUT THAT IMPLEMENTS DIFFERENT KINDS OF SPECIFIER, POSITION AND DECIMAL PLACES,\n\n");
    printf("%4c\n%2c\n%5d\n%3d\n%9d\n%11f\n%11f\n%11.2f\n%7.2\fn%7.2f\n%12.3f\n%12.6f\n", letter, letter, word, num, num
           , num_with_decimal, num_with_decimal, num_with_decimal, negaNum_with_decimal, negaNum_with_decimal, O_num_decimal);


           //terminate program
    return 0;



}

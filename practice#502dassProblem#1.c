#include <stdio.h>
#include <stdlib.h>

/*Programmer: ESPEDILLON MELCHOR A.

*/
int sum;
float ave;

int main()
{
   int grades[10][8];

   for(int i=0; i<10; ++i)
   {
       sum = 0;
       printf("Enter the %d student grades", i+1);
       printf("\n");
       for(int j=0; j<8; ++j)
       {
           scanf("%d", &grades[i][j]);
           sum+=grades[i][j];
       }
       ave = sum / 8.0;
       printf("Student %d average = %.2f\n\n", i+1, ave);


    }



}

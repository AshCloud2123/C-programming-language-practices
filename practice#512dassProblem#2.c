#include <stdio.h>
#include <stdlib.h>

/*Programmer: ESPEDILLON MELCHOR A.
CREATE A C PROGRAM TO FIND SUM OF ALL ELEMENTS OF EACH ROW OF A MATRIX
*/
#define ROW 5
#define COL 5
int sum;
float ave;

int main()
{
   int grades[ROW][COL];

   for(int i=0; i<ROW; ++i)
   {
       sum = 0;
       printf("Enter ROW %d\n", i + 1);
       for(int j=0; j<COL; ++j)
       {
           scanf("%d", &grades[i][j]);
           sum+=grades[i][j];
       }
       printf("SUM = %d\n\n", sum);
    }
}

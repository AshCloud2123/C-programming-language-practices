#include <stdio.h>
#include <stdlib.h>

/*Programmer: ESPEDILLON MELCHOR A.
READ AND PRINT A ROW X COLUMN MATRIX, NUMBER OF ROWS AND COLUMNS WILL BE READ THROUGH THE USER.
*/
int row;
int columns;

int main()
{
   int rowsxcol[50][50];

   printf("Enter number of ROWS and COLUMNS: \n");
   scanf("%d%d", &row, &columns);

   for(int i=0; i<row; i++)
   {
       printf("Enter ROW# %d: \n", i+1);
       for(int j=0; j<columns; j++)
       {
           scanf("%d", &rowsxcol[i][j]);
       }

   }
   for(int i=0; i<row; i++)
   {
       printf("\nROW %d with %d columns \n", i+1, columns);
       for(int j=0; j<columns; j++)
       {
           printf("%d ", rowsxcol[i][j]);
       }
       printf("\n");
   }
}

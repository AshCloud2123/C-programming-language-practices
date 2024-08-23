#include <stdio.h>
#include <stdlib.h>

/*Programmer: ESPEDILLON MELCHOR A.
READ AND PRINT A ROW X COLUMN MATRIX, NUMBER OF ROWS AND COLUMNS WILL BE READ THROUGH THE USER.
*/
//4. Create a menu driven, that can add, multiply, subtract
//and divide a 4x4 dimension.

#include <stdio.h>

int main()
{
  char op;
  int i,j, elements[4][4];
  int result0=0, result2=1, result;
  double result1;
  printf("4x4 Matrix Dimension\n");
  printf("Fill the needed elements below\n");



  for(i=0;i<4;i++)
  {
      for(j=0;j<4;j++)
      {
         printf("Enter elements[%d][%d]:", i,j);
         scanf("%d", &elements[i][j]);
      }
  }
  menu:
  printf("OPERATORS:\n");
  printf("Addition [+]\n");
  printf("Subtraction [-]\n");
  printf("Multiplication [*]\n");
  printf("Division [/]\n\n");

  printf("Enter the operator you would like to choose: ");
scanf(" %c", &op);
  if(op=='+')
  {
  for(i=0;i<4;i++)
  {
      printf("\n");
      for(j=0;j<4;j++)
      {
          printf("%d\t", elements[i][j]);
          result0+=elements[i][j];
      }

  }
  printf("\nResult = %d", result0);
  }
  else if(op=='-')
  {
  result=elements[0][0]-elements[0][1];
  result-=elements[0][2];
  result-=elements[0][3];
  result-=elements[1][0];
  result-=elements[1][1];
  result-=elements[1][2];
  result-=elements[1][3];
  result-=elements[2][0];
  result-=elements[2][1];
  result-=elements[2][2];
  result-=elements[2][3];
  result-=elements[3][0];
  result-=elements[3][1];
  result-=elements[3][2];
  result-=elements[3][3];
  for(i=0;i<4;i++)
  {
      printf("\n");
      for(j=0;j<4;j++)
      {
          printf("%d\t", elements[i][j]);
      }

  }
  printf("\nResult = %d", result);
  }
  else if(op=='*')
  {

  for(i=0;i<4;i++)
  {
      printf("\n");
      for(j=0;j<4;j++)
      {
          printf("%d\t", elements[i][j]);
          result2*=elements[i][j];
      }

  }
  printf("\nResult = %d", result2);
  }
  else if(op=='/')
  {
  result1=elements[0][0]/1.0;
  result1/=elements[0][1];
  result1/=elements[0][2];
  result1/=elements[0][3];
  result1/=elements[1][0];
  result1/=elements[1][1];
  result1/=elements[1][2];
  result1/=elements[1][3];
  result1/=elements[2][0];
  result1/=elements[2][1];
  result1/=elements[2][2];
  result1/=elements[2][3];
  result1/=elements[3][0];
  result1/=elements[3][1];
  result1/=elements[3][2];
  result1/=elements[3][3];
  for(i=0;i<4;i++)
  {
      printf("\n");
      for(j=0;j<4;j++)
      {
          printf("%d\t", elements[i][j]);

      }
  }
  printf("\nResult = %.15f", result1);
  }
  else
  {
      printf("Wrong operand. Try again.\n");
      goto menu;

  }
}

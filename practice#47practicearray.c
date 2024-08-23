#include <stdio.h>
#include <stdlib.h>

int main()
{
    //set variables
    int n;
    int grade[50];
    //set number of elements in array
    printf("n: ");
    scanf("%d", &n);
    //use for loop to record the input
    for (int i=0; i<n; i++)
    {
        printf("Enter grade[%d]: ", i+1);
        scanf("%d", &grade[i]);
    }
    //use for loop again to assign grades to the recorded inputs with the use of else if statements
    for (int i=0; i<n; i++)
        {
        if(grade[i]<=69)
        {
            printf("%d is Grade F\n", grade[i]);
        }
        else if(grade[i]>=65 && grade[i]<=60)
        {
          printf("%d is Grade E\n", grade[i]);
        }
        else if(grade[i]>=70 && grade[i]<=74)
        {
          printf("%d is Grade D\n", grade[i]);
        }
        else if(grade[i]>=75 && grade[i]<=79)
        {
          printf("%d is Grade C\n", grade[i]);
        }
        else if(grade[i]>=80 && grade[i]<=89)
        {
          printf("%d is Grade B\n", grade[i]);
        }
        else
        {
          printf("%d is Grade A\n", grade[i]);
        }
        }
    return 0;
}

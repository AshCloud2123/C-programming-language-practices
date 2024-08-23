#include <stdio.h>

int main()
{
    int elmnt[100];
    int max, min, n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);

     for(int i=0; i<n; ++i)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &elmnt[i]);
    }

    max=elmnt[0];
    min=elmnt[0];

    for(int i=1; i<n; i++)
    {
        if(elmnt[i]>max)
        {
            max=elmnt[i];
        }

        else if(elmnt[i]<min)
        {
            min=elmnt[i];
        }
    }
    printf("\nMaximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}


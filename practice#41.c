#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor
FUNCTION WITH NO ARGUMENT AND NO RETURN VALUE
*/
//declare the function with no return value
void count();
int main()
{
     //call the function
    count();
    //terminate the program
    return 0;
}
void count()
{
    //declare variable
    int square;
    int cube;

    //print out a text on the screen
    printf("\tNumber\tSquare\tCube\n");
    //with the use of for loops we can get the cube and square from 1 to 10
    for(int i=1; i<=10; ++i)
    {
        //variables with their value
        square = i * i;
        cube = i * i * i;
        printf("\t%d\t%d\t%d\n", i, square, cube);
    }
}

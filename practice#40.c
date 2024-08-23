#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor
FUNCTION WITH ARGUMENT AND RETURN VALUE
*/
//declare the function with no return value
int count(i);
int main()
{
     //declare a variable to receive the value of count()
    int ret;
    //print out a text on the screen
    printf("\tNumber\tSquare\tCube\n");
    //call the function
    ret = count();
    printf("%d", ret);
    //terminate the program
    return 0;
}
int count()
{
    //declare variable
    int square;
    int cube;
    int ret;

    //with the use of for loops we can get the cube and square from 1 to 10
    for(int i=1; i<=10; ++i)
    {
        //variables with their value
        square = i * i;
        cube = i * i * i;
        //prints out the result
        printf("\t%d\t%d\t%d\n", i, square, cube);
    }
    return ret;
}


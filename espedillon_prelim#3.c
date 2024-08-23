/*create a c program that ask the user to enter two numbers as a reference to perform each relational operators.
*/
#include<stdio.h>
#include<stdlib.h>
//main function
int main()
{
    int num1, num2;


    printf("Enter two numbers: \n");
    scanf("%d%d", &num1, &num2);

    printf("%d == %d is %d\n", num1, num2, num1==num2);
    printf("%d > %d is %d\n", num1, num2, num1>num2);
    printf("%d < %d is %d\n", num1, num2, num1<num2);
    printf("%d <= %d is %d\n", num1, num2, num1<=num2);
    printf("%d >= %d is %d\n", num1, num2, num1>=num2);
    printf("%d != %d is %d\n", num1, num2, num1!=num2);

    return 0;

}









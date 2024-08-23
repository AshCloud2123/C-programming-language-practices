/*Programmer: Melchor Espedillon
Description: Write a program that prompts the user to input 4 digit positive integer. The program
then outputs the digits of the number, one digit per line.
Time/Date: 11:50/Sept. 23*/

 int main()
{
    //declare variables
    int num, a, b, c, d = 0;
    //input positive integer
    printf("Please enter a four digit number: ");
    //store to a variable
    scanf("%d", &num);
    //make a space
    printf("\n");
    // assign formula
    d = num % 10000 / 1000;
    //print output
    printf("%d",d);
    //next line
    printf("\n");
    //make formula
    c = num % 1000 / 100;
    //print output
    printf("%d",c);
    //make a new line
    printf("\n");
    //make formula
    b = num % 100 / 10;
    //print output
    printf("%d",b);
    //make new line
    printf("\n");
    //make a formula
    a = num % 10;
    //print output
    printf("%d",a);
    //new line
    printf("\n");

    //terminate program
    return 0;
}

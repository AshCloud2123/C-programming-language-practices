#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

*/
void membershipA();
void membershipB();
void membershipC();
int main()
{
    int a,b,c;
    char choice;
    while(1)
    {
    printf("\tA. Senior discount 30 percent. \n");
    printf("\tB. Membership bought and paid for 12 or more months in advance, the discount is 15 percent.\n");
    printf("\tC. More than 5 personal training sessions are purchased, the discount on each session is 20 percent.\n");
    printf("\n\n");
    printf("\tEnter A: If you are a Senior.\n\tEnter B: If you want to purchase a membership and pay 12 months in advance.\n\tEnter C: If you want to avail 5 personal trainings.\n");
    scanf("%c", &choice);
    printf("\n");

    switch(choice)
    {
    case 'A':
       membershipA();
       break;

    case 'B':
        membershipB();
        break;

    case 'C':
        membershipC();
        break;
    }
    }

    return 0;
}
void membershipA()
{
    float cost=0.00;
    float discount=0.00;
    float total=0.00;

    printf("Enter the cost of membership[Example 500]: ");
    scanf("%f", &cost);
    printf("\n");
    discount = cost * 0.3;
    total = cost - discount;
    printf("\tThe cost is %.2f\n", cost);
    printf("\tThe discount is %.2f\n", discount);
    printf("\tThe total amount you need to pay with discount is %.2f\n", total);
     printf("\n");
}

void membershipB()
{
    float cost=0.00;
    float discount=0.00;
    float total=0.00;

    printf("Enter the cost of membership: ");
    scanf("%f", &cost);
    printf("\n");
    discount = cost * 0.15;
    total = cost - discount;
    printf("The cost is %.2f\n", cost);
    printf("The discount is %.2f\n", discount);
    printf("The total amount you need to pay with discount is %.2f\n", total);
    printf("\n");

}
void membershipC()
{
    float cost=0.00;
    float discount=0.00;
    float total=0.00;

    printf("Enter the cost of membership: ");
    scanf("%f", &cost);
    printf("\n");
    discount = cost * 0.2;
    total = cost - discount;
    printf("The cost is %.2f\n", cost);
    printf("The discount is %.2f\n", discount);
    printf("The total amount you need to pay with discount is %.2f\n", total);
     printf("\n");
}

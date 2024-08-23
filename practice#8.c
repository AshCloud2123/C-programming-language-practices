#include <stdlib.h>
#include <stdio.h>
void usd();
void eunion();
void yen();
void singDollar();
void yuan();
void austDollar();
float amount;
int main()
{
    int choice;

     printf("PLEASE INPUT YOUR CHOICE: \n");
     printf("[0] EXIT!\n");
     printf("[1] UNITE STATE DOLLARS\n");
     printf("[2] EUROS\n");
     printf("[3] JAPANESE YEN\n");
     printf("[4] SINGAPORE DOLLARS\n");
     printf("[5] CHINESE YUAN\n");
     printf("[6] AUSTRALIAN DOLLARS\n");

     scanf("%d", &choice);

     switch(choice)
     {
    case 0:
         return;
        break;

    case 1:
        usd();
        break;
    case 2:
        eunion();
        break;
     }


}
void usd()
{
    float dollar;

    printf("ENTER AMOUNT: ");
    scanf("%f", &amount);

    dollar = amount * 55.11;

    printf("Peso = %.2f to US DOLLARS = %.2f", amount, dollar);

}


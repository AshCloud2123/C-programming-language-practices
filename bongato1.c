#include <stdio.h>

int main()
{
  float amount;
  float rupee, dollar, yuan, euro; //variables you declare
  int choice;

  printf("\t\t==========================================================================================\n"); //here this is the designs you can see on your screen
  printf("\n\t\t\t\t\t\t  Following are the Choices:\n");
  printf("\t\t\t\t\t\t\tEnter 1: Ruppe\n");
  printf("\t\t\t\t\t\t\tEnter 2: Dollar\n"); //this are the choices the user can chose
  printf("\t\t\t\t\t\t\tEnter 3: Yuan\n");
  printf("\t\t\t\t\t\t\tEnter 4: Euro\n");
  printf("\t\t==========================================================================================\n");
  printf("\t\t\t\t\t\t     Enter your choice: ");
  scanf("%d", &choice); //it is where you will store the user chose from the currency above

  system("cls"); // this is the function that can use to clear the text on the screen
  printf("\n\n\n\n\n\n\n\n"); //prints next line so that the text will appear in the middle of screen
  printf("\t\t\t\t\t\tEnter the amount you want to convert?\n");
  printf("\n\n");
  printf("\t\t\t\t\tEnter amount: ");
  scanf("%f", &amount); // store the amount the user enter
  system("cls");
  switch (choice) //switch case that will execute whatever the user chose upon the program
  {
    case 1: // Ruppe Conversion
        rupee = amount * 0.67;
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t1 Peso = 0.67 Rupee\n\n");
        printf("\t\t\t\t\t\t%.2f Peso =  %.2f ruppe", amount, rupee);
        getch();
        break;

    case 2: // Dollar Conversion
        dollar = amount * 54.76;
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t1 Peso = 54.76 Dollar\n\n");
        printf("\t\t\t\t\t%.2f Peso =  %.2f dollar", amount, dollar);
        getch();
        break;

    case 3: // Yuan Conversion
        yuan = amount * 8.08;
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t1 Peso = 8.08 Yuan\n\n");
        printf("\t\t\t\t\t%.2f Peso =  %.2f Yuan", amount, yuan);
        getch();
        break;

    case 4: // Euro Conversion
        euro = amount * 58.73;
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t1 Peso = 58.73 Euro\n\n");
        printf("\t\t\t\t\t%.2f Peso =  %.2f Yuan", amount, euro);
        getch();
        break;

     //Default case
    default:
        printf("\nInvalid Input"); //if the user does'nt enter the required requirements
  }

  return 0;
}

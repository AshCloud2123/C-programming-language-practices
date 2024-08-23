#include <stdio.h>
#include <stdlib.h>

void votes1();
void votes2();
void leadingVotes();

   char candidate1[1][100], candidate2[1][100], candidate3[1][100];
   char candidate4[1][100], candidate5[1][100], candidate6[1][100];
   char candidate7[1][100], candidate8[1][100], candidate9[1][100];
   char candidate10[1][100], candidate11[1][100], candidate12[1][100];


   int votesCount1=0, votesCount2=0, votesCount3=0;
   int votesCount4=0, votesCount5=0, votesCount6=0;
   int votesCount7=0, votesCount8=0, votesCount9=0;
   int votesCount10=0, votesCount11=0, votesCount12=0;

int main()
{
    while(1)
  {

 int choices;

    printf("\n************************************************************\n");
    printf("\************************************************************\n");
    printf("********   ==ELECTION FOR CLASSROOM OFFICER==  ***********\n");
    printf("************************************************************\n");
    printf("************************************************************\n\n");

    printf("1. Enter Candidates\n");
    printf("2. Find The Vote Counts\n");
    printf("3. Find Leading Candidates\n");
    printf("0. Exit\n");

    printf("\nPlease enter your choice from 0-3:  ");
    scanf("%d", &choices);

    printf("\n");

    switch(choices)
    {
    case 1:
        votes1();
        break;
    case 2:
        votes2();
        break;
    case 3:
        leadingVotes();
        break;
    case 0:
         return;
         break;
    }
    printf("\n");
}
}

void votes1()
{

   int choice;
   system("cls");
   printf("=======CANDIDATES=======\n");
   printf("\nPRESIDENT\n");
   printf("1. ");
   scanf(" %[^\n]s", &candidate1);
   printf("2. ");
   scanf(" %[^\n]s", &candidate2);
   printf("3. ");
   scanf(" %[^\n]s", &candidate3);

   printf("\nEnter your choice(1-3): ");
   scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        votesCount1++;
         break;
    case 2:
         votesCount2++;
          break;
    case 3:
         votesCount3++;
          break;
    }

   printf("\n\nVICE PRESIDENT\n");
   printf("1. ");
   scanf(" %[^\n]s", &candidate4);
   printf("2. ");
   scanf(" %[^\n]s", &candidate5);
   printf("3. ");
   scanf(" %[^\n]s", &candidate6);

   printf("\nEnter your choice(1-3): ");
   scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        votesCount4++;
         break;
    case 2:
         votesCount5++;
          break;
    case 3:
         votesCount6++;
          break;


    }

   printf("\n\nSECRETARY\n");
   printf("1. ");
   scanf(" %[^\n]s", &candidate7);
   printf("2. ");
   scanf(" %[^\n]s", &candidate8);
   printf("3. ");
   scanf(" %[^\n]s", &candidate9);

   printf("\nEnter your choice(1-3): ");
   scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        votesCount7++;
         break;
    case 2:
         votesCount8++;
          break;
    case 3:
         votesCount9++;
          break;
    }

   printf("\n\nTREASURER\n");
   printf("1. ");
   scanf(" %[^\n]s", &candidate10);
   printf("2. ");
   scanf(" %[^\n]s", &candidate11);
   printf("3. ");
   scanf(" %[^\n]s", &candidate12);

   printf("\nEnter your choice(1-3): ");
   scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        votesCount10++;
         break;
    case 2:
         votesCount11++;
          break;
    case 3:
         votesCount12++;
          break;
    }

    printf("\n");
    printf("---------------------THANKS FOR VOTING!!!---------------------");

}

void votes2()
{
    system("cls");
    printf("\n\n=======VOTE COUNTS#=======\n\n");

    printf("PRESIDENT");
    printf("\n %s - [%d] ", candidate1, votesCount1);
    printf("\n %s - [%d] ", candidate2, votesCount2);
    printf("\n %s - [%d] ", candidate3, votesCount3);

    printf("\n");

    printf("\nVICE PRESIDENT");
    printf("\n %s - [%d] ", candidate4, votesCount4);
    printf("\n %s - [%d] ", candidate5, votesCount5);
    printf("\n %s - [%d] ", candidate6, votesCount6);

    printf("\n");

    printf("\nSECRETARY");
    printf("\n %s - [%d] ", candidate7, votesCount7);
    printf("\n %s - [%d] ", candidate8, votesCount8);
    printf("\n %s - [%d] ", candidate9, votesCount9);

    printf("\n");

    printf("\nTREASURER");
    printf("\n %s - [%d] ", candidate10, votesCount10);
    printf("\n %s - [%d] ", candidate11, votesCount11);
    printf("\n %s - [%d] ", candidate12, votesCount12);

    printf("\n");
}

void leadingVotes()
{
    system("cls");
    printf("=======LEADING VOTES=======\n\n");

    printf("PRESIDENT");

        if(votesCount1>votesCount2 && votesCount1>votesCount3)
        {
            printf("\n%s\n", candidate1);
        }
        else if(votesCount2>votesCount1 && votesCount2>votesCount3)
        {
            printf("\n%s\n", candidate2);
        }
        else if(votesCount3>votesCount1 && votesCount3>votesCount2)
        {
             printf("\n%s\n", candidate3);
        }

      printf("\nVICE PRESIDENT");

         if(votesCount4>votesCount5 && votesCount4>votesCount6)
        {
            printf("\n%s\n", candidate4);
        }
        else if(votesCount5>votesCount4 && votesCount5>votesCount6)
        {
            printf("\n%s\n", candidate5);
        }
        else if(votesCount6>votesCount4 && votesCount6>votesCount5)
        {
            printf("\n%s\n", candidate6);
        }

      printf("\nSECRETARY");

        if(votesCount7>votesCount8 && votesCount7>votesCount9)
        {
            printf("\n%s\n", candidate7);
        }
        else if(votesCount8>votesCount7 && votesCount8>votesCount9)
        {
            printf("\n%s\n", candidate8);
        }
        else if(votesCount9>votesCount7 && votesCount9>votesCount8)
        {
            printf("\n%s\n", candidate9);
        }

       printf("\nTREASURER");

        if(votesCount10>votesCount11 && votesCount10>votesCount12)
        {
            printf("\n%s\n", candidate10);
        }
        else if(votesCount11>votesCount10 && votesCount11>votesCount12)
        {
            printf("\n%s\n", candidate11);
        }
        else if(votesCount12>votesCount10 && votesCount12>votesCount11)
        {
            printf("\n%s\n", candidate12);
        }
        else
        {
            printf("\n---------------------NO WIN SITUATION!!!---------------------\n");
        }

        printf("\n");

        getch();
        system("cls");
}


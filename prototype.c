#include <stdio.h>
#include <stdlib.h>
    char firstname[10];
    char lastname[10];
    char email[10];
    char place[15];
    long long int cellnumber;
int main()
{

    void price(),place1(),identity(),flights();
    while(1)
    {

    int choice;
    printf("\t\t==========================================================================================\n\t\t");
    printf("\t\t\t\tPLEASE CHOOSE SERVICE BELOW\t\t\t\t\n");
    printf("\t\t==========================================================================================\n\n\t\t");
    printf("\n\n");
    printf("\t\t\t\t\t\tPRESS (0,1,2,3):\t\t\t\t\n\n");
    printf("\t\t\t\t\t =====================================\n");
    printf("\t\t\t\t\t\t[0] EXIT\t\t\t\t\n");
    printf("\t\t\t\t\t\t[1] BOOK!\t\t\t\t\n");
    printf("\t\t\t\t\t\t[2] AVAILABLE FLIGHTS!\t\t\t\t\n");
    printf("\t\t\t\t\t\t[3] FLIGHT SCHEDULE!\t\t\t\t\n");
    printf("\t\t\t\t\t =====================================\n\n");
    printf("\t\t\t\t\t\tPLEASE ENTER (0-3):");
    scanf("%d", &choice);

    switch(choice)
    {
    case 0:
        return;
        break;

    case 1:
        identity();
    break;
    system("cls");

    case 2:
        place1();
    break;

    case 3:
        flights();
    break;

    default:
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
        printf("\t\t\t\t\t\t  PLEASE SELECT FROM [0-3]\n");
        printf("\t\t\t\t\t\t\tPRESS ANY KEY!\n");
        printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
    }
    getch();
    system("cls");
}
}

void place1()
{
    int choice;
    system("cls");
    printf("\t\t\t\t\t---------------------------------------");
    printf("\n\t\t\t\t\t  THIS ARE THE AVAILABLES DESTINATION!\n");
    printf("\t\t\t\t\t---------------------------------------");
    printf("\n\n\t\t\t\t\t\t1. CEBU to BATANGAS\n");
    printf("\t\t\t\t\t\t2. CEBU to LEYTE\n");
    printf("\t\t\t\t\t\t3. CEBU to COTABATO\n");
    printf("\t\t\t\t\t\t4. CEBU to BOHOL\n");
    printf("\t\t\t\t\t\t5. CEBU to MANILA\n");
    printf("\t\t\t\t\t\t6. CEBU to SULTAN KUDARAT\n");
    printf("\n");
    printf("\t\t\t\t\t\tEnter[1-6] to view the prices!\n\t\t\t\t\t\tEnter[0] to exit!");
    printf("\n\n\t\t\t\t\t\tPlease enter choice: ");
    scanf("%d", &choice);
    int exit;
    if(choice==0)
    {
        return;
    }
    else if(choice==1)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t  CEBU TO BATANGAS:\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = 950 Pesos\n");
        printf("\t\t\t\t\t\tROUND TRIP = %1,900 Pesos\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\n\n\t\t\t\t\t\tENTER [0] TO EXIT: ");
        scanf("%d", &exit);
        if(exit==0)
        {
            return;
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
            printf("\t\t\t\t\t\t\t  ERROR!!!!\n");
            printf("\t\t\t\t\t\t\tPRESS ANY KEY!\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
        }
    }
    else if(choice==2)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t  CEBU TO LEYTE:\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = 650 Pesos\n");
        printf("\t\t\t\t\t\tROUND TRIP = 1,300 Pesos\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\n\n\t\t\t\t\t\tENTER [0] TO EXIT: ");
        scanf("%d", &exit);
        if(exit==0)
        {
            system("cls");
            return;
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
            printf("\t\t\t\t\t\t\t  ERROR!!!!\n");
            printf("\t\t\t\t\t\t\tPRESS ANY KEY!\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
        }
    }
    else if(choice==3)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t  CEBU TO COTABATO:\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = 1,200 Pesos\n");
        printf("\t\t\t\t\t\tROUND TRIP = 2,400\n");
        printf("\t\t\t\t\t----------------------------------------\n");
        printf("\n\n\t\t\t\t\t\tENTER [0] TO EXIT: ");
        scanf("%d", &exit);
        if(exit==0)
        {
            system("cls");
            return;
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
            printf("\t\t\t\t\t\t\t  ERROR!!!!\n");
            printf("\t\t\t\t\t\t\tPRESS ANY KEY!\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
        }
    }
    else if(choice==4)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\t\t\t\t\t\t  CEBU TO BOHOL:\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = 700 Pesos\n");
        printf("\t\t\t\t\t\tROUND TRIP = 1,400 Pesos\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\n\n\t\t\t\t\t\tENTER [0] TO EXIT: ");
        scanf("%d", &exit);
        if(exit==0)
        {
            system("cls");
            return;
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
            printf("\t\t\t\t\t\t\t  ERROR!!!!\n");
            printf("\t\t\t\t\t\t\tPRESS ANY KEY!\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
        }
    }
    else if(choice==5)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\t\t\t\t\t\t  CEBU TO MANILA\n\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = 1,100 Pesos\n");
        printf("\t\t\t\t\t\tROUND TRIP = 2,200 Pesos\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\n\n\t\t\t\t\t\tENTER [0] TO EXIT: ");
        scanf("%d", &exit);
        if(exit==0)
        {
            system("cls");
            return;
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
            printf("\t\t\t\t\t\t\t  ERROR!!!!\n");
            printf("\t\t\t\t\t\t\tPRESS ANY KEY!\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
        }
    }
    else if(choice==6)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\t\t\t\t\t\t CEBU TO SULTAN KUDARAT\n\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = 1,300 Pesos\n");
        printf("\t\t\t\t\t\tROUND TRIP = 2,600 Pesos\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\n\n\t\t\t\t\t\tENTER [0] TO EXIT: ");
        scanf("%d", &exit);
        if(exit==0)
        {
             system("cls");
            return;
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
            printf("\t\t\t\t\t\t\t  ERROR!!!!\n");
            printf("\t\t\t\t\t\t\tPRESS ANY KEY!\n");
            printf("\t\t\t\t\t'''''''''''''''''''''''''''''''''''''''''''''\n");
        }
    }
    else
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\t\t\t\t\t\t\tERROR!\n");
        printf("\t\t\t\t\t\t   PLEASE ENTER 0-6\n");
        printf("\t\t\t\t\t------------------------------------------\n");
    }
getch();
system("cls");

}
void flights()
{
    int day;
    system("cls");
    printf("\t\t\t\t========================================================");
    printf("\n\t\t\t\t\t\tCHOOSE THE DAY YOU WANT TO GO!");
    printf("\n\t\t\t\t========================================================\n");
    printf("\n\t\t\t\t\t\t\t1. MONDAY\n");
    printf("\t\t\t\t\t\t\t2. TUESDAY\n");
    printf("\t\t\t\t\t\t\t3. WEDNESDAY\n");
    printf("\t\t\t\t\t\t\t4. THURSDAY\n");
    printf("\t\t\t\t\t\t\t5. FRIDAY\n");
    printf("\t\t\t\t\t\t\t6. SATURDAY\n");
    printf("\t\t\t\t\t\t\t7. SUNDAY\n");
    printf("\n\t\t\t\t\t\tEnter number (1-7): ");

    scanf("%d", &day);

    if(day==1)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tThere are 3 available flight!\n");
        printf("\t\t\t\t\t\t1. CEBU to BATANGAS\n");
        printf("\t\t\t\t\t\t2. CEBU to LEYTE\n");
        printf("\t\t\t\t\t\t3. CEBU to MANILA\n");
        printf("\t\t\t\t\t---------------------------------------\n\n\n");
        printf("\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");

        return;

    }
    if(day==2)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tThere are 2 available flight!\n");
        printf("\t\t\t\t\t\t1. CEBU to BATANGAS\n");
        printf("\t\t\t\t\t\t2. CEBU to BOHOL\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");

        return;

    }
    if(day==3)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tThere are 3 available flight!\n");
        printf("\t\t\t\t\t\t1. CEBU to BATANGAS\n");
        printf("\t\t\t\t\t\t2. CEBU to BOHOL\n");
        printf("\t\t\t\t\t\t3. CEBU to COTABATO\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");

        return;

    }
    if(day==4)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tThere are 4 available flight!\n");
        printf("\t\t\t\t\t\t1. CEBU to BATANGAS\n");
        printf("\t\t\t\t\t\t2. CEBU to BOHOL\n");
        printf("\t\t\t\t\t\t3. CEBU to COTABATO\n");
        printf("\t\t\t\t\t\t4. CEBU to MANILA\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");

        return;

    }
    if(day==5)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tThere are 6 available flight!\n");
        printf("\t\t\t\t\t\t1. CEBU to BATANGAS\n");
        printf("\t\t\t\t\t\t2. CEBU to BOHOL\n");
        printf("\t\t\t\t\t\t3. CEBU to COTABATO\n");
        printf("\t\t\t\t\t\t4. CEBU to MANILA\n");
        printf("\t\t\t\t\t\t5. CEBU to LEYTE\n");
        printf("\t\t\t\t\t\t6. CEBU to SULTAN KUDARAT\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");

        return;
    }
    if(day==6)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tThere are 1 available flight!\n");
        printf("\t\t\t\t\t\t1. CEBU to BATANGAS\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");

        return;
    }
    if(day==7)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tThere are 3 available flight!\n");
        printf("\t\t\t\t\t\t1. CEBU to MANILA\n");
        printf("\t\t\t\t\t\t2. CEBU to LEYTE\n");
        printf("\t\t\t\t\t\t3. CEBU to SULTAN KUDARAT\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");

        return;
    }
     else if(day<1 || day>7)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\t\t\t\t\t____________________________________\n");
        printf("\t\t\t\t\t\t   ERROR!!!!!\n");
        printf("\t\t\t\t\t\t  ENTER 1-7!!!!!\n");
        printf("\t\t\t\t\t\tPRESS ANY KEY!!!!!");
        return;

    }
    getch();
    system("cls");
 }
void identity()
{
    int choice;


    system("cls");
    printf("\n\tEnter First Name: ");
    scanf(" %s", firstname);
    printf("\tEnter Last Name: ");
    scanf(" %s", lastname);
    printf("\tEnter Email: ");
    scanf(" %s", email);
    printf("\tEnter cell number: ");
    scanf("%lld", &cellnumber);
    printf("\n\n");
    printf("\t\t\t\t\tYOUR INFORMATION IS RECORDED SUCCESSFULLY!\n");
    printf("\t\t\t\t\t\tPLEASE SELECT DESTINATION!");
    printf("\n\n\t\t\t\t\t\t1. CEBU to BATANGAS\n");
    printf("\t\t\t\t\t\t2. CEBU to LEYTE\n");
    printf("\t\t\t\t\t\t3. CEBU to COTABATO\n");
    printf("\t\t\t\t\t\t4. CEBU to BOHOL\n");
    printf("\t\t\t\t\t\t5. CEBU to MANILA\n");
    printf("\t\t\t\t\t\t6. CEBU to SULTAN KUDARAT\n");
    printf("\n\t\t\t\t\t\tEnter your choice: ");
    scanf("%d", &choice);

    int trip;
    if(choice==1)
    {

        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
                system("cls");
               printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: %s","BATANGAS\n");
                printf("\n\t\t\t\t\t\t\tFEE: 950 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
            }
            else
            {
                system("cls");
               printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: %s","BATANGAS\n");
                printf("\n\t\t\t\t\t\t\tFEE: 1,900 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
            }
        }
         printf("\n\t\t\t\t\t-----------------------------------------");
         printf("\n\t\t\t\t\t    THANK YOU FOR CHOSING OUR AIRLINE!\t\n");
        printf("\t\t\t\t\t-----------------------------------------");
        printf("\n\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");
        return;

    }
    if(choice==2)
    {
        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: LEYTE\n");
                printf("\n\t\t\t\t\t\t\tFEE: 650 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
            }
            else
            {
                system("cls");
              printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: LEYTE\n");
                printf("\n\t\t\t\t\t\t\tFEE: 1,300 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------");
            }
        }
        printf("\n\t\t\t\t\t-----------------------------------------");
         printf("\n\t\t\t\t\t    THANK YOU FOR CHOSING OUR AIRLINE!\t\n");
        printf("\t\t\t\t\t-----------------------------------------");
        printf("\n\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");
        return;
    }
    if(choice==3)
    {

        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
               system("cls");
                printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: COTABATO\n");
                printf("\n\t\t\t\t\t\t\tFEE: 1,200 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------");
            }
            else
            {
                system("cls");
               printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: COTABATO\n");
                printf("\n\t\t\t\t\t\t\tFEE: 2,400 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------");
            }
        }
         printf("\n\t\t\t\t\t-----------------------------------------");
         printf("\n\t\t\t\t\t    THANK YOU FOR CHOSING OUR AIRLINE!\t\n");
        printf("\t\t\t\t\t-----------------------------------------");
        printf("\n\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");
        return;
    }
    if(choice==4)
    {
        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: BOHOL\n");
                printf("\n\t\t\t\t\t\t\tFEE: 700 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------");
            }
            else
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: BOHOL\n");
                printf("\n\t\t\t\t\t\t\tFEE: 1,400 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------");
            }
        }
         printf("\n\t\t\t\t\t-----------------------------------------");
         printf("\n\t\t\t\t\t    THANK YOU FOR CHOSING OUR AIRLINE!\t\n");
        printf("\t\t\t\t\t-----------------------------------------");
        printf("\n\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");
        return;
    }
     if(choice==5)
    {
        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: MANILA\n");
                printf("\n\t\t\t\t\t\t\tFEE: 1,100 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------");
            }
            else
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: MANILA\n");
                printf("\n\t\t\t\t\t\t\tFEE: 2,200 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------");
            }
        }
         printf("\n\t\t\t\t\t-----------------------------------------");
         printf("\n\t\t\t\t\t    THANK YOU FOR CHOSING OUR AIRLINE!\t\n");
        printf("\t\t\t\t\t-----------------------------------------");
        printf("\n\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");
        return;
    }
    if(choice==6)
    {
        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
               system("cls");
                printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: SULTAN KUDARAT\n");
                printf("\n\t\t\t\t\t\t\tFEE: 1,300 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------");
            }
            else
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
                printf("\t\t\t\t\t\tEmail: %s", email);
                printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
                printf("\n\t\t\t\t\tDestination: SULTAN KUDARAT\n");
                printf("\n\t\t\t\t\t\t\tFEE: 2,600 Pesos");
                printf("\n\t\t\t\t\t-----------------------------------------");
            }
        }
         printf("\n\t\t\t\t\t-----------------------------------------");
         printf("\n\t\t\t\t\t    THANK YOU FOR CHOSING OUR AIRLINE!\t\n");
        printf("\t\t\t\t\t-----------------------------------------");
        printf("\n\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");
        return;
    }
     else if(choice<1 || choice>6)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
         printf("\n\t\t\t\t\t_________________________________________\n");
        printf("\n\t\t\t\t\t\t\tERROR!!!!!\n");
         printf("\t\t\t\t\t_________________________________________");
         printf("\n\n\t\t\t\t\t\t   PRESS ANY KEY!!!!!\n");
    }




    getch();
    system("cls");
}

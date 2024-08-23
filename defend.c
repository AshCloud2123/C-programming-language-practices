#include <stdio.h>
#include <stdlib.h>
    char firstname[10];
    char lastname[10];
    char email[10];
    char place[15];
    long long int cellnumber;
int main(void)
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
    printf("\t\t\t\t\t\t1. BOOK!\t\t\t\t\n");
    printf("\t\t\t\t\t\t2. AVAILABLE FLIGHTS!\t\t\t\t\n");
    printf("\t\t\t\t\t\t3. SCHEDULE!\t\t\t\t\n");
    printf("\t\t\t\t\t =====================================\n\n");
    printf("\t\t\t\t\t\tPLEASE ENTER (1-3):");
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
    }
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
    printf("\t\t\t\t\t\tEnter[1] to view the prices!\n\t\t\t\t\t\tEnter[0] to exit!");
    printf("\n\n\t\t\t\t\t\tPlease enter choice: ");
    scanf("%d", &choice);
    if(choice==0)
    {
        return;
    }
    else if(choice==1)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tCEBU TO BATANGAS:\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = %d\n", 950);
        printf("\t\t\t\t\t\tROUND TRIP = %d\n", 1900);
        printf("\t\t\t\t\t---------------------------------------\n");
    }
    else if(choice==2)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tCEBU TO LEYTE:\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = %d\n", 650);
        printf("\t\t\t\t\t\tROUND TRIP = %d\n", 1300);
        printf("\t\t\t\t\t---------------------------------------\n");
    }
    else if(choice==3)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tCEBU TO COTABATO:\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = %d\n", 1200);
        printf("\t\t\t\t\t\tROUND TRIP = %d\n", 2400);
        printf("\t\t\t\t\t----------------------------------------\n");
    }
    else if(choice==4)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\t\t\t\t\t\tCEBU TO BOHOL:\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = %d\n", 700);
        printf("\t\t\t\t\t\tROUND TRIP = %d\n", 1400);
        printf("\t\t\t\t\t------------------------------------------\n");
    }
    else if(choice==5)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\t\t\t\t\t\tCEBU TO MANILA:\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = %d\n", 1100);
        printf("\t\t\t\t\t\tROUND TRIP = %d\n", 2200);
        printf("\t\t\t\t\t------------------------------------------\n");
    }
    else if(choice==6)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\t\t\t\t\t\tCEBU TO SULTAN KUDARAT:\n");
        printf("\t\t\t\t\t\tONE WAY TRIP = %d\n", 1300);
        printf("\t\t\t\t\t\tROUND TRIP = %d\n", 2600);
        printf("\t\t\t\t\t------------------------------------------\n");
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
    }
    if(day==6)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tThere are 1 available flight!\n");
        printf("\t\t\t\t\t\t1. CEBU to BATANGAS\n");
        printf("\t\t\t\t\t---------------------------------------\n");
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
    }
     else
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\tERROR!!!!!\n");
        printf("\t\t\t\t\t\tENTER 1-7!!!!!\n");
        printf("\t\t\t\t\t\tPRESS ANY KEY!!!!!\n");
        printf("\t\t\t\t\t---------------------------------------\n");



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
        printf("\n\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
        printf("\t\t\t\t\t\tEmail: %s", email);
        printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
        printf("\n\t\t\t\t\tDestination: %s","BATANGAS\n\n");
        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 950);
            }
            else
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 1900);
            }
        }
        printf("\n\t\t\t\t\t-----------------------------------------\n");
    }
    if(choice==2)
    {
        printf("\n\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
        printf("\t\t\t\t\t\tEmail: %s", email);
        printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
        printf("\n\t\t\t\t\tDestination: %s","LEYTE\n\n");
        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 650);
            }
            else
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 1300);
            }
        }
        printf("\n\t\t\t\t\t-----------------------------------------\n");
    }
    if(choice==3)
    {
        printf("\n\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
        printf("\t\t\t\t\t\tEmail: %s", email);
        printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
        printf("\n\t\t\t\t\tDestination: %s","COTABATO\n\n");
        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 1200);
            }
            else
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 2400);
            }
        }
        printf("\n\t\t\t\t\t-----------------------------------------\n");
    }
    if(choice==4)
    {
        printf("\n\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
        printf("\t\t\t\t\t\tEmail: %s", email);
        printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
        printf("\n\t\t\t\t\tDestination: %s","BOHOL\n\n");
        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 700);
            }
            else
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 1400);
            }
        }
        printf("\n\t\t\t\t\t-----------------------------------------\n");
    }
     if(choice==5)
    {
        printf("\n\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
        printf("\t\t\t\t\t\tEmail: %s", email);
        printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
        printf("\n\t\t\t\t\tDestination: %s","MANILA\n\n");
        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 1100);
            }
            else
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 2200);
            }
        }
        printf("\n\t\t\t\t\t-----------------------------------------\n");
    }
    if(choice==6)
    {
        printf("\n\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\tName: %s %s\n", firstname, lastname);
        printf("\t\t\t\t\t\tEmail: %s", email);
        printf("\n\t\t\t\t\tContact Number: %lld", cellnumber);
        printf("\n\t\t\t\t\tDestination: SULTAN KUDARAT\n\n");
        printf("\n\t\t\t\t\t[1]ONE WAY TRIP.\t");
        printf("[2]ROUND WAY TRIP.");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &trip);
        {
            if(trip==1)
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 1300);
            }
            else
            {
                printf("\n\t\t\t\t\t\t\tFEE: %d", 2600);
            }
        }
        printf("\n\t\t\t\t\t-----------------------------------------\n");
    }
     else
    {
        printf("ERROR!!!!!");
    }

    getch();
    system("cls");
}


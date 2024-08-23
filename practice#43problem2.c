#include<stdio.h>
//declare function with 3 parameter
void ttlbill(double income, int consultime, double hourlyrate);

int main()
{
    //declare variables
    double income, hourlyrate;
    int consultime;
    //prompts the user to enter a data
    printf("Enter Client's income: ");
    //store the data to the variable
    scanf("%lf", &income);
    //prompts the user to enter a data
    printf("Enter Consultation Duration in Minutes: ");
    //store the data to the variable
    scanf("%d", &consultime);
    //prompts the user to enter a data
    printf("Enter Hourly rate: ");
    //store the data to the variable
    scanf("%lf", &hourlyrate);

    ttlbill(income, consultime, hourlyrate);

    return 0;
}
//function defination
void ttlbill(double income, int consultime, double hourlyrate)
{
    //declare a variable
    double Totalbill;

    //boolean expression
   if(income<=25000)
   {
       //if the condition is proven true this body of codes will executed
       if(consultime<=30)
       {
           //if the condition is proven true this body of codes will execute
           printf("\nTotal bill: &.2lf", hourlyrate);
       }
       else
       {
           //if the condition is proven false this body of code
           Totalbill = hourlyrate*0.40*((consultime-30.00)/60.00);
           printf("\nTotal bill: %.2lf", Totalbill);
       }
   }
   else
   {
       //if the condition is proven false this body of code
       if(consultime<=20)
       {
           //if the condition is proven true this body of codes will execute
           printf("\nTotal bill: %.2lf", hourlyrate);
       }
       else
       {
           //if the condition is proven false this body of code
           Totalbill= hourlyrate*0.70*((consultime-20.00)/60.00);
           printf("\nTotal bill: %.2lf", ttlbill);
       }
   }
}

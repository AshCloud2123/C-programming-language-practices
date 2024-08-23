#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

Midterm practical examination
*/
int main()
{
    //Declare variable
    char item[100];
    double itemprice = 0.0;
    double itemshipping = 0.0;
    double itemtotal = 0.0;
    int overnightdelivery;

    /*to shorten my code I use for loops to get data's from multiple people*/

    for(int i=1; i<=10; ++i)
    {
        //prompts the user to enter the name of order
        printf("Enter the item's name: \n");
        //store the data to variable
            scanf("%s", item);
        //prompts the user to enter the price
        printf("Enter item's price : \n");
        //store the data to the variable
            scanf("%lf", &itemprice);
        //prompts the user to know if the delivery is overnight
        printf("Overnight delivery (0 = No, 1 =Yes)?: \n");
        //store the data to the variable
            scanf("%d", &overnightdelivery);

         //selection statment
         if(overnightdelivery == 1)
            {
                //if the if statement is true this body will execute
                if(itemprice<10)
                {
                    /*after the if statement is true this nested if statement will be executed if the condition is true
                    */
                    itemshipping=2.00+5.00;
                }
                else
                   {
                       /*this is the default action if the if statement above is proven false*/
                       itemshipping=3.00+5.00;
                   }
            }
           if(overnightdelivery==0)
            {
                ////if the if statement is true this body will execute

                 if(itemprice<10)
                    {
                        /*after the if statement is true this nested if statement will be executed if the condition is true */
                        itemshipping=2.00;
                    }
                 else
                    {
                        /*this is the default action if the if statement above is proven false*/

                        itemshipping=3.00;
                    }
            }
            //print the output
            printf("Invoice:\n");
            printf("%-23s %15.2f\n", item, itemprice);
            printf("shipping %30.2f\n", itemshipping);
            itemtotal = itemprice + itemshipping;
            printf("total %33.2f\n", itemtotal);
            itemtotal = 0.0;

            printf("\n");
    }
    return 0;
}

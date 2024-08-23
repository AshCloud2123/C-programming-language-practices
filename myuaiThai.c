#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

Midterm practical examination
*/
int main()
{

    //Declare a variable first

    int num;

    /* I use for loop to have a maximum of 10 prompts a user can enter to determine his division  */

    for(int i=1; i<=10; ++i)
    {
        //prompts the user to enter their weight
        printf("Enter your weight: ");
        //stores the data input to the variable
        scanf("%d", &num);
        //selection statement that will set as restriction
        if(num>0 && num<112)
        {
            printf("You belong to Flyweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
        else if(num>=112 && num<115)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Super Flyweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
         else if(num>=115 && num<118)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Bantamweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
         else if(num>=118 && num<122)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Super Bantamweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
         else if(num>=122 && num<126)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Featherweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
          else if(num>=126 && num<130)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Super Featherweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
         else if(num>=130 && num<135)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Lightweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
         else if(num>=135 && num<140)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Super Lightweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
         else if(num>=140 && num<147)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Welterweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
        else if(num>=147 && num<154)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Super Welterweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
         else if(num>=154 && num<160)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Middleweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
        else if(num>=160 && num<167)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Super Middleweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
        else if(num>167 && num<175)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Light Heavyweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
        else if(num>175 && num<183)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Super Light Heavyweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
        else if(num>183 && num<190)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Cruiserweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
        else if(num>190 && num<220)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Heavyweight division!\n");
            printf("\n");
        }
        //selection statement that will set as restriction
        else if(num>=220)
        {
            /*if the condtion above is true this body will execute*/
            printf("You belong to Super Heavyweight division!\n");
            printf("\n");
        }
    }


    return 0;
}

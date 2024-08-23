#include<stdio.h>
#include<stdlib.h>
/*
Programmer: Espedillon Melchor

Midterm practical examination
*/
int main()
 {
int age;
int baby;
int attendingSchool;
int adultLife;


   for(int i=1; i<=15; i++)
   {
       printf("Enter age: ");
       scanf("%d", &age);
       if(age<=5 && age>=0)
       {
           baby+=age;
       }
       else if(age<=17 && age>=6)
       {
           attendingSchool+=age;
       }
       else if(age>18)
       {
           adultLife+=age;
       }
   }
   printf("Still baby = %d\nAttending school = %d\n Adult life = %d", baby, attendingSchool, adultLife);

    return 0;

}


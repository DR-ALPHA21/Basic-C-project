#include<stdio.h>
#include<conio.h>

void main()
{

   long int ID,numberofday,salary,daysalary;
   clrscr();

   printf("\nEnter ID number:-");
   scanf("%ld",&ID);
   printf("\nNumber of Days:-");
   scanf("%ld",&numberofday);
   printf("\n1Day Salary:-");
   scanf("%ld",&daysalary);

   salary=daysalary*numberofday;
   printf("\nID Number=%ld",ID);
   printf("\nSalary=%ld",salary);

   getch();

 }


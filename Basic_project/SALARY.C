#include<stdio.h>
#include<conio.h>

void main ()
{
  float Basicsalary,Dearnessallowonce,Incometax,Providentfund,Netsalary;
  clrscr();

  printf("Enter your Basic Salary:-");
  scanf("%f",Basicsalary);

  Dearnessallowonce=15*Basicsalary/100;
  Incometax=30*Basicsalary/100;
  Providentfund=8.33*Basicsalary/100;
  Netsalary=Basicsalary+Dearnessallowonce-(Incometax+Providentfund);


  printf("\nBasic Salary=%f",Basicsalary);
  printf("\nDearness Allowonce=%f",Dearnessallowonce);
  printf("\nIncome Tax=%lf",Incometax);
  printf("\nProvident Fund=%f",Providentfund);
  printf("\nNet Salary=%f",Netsalary);

  getch();

}
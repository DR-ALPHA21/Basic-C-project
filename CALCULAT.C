#include<stdio.h>
#include<conio.h>
void main()
{
   int number1,number2,choice,factorial=1,i;
   clrscr();

   printf("\nManu");
   printf("\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.division.\n5.Square & Cube.\n6.Factorial\n7.Exit \n");

   printf("\nEnter your Choice:-");
   scanf("%d",&choice);


   switch(choice)
   {
     case 1:
     printf("\nEnter Number1:-");
     scanf("%d",&number1);
     printf("\nEnter Number2:-");
     scanf("%d",&number2);
     printf("\nAddition=%d",number1+number2);
     break;

     case 2:
     printf("\nEnter Number1:-");
     scanf("%d",&number1);
     printf("\nEnter Number2:-");
     scanf("%d",&number2);
     printf("\nSubtraction=%d",number1-number2);
     break;

     case 3:
     printf("\nEnter Number1:-");
     scanf("%d",&number1);
     printf("\nEnter Number2:-");
     scanf("%d",&number2);
     printf("Multiplication=%d",number1*number2);
     break;

     case 4:
     printf("\nEnetr Number1:-");
     scanf("%d",&number1);
     printf("\nEnter Number2:-");
     scanf("%d",&number2);
     printf("\nDivision=%d",number1/number2);
     break;

     case 5:
     printf("\nEnter Number1:-");
     scanf("%d",&number1);
     printf("\nSquare=%d \nCube=%d",number1*number1,number1*number1*number1);
     break;

     case 6:
     printf("\nEnter Number1:-");
     scanf("%d",&number1);
     for(i=1;i<=number1;i++)
      {
	factorial=factorial*i;
       }
       printf("\nFactoral=%d",factorial);
       break;

     default:
     printf("\nInvalid Choice");
     break;

     }
     getch();
   }
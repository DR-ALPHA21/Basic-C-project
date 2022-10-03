#include<stdio.h>
#include<conio.h>
void main()
{
  char maritalstatus,gender;
  int age;
  clrscr();

  printf("\nEnter your Marital Status:-");
  scanf("%c",&maritalstatus);
  printf("\nEnter your Gender:-");
  scanf(" %c",&gender);
  printf("\nEnter your Age:-");
  scanf("%d",&age);

  if(maritalstatus=='M'||maritalstatus=='m')
   {
    printf("\nDriver is Insured");
   }
  else if(maritalstatus=='u'||maritalstatus=='U')
  {
    if(gender=='F'||gender=='f')
    {
      if(age>=25)
       {
	 printf("\nShe is Insured");
       }
      else
       {
	 printf("\nShe is NOT Insured");
       }
     }
   else if(gender=='M'||gender=='m')
     {
       if(age>=30)
	{
	  printf("\nHe is Insured");
	 }
       else
	{
	  printf("\nHe is NOT Isured");
	 }
       }
     }

   getch();

  }



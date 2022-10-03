#include<stdio.h>
#include<conio.h>
void main()

{
   char name[20];
   int rollno,english,hindi,maths,total,per;
   clrscr();

   printf("\nEnter your Name:-");
   scanf("%s",&name);
   printf("\nEnter your Roll No:-");
   scanf("%d",&rollno);
   printf("\nEnter your marks in Englesh:-");
   scanf("%d",&english);
   printf("\nHindi:-");
   scanf("%d",&hindi);
   printf("\nmaths:-");
   scanf("%d",&maths);

   total=english+hindi+maths;
   per=total/3;

   printf("\nName=%s",name);
   printf("\nRoll No=%d",rollno);
   printf("\nEnglish=%d \nHindi=%d \nMaths=%d",english,hindi,maths);
   printf("\nTotal=%d",total);
   printf("\nPercentage=%d",per);

   if(per>=60)
   {
    printf("\nGrade:-Distinction=%d",per);
   }
   else if(per>=50&&per<=59)
   {
    printf("\nGrade:-First Class=%d",per);
    }
    else if(per>=40&&per<=49)
    {
     printf("\nGrade:-Second Class=%d",per);
     }
     else if(per<=40)
     {
      printf("\nGrade:-Fail=%d",per);
      }
   getch();

}

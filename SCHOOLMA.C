#include<stdio.h>
#include<conio.h>
#include<string.h>
struct result
{
  int rollno;
  char name[10];
  int english,hindi,maths,science,total,per;
};
void main()
{
  struct result r[5];
  int i,max,hr;
  char hname[20];
  clrscr();

  for(i=0;i<=4;i++)
  {
    printf("\n Enter the Student Roll no:-");
    scanf("%d",&r[i].rollno);

    printf("\n Enter the Student Name:-");
    scanf("%s",&r[i].name);

    printf("\n******Enter the Subject Marks*******\n");

    printf("\n English Marks:-");
    scanf("%d",&r[i].english);

    printf("\n Hindi Marks:-");
    scanf("%d",&r[i].hindi);

    printf("\n Maths Marks:-");
    scanf("%d",&r[i].maths);

    printf("\n Science Marks:-");
    scanf("%d",&r[i].science);

    r[i].total=r[i].english+r[i].hindi+r[i].maths+r[i].science;
    r[i].per=r[i].total/4;
   }
   max=r[0].per;
   for(i=0;i<=4;i++)
   {
     if(r[i].per>max)
     {
       hr=r[i].rollno;
       strcpy(hname,r[i].name);
       max=r[i].per;
      }
    }
   printf("\n***************RESULT***************\n");
   printf("\n\tROLL NO\tNAME\tENGLISH\tHINDI\tMATHS\tSCIENCE\tTOTAL\tPERCENTAGE\n");

   for(i=0;i<=4;i++)
   {
    printf("\n\t%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d",r[i].rollno,r[i].name,r[i].english,r[i].hindi,r[i].maths,r[i].science,r[i].total,r[i].per);
    printf("\n\t_____________________________________________________");
   }
   printf("\nRoll no:-%d, %s has Highest Percentage=%d",hr,hname,max);

   getch();
}
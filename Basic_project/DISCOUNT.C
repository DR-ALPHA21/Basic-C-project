#include<stdio.h>
#include<conio.h>

void main()
 {
    long int ProductNumber,ProductQuantity,ProductRate,Bill;
    char ProductName[20];
    float DiscountonBill,TotalBill;
    clrscr();

    printf("Product Number:-");
    scanf("%ld",&ProductNumber);

    printf("Product Name:-");
    scanf("%s",&ProductName);

    printf("Product Rate:-");
    scanf("%ld",&ProductRate);

    printf("Product Quantity:-");
    scanf("%ld",&ProductQuantity);

    Bill=ProductRate*ProductQuantity;

    DiscountonBill=15*Bill/100;

    TotalBill=Bill-DiscountonBill;

    printf("\nProduct Number=%ld",ProductNumber);
    printf("\nProduct Name=%s",ProductName);
    printf("\nProduct Rate=%ld",ProductRate);
    printf("\nProduct Quantity=%ld",ProductQuantity);
    printf("\nBill=%ld",Bill);
    printf("\nDiscount on Bill=%-7.1f",DiscountonBill);
    printf("\nTotal Bill=%-7.1f",TotalBill);

    getch();

  }

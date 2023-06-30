#include<stdio.h>
#include<conio.h>

int main()
{
 int Num =0;

 printf("\nEnter an integer Number =");
 scanf("%d",&Num);

 (Num > 0)?printf("\nGiven number is positive"):printf("\nGiven number is negative");

 printf("\nThanks!!!...");

 getch();
 return 0;
}

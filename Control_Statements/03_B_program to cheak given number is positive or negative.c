#include<stdio.h>
#include<conio.h>

int main()
{
 int Num = 0;

 printf("\nEnter an integer Number = ");
 scanf("%d",&Num);

 if(Num == 0)
 {
   printf("\nGiven number is Neutral");
 }
 else if(Num > 0)
 {
   printf("\nGiven number is positive");
 }
 else
 {
  printf("\nGiven number is negative");
 }
 printf("\nThanks!!!...");

 getch();
 return 0;
}

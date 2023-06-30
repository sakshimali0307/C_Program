#include<stdio.h>
#include<conio.h>

int main()
{
 int Num=0;

 Up:

 printf("\nEnter an integer number = ");
 scanf("%d",&Num);

 if(Num == 0)
 {
  printf("\nGiven number is Neutral.\nplease change the number");

  goto Up;
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

#include<stdio.h>
#include<conio.h>

int main()
{
 int Num=0;

 printf("\nEnter an integer number = ");
 scanf("%d",&Num);

 if(Num > 0)
 {
 printf("Given number is positive ");
 }
 else
 {
 printf("Given Number is negative ");
 }
 printf("\nThanks!!!...");

 getch();
 return 0;
}

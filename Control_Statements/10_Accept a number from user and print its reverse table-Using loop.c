#include<stdio.h>
#include<conio.h>
int main()
{

 int No=0,i=0;

 printf("Enter a number To Print Its Reverse Table =");
 scanf("%d",&No);

 for(i=10; i>=1; i--)
 {
   printf("\n%d",(i * No));
 }
 printf("\nThanks!!!...");

 getch();
 return 0;
}

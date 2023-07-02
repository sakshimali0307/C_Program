#include<stdio.h>
#include<conio.h>
int main()
{
 int No=0,i=0;

 printf("\nEnter A Number To Print Table =");
 scanf("%d",&No);

 for(i=1; i<=10; i++)
 {
  printf("\n %d",(i*No));
 }
 printf("\nThanks!!!..");

 getch();
 return 0;
}

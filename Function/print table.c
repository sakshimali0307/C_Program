#include<stdio.h>
#include<conio.h>

void table(int);

int main()
{
  int No = 0;

  printf("\nEnter No to print its table = ");
  scanf("%d",&No);

  table(No);

  printf("\nThanks...");

  getch();
  return 0;
}

void table(int Num)
{
 int i = 0;

 printf("\n\nTable for %d is => \n",Num);

 for(i = 1; i <= 10; i++)
 {
   printf("\n\t %3d ",i * Num);
 }
 return 0;
}


























































#include<stdio.h>
#include<conio.h>

int main()
{
  int No = 0, i = 0;

  printf("\nEnter a Number to Print it's Table in Reverse Order =");
  scanf("%d",&No);
  i = 10;
  printf("\n====================================\n");
  while(i >= 1)
  {
   printf("\n%d",(i * No));
   i--;
  }
  printf("\n=====================\n");

  getch();
  return 0;
}

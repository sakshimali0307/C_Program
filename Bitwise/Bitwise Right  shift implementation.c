#include <stdio.h>
#include<conio.h>

int main()
{
  int No=0, Res=0;
  
  printf("\nEnter a Number =");
  scanf("%d",&No);
  
  Res = No >> 4;
  
  printf("\nResult = %d >> 4 = %d", No, Res);
  
  getch();
  return 0;
}
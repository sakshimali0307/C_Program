#include <stdio.h>
#include<conio.h>

int main()
{
  int No1=0, No2=0, Res=0;
  
  printf("\nEnter first number =");
  scanf("%d",&No1);
  
  printf("\nEnter second number =");
  scanf("%d",&No2);
  
  Res = No1 ^ No2;
  
  printf("\nResult => %d ^ %d = %d", No1, No2, Res);
  
  getch();
  return 0;
}
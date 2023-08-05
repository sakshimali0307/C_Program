#include<stdio.h>
#include<conio.h>

int main()
{
  int No1=0, No2=0, Res=0;
  
  printf("\nEnter first Number =");
  scanf("%d",&No1);
  
  printf("\nEnter second Number=");
  scanf("%d",&No2);
  
  Res = No1 | No2;
  
  printf("\n Result => %d | %d = %d",No1, No2, Res);
   
  getch();
  return 0;
}
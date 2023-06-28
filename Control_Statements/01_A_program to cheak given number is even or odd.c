#include<stdio.h>
#include<conio.h>

  int main()
{
  int No=0;

  printf("\n Enter the number=");
  scanf("%d",&No);

  if(No%2==0)
  {
   printf("\nGiven number is even");
  }
  else
  {
   printf("\nGiven number is odd");
  }
  printf("\nThanks!!!..");

  getch();
  return 0;
}

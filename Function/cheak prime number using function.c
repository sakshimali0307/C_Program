#include<stdio.h>
#include<conio.h>

typedef int Bool;
#define True 1
#define False 0

Bool Is_prime(int);

int main()
{
  int No=0;
  Bool BRet = False;

  printf("\nEnter A Positive Number =");
  scanf("%d",&No);

  BRet = Is_prime(No);

  if( BRet == True )
    {
      printf("\nGiven %d is Prime Number.",No);
    }
    else
    {
      printf("\nGiven %d is Not Prime Number.",No);
    }
  getch();
  return 0;
}

int Is_prime(int Num)
{
   int i = 0;

   for(i = 2; i < Num; i++)
   {
      if(Num % i == 0)
      {
          return 0;
      }
   }
   return 1;
}

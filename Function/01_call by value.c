#include<stdio.h>
#include<conio.h>

int find_max(int, int);

 int main()
{
   int N1 = 0, N2 = 0, max = 0;

   printf("\nEnter two No's =");
   scanf("%d%d",&N1,&N2);

   max = find_max(N1, N2);

   if(max == -2)
   {
     printf("invalid");
   }
   else if(max == -1)
   {
     printf("Equal");
   }
   else
   {
     printf("\nMaximum is = %d",max);
   }
   getch();
   return 0;
}
int find_max(int Num1,int Num2)
{
  int Ret = 0;

  if(Num1 < 0 || Num2 < 0)
  {
    Ret = -2;
  }
  else if(Num1 == Num2)
  {
    Ret = -1;
  }
  else if(Num1 > Num2)
  {
    Ret = Num1;
  }
  else
  {
    Ret = Num2;
  }
  return Ret;
}

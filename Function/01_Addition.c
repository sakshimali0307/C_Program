#include<stdio.h>
#include<conio.h>

 int Add(int x, int y)
 {
     int sum = 0;

     sum = x + y;

     return sum;
 }
 int main()
 {
   int N1 = 0, N2 = 0, Res = 0;

   printf("\nEnter No1 =");
   scanf("%d",&N1);

   printf("\nEnter No2 =");
   scanf("%d",&N2);

   Res = Add(N1,N2);

   printf("\nAddition of %d & %d is = %d",N1, N2, Res);

   printf("\nThanks..");

   getch();
   return 0;
 }

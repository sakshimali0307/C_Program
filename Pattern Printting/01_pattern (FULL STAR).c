#include<stdio.h>
#include<conio.h>

 int main()
 {
   int i = 0, j = 0, r = 0, c = 0;

   printf("\nEnter Row value For Pattern =");
   scanf("%d",&r);
   printf("\nEnter Column Value For Pattern =");
   scanf("%d",&c);

   printf("\n==============Pattern====================\n");

   for(i = 1; i <= r; i++)
   {
      for(j = 1; j <= c; j++)
      {
        printf(" * ");
      }
    printf("\n");
   }
  printf("\n=============================\n");

  getch();
  return 0;
 }

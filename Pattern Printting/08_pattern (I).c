#include<stdio.h>
#include<conio.h>

int main()
{
int i=0, j=0, x=0;

printf("\nEnter Row and column size : ");
scanf("%d",&x);

printf("\npattern is =>\n\n");

 for(i = 1; i <= x; i++)
 {
   for(j = 1; j <= x; j++)
   {
     if(i == 1 || i == x || j ==  (x/2)+1)
   {
    printf(" * ");
   }
   else
  {
   printf("   ");
  }
   }
   printf("\n");
   }
   printf("\n=======================\n");
   getch();
   return 0;
 }



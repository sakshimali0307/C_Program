#include<stdio.h>
#include<conio.h>
 int main()
 {
  int i = 0, j = 0, x = 0;

  printf("Enter size for pattern =");
  scanf("%d",&x);

  printf("\n\n=================pattern=================\n\n");

  for(i = 1; i <= x; i++)
  {
    for(j = 1; j <= x; j++)
    {
     if(i == 1 || i == x || i == j)
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
  printf("\n===========================================\n");

  getch();
  return 0;
 }

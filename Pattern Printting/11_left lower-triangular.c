#include<stdio.h>
#include<conio.h>

 int main()
{
  int i = 0, j = 0, X = 0;


  printf("\nEnter Size =");
  scanf("%d",&X);

  printf("\n\n Pattern is => \n\n");

  for(i = 1; i <= X; i++)
  {
    for(j = 1;j <= X; j++)
    {
      if(i >= j)
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
  getch();
  return 0;

  }

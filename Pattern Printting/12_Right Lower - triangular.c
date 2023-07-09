#include<stdio.h>
#include<conio.h>

int main()
{
  int i = 0, j = 0, X = 0;

  printf("\nEnter Size =");
  scanf("%d",&X);

  printf("\n\nPattern is >=\n\n");

  for(i = 0; i <=X; i++)
  {
    for(j = 0; j <= X; j++)
    {
      if(i+j <= X+1)
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

#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0, c = 0, x = 0;

  printf("\nEnter Size for pattern = ");
  scanf("%d",&x);

  printf("\n ========== Pattern ===========\n");

  for(r = 1; r <= x; r++)
  {
    for(c = 1; c <= x; c++)
    {
      if(r >= c)
      {
      printf(" Q ");
      }
      else

      printf("   ");
    }
    printf("\n");
  }
  printf("\n==================================\n");

  getch();
  return 0;
}

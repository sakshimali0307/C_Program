#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0, c = 0, x = 0, i = 0;

  printf("\nEnter Size for Pattern =");
  scanf("%d",&x);

  printf("\n========== Pattern ============\n");

  for(r = 1; r <= x; r++)
  {
    for(c = 1,i = 2; c <= x; c++,i++)
    {
    if(r >= c)
    {
    printf(" %d ",i);
    i++;
    }
    else

    printf("   ");
    }
    printf("\n");
  }

  printf("\n=================================\n");

  getch();
  return 0;
}

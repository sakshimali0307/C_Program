#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0, c = 0, x = 0, a = '\0';

  printf("\nEnter Size for Pattern =");
  scanf("%d",&x);

  printf("\n===========Pattern=============\n");

  for(r = 1,a = 'A'; r <= x; r++,a++)
  {
   for(c = 1; c <= x; c++)
   {
    if( r >= c)
    {
    printf(" %c ",a);
    }
    else
    printf("   ");
   }
   printf("\n");
  }
  printf("===================================");

  getch();
  return 0;
}

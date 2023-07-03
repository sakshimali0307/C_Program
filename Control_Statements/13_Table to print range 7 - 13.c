#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0, c = 0;

  printf("\nTable in range 7 to 13 =>");

  printf("\n==============**************==================\n");

  for(r = 1; r <= 10; r++)
  {
    for(c = 7; c <= 13; c++)
    {
      printf("%-4d",r * c);
    }
    printf("\n");
  }
  printf("\n=========================================\n");

  getch();
  return 0;
}
